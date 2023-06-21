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
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(10, 10, 871, 801));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 869, 799));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        img_view = new QLabel(scrollAreaWidgetContents_2);
        img_view->setObjectName(QStringLiteral("img_view"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(img_view->sizePolicy().hasHeightForWidth());
        img_view->setSizePolicy(sizePolicy);
        img_view->setScaledContents(true);
        img_view->setWordWrap(true);

        horizontalLayout->addWidget(img_view);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(900, 360, 71, 141));
        verticalLayout_4 = new QVBoxLayout(horizontalLayoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        compactnessBox = new QSpinBox(horizontalLayoutWidget);
        compactnessBox->setObjectName(QStringLiteral("compactnessBox"));
        compactnessBox->setMinimum(1);
        compactnessBox->setMaximum(999);
        compactnessBox->setValue(20);

        verticalLayout_4->addWidget(compactnessBox);

        wndBox = new QSpinBox(horizontalLayoutWidget);
        wndBox->setObjectName(QStringLiteral("wndBox"));
        wndBox->setMinimum(2);
        wndBox->setMaximum(999);
        wndBox->setValue(112);

        verticalLayout_4->addWidget(wndBox);

        segmentsBox = new QSpinBox(horizontalLayoutWidget);
        segmentsBox->setObjectName(QStringLiteral("segmentsBox"));
        segmentsBox->setMaximum(9999);
        segmentsBox->setValue(200);

        verticalLayout_4->addWidget(segmentsBox);

        sigmaBox = new QSpinBox(horizontalLayoutWidget);
        sigmaBox->setObjectName(QStringLiteral("sigmaBox"));
        sigmaBox->setValue(3);

        verticalLayout_4->addWidget(sigmaBox);

        dsBox = new QSpinBox(horizontalLayoutWidget);
        dsBox->setObjectName(QStringLiteral("dsBox"));
        dsBox->setValue(3);

        verticalLayout_4->addWidget(dsBox);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(980, 360, 211, 141));
        verticalLayout_5 = new QVBoxLayout(horizontalLayoutWidget_2);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_5->addWidget(label_3);

        label_8 = new QLabel(horizontalLayoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        verticalLayout_5->addWidget(label_8);

        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_5->addWidget(label_2);

        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_5->addWidget(label);

        label_7 = new QLabel(horizontalLayoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        verticalLayout_5->addWidget(label_7);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(900, 570, 298, 191));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        class_other = new QRadioButton(horizontalLayoutWidget_3);
        class_other->setObjectName(QStringLiteral("class_other"));

        verticalLayout->addWidget(class_other);

        class_mussel = new QRadioButton(horizontalLayoutWidget_3);
        class_mussel->setObjectName(QStringLiteral("class_mussel"));

        verticalLayout->addWidget(class_mussel);

        class_ciona = new QRadioButton(horizontalLayoutWidget_3);
        class_ciona->setObjectName(QStringLiteral("class_ciona"));

        ver