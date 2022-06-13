
import cv2  # Tested with opencv version 3.0.0.
import os.path
import numpy as np
import argparse
from natsort import natsorted
from colorama import Fore, Back, Style
from skimage import exposure
from skimage.segmentation import slic
from skimage.segmentation import mark_boundaries

import sys
from PyQt4 import QtCore, QtGui, uic
from PyQt4.QtGui import *
from VOClabelcolormap import color_map

qtCreatorFile = "truth_and_crop_qt4.ui"

# Control flags
#DEBUG = False

# Constants
APP_NAME = 'Truth and Crop'
IMAGES_OUT_DIR = 'images/'
INT_MASKS_OUT_DIR = 'masks/'
RGB_MASKS_OUT_DIR = 'PASCALVOCmasks/'
FULL_MASKS_OUT_DIR = 'full-masks/'
VALID_EXT = '.JPG'  # File extension to consider valid when searching for prv/next image
IMAGE_EXT = '.jpg'  # Output file extension
MASK_EXT = '_mask.jpg'
PX_INTENSITY = 0.4
N_CHANNELS = 2

# Constants - class labels
NCLASSES = 5
CLASS_OTHER = 0
CLASS_MUSSEL = 1
CLASS_CIONA = 2
CLASS_STYELA = 3
CLASS_VOID = 4

T_INDEX_SEGMENT = 0
T_INDEX_LABEL = 1

OP_ADD = 0
OP_REMOVE = 1

Ui_MainWindow, QtBaseClass = uic.loadUiType(qtCreatorFile)


class TruthAndCropApp(QtGui.QMainWindow, Ui_MainWindow):

    def __init__(self, debug=None):
        QtGui.QMainWindow.__init__(self)
        Ui_MainWindow.__init__(self)
        self.setupUi(self)
        self.setWindowIcon(QtGui.QIcon('images/icon.png'))

        # Init
        if debug:
            self.debug = True
        else:
            self.debug = False

        self.class_label = CLASS_OTHER

        # Init progressBar
        self.progressBar.setMinimum = 0
        self.progressBar.setMaximum = 100
        self.progressBarFloatValue = 0.0
        self.progressBar.setValue(0)

        #self.currentImageIndex = 0  # setting this automatically now
        self.cropping = False
        self.textEditMode.setText("Label")
        self.labeled_superpixel_list = []
        self.__init_lcds()
        self.w = self.wndBox.value()
        self.ds = self.dsBox.value()
        self.nseg = self.segmentsBox.value()
        self.sigma = self.sigmaBox.value()
        self.compactness = self.compactnessBox.value()

        self.cmap = color_map()

        self.enforceConnectivityBox.setChecked(True)
        self.enforce = self.enforceConnectivityBox.isChecked()

        self.groupBox.setStyleSheet(
            "QGroupBox { background-color: rgb(255, 255, 255); border:1px solid rgb(255, 170, 255); }")

        self.img_view.mousePressEvent = self.__handle_click

        # Connect handlers to signals from QPushButton(s)
        self.doneBtn.clicked.connect(self.__handle_done_btn)
        self.cropBtn.clicked.connect(self.__handle_crop_btn)
        self.refreshBtn.clicked.connect(self.load_new_image)
        self.toggleBtn.clicked.connect(self.__handle_toggle_btn)
        self.inFile.clicked.connect(self.get_input_file)
        self.outFile.clicked.connect(self.get_output_folder)
        self.nextBtn.clicked.connect(self.__handle_next_btn)
        self.previousBtn.clicked.connect(self.__handle_previous_btn)

        # Connect handlers to QSpinBox(es)
        self.wndBox.valueChanged.connect(self.__handle_wnd_box)
        self.dsBox.valueChanged.connect(self.__handle_ds_box)
        self.segmentsBox.valueChanged.connect(self.__handle_nseg_box)
        self.sigmaBox.valueChanged.connect(self.__handle_sigma_box)
        self.compactnessBox.valueChanged.connect(self.__handle_compactness_box)

        # Connect handler to QCheckBox
        self.enforceConnectivityBox.stateChanged.connect(
            self.__handle_enforce_cbox)

        # Connect handlers to QRadioButton(s)
        self.class_other.toggled.connect(
            lambda: self.btn_state(self.class_other))
        self.class_mussel.toggled.connect(
            lambda: self.btn_state(self.class_mussel))
        self.class_ciona.toggled.connect(
            lambda: self.btn_state(self.class_ciona))
        self.class_styela.toggled.connect(
            lambda: self.btn_state(self.class_styela))
        self.class_void.toggled.connect(
            lambda: self.btn_state(self.class_void))

    def __init_lcds(self):

        self.class_qty = np.zeros(NCLASSES)
        self.lcd_values = np.zeros(NCLASSES)

    def __reset_state(self):
        self.showSuperPx = False
        self.superPxGenerated = False
        self.drawing_list = []