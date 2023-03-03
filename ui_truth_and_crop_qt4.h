/********************************************************************************
** Form generated from reading UI file 'truth_and_crop_qt4Sa2743.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TRUTH_AND_CROP_QT4SA2743_H
#define TRUTH_AND_CROP_QT4SA2743_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TruthAndCrop
{
public:
    QWidget *centralwidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout;
    QLabel *img_view;
    QWidget *horizontalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QSpinBox *compactnessBox;
    QSpinBox *wndBox;
    QSpinBox *segmentsBox;
    QSpinBox *sigmaBox;
    QSpinBox *dsBox;
    QWidget *horizontalLayoutWidget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_7;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QRadioButton *class_other;
    QRadioButton *class_mussel;
    QRadioButton *class_ciona;
    QRadioButton *class_styela;
    QRadioButton *class_void;
    QVBoxLayout *verticalLayout_6;
    QLCDNumber *lcdNumber_0;
    QLCDNumber *lcdNumber_1;
    QLCDNumber *lcdNumber_2;
    QLCDNumber *lcdNumber_3;
    QLCDNumber *lcdNumber_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *refreshBtn;
    QPushButton *cropBtn;
    QPushButton *toggleBtn;
    QPushButton *doneBtn;
    QCheckBox *enforceConnectivityBox;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QTextEdit *imageField;
    QLabel *label_4;
    QTextEdit *outputPath;
    QProgressBar *progressBar;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *inFile;
    QPushButton *outFile;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *previousBtn;
    QPushButton *nextBtn;
    QLabel *label_5;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QGroupBox *groupBox_3;
    QTextEdit *textEdit;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TruthAndCrop)
    {
        if (TruthAndCrop->objectName().isEmpty())
            TruthAndCrop->setObjectName(QStringLiteral("TruthAndCrop"));
        TruthAndCrop->resize(1212, 923);
        centralwidget = new QWidget(TruthAndCrop);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        scroll