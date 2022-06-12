
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