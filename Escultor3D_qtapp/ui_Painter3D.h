/********************************************************************************
** Form generated from reading UI file 'Painter3D.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTER3D_H
#define UI_PAINTER3D_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <color.h>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSave;
    QWidget *centralwidget;
    QGridLayout *gridLayout_8;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *buttonPVoxel;
    QRadioButton *buttonPBox;
    QRadioButton *buttonPSphere;
    QRadioButton *buttonPEllipsoid;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *buttonCVoxel;
    QRadioButton *buttonCBox;
    QRadioButton *buttonCSphere;
    QRadioButton *buttonCEllipsoid;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    Plotter *widget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_2;
    QSlider *sliderYbox;
    QLCDNumber *lcdNumber_13;
    QLCDNumber *lcdNumber_11;
    QLCDNumber *lcdNumber_12;
    QSlider *silderXBox;
    QSlider *sliderYBox;
    QLabel *label_12;
    QLabel *label_16;
    QLabel *label_15;
    QGridLayout *gridLayout_3;
    QLCDNumber *lcdNumber_10;
    QLCDNumber *lcdNumber_9;
    QSlider *sliderRXellipsoid;
    QSlider *sliderRZellipsoid;
    QLCDNumber *lcdNumber_8;
    QSlider *sliderRYellipsoid;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_11;
    QLabel *label_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QGridLayout *gridLayout_4;
    QLCDNumber *lcdNumber_3;
    QSlider *horizontalSliderX;
    QLabel *label_22;
    QLCDNumber *lcdNumber_2;
    QSlider *horizontalSliderY;
    QLabel *label_23;
    QLCDNumber *lcdNumber;
    QSlider *horizontalSlider_3;
    QLabel *label_24;
    QPushButton *pushButton;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QGridLayout *gridLayout;
    QLCDNumber *lcdNumber_4;
    QSlider *sliderRed;
    QLabel *label_18;
    QLCDNumber *lcdNumber_6;
    QSlider *sliderGreen;
    QLabel *label_19;
    QLCDNumber *lcdNumber_5;
    QSlider *sliderBlue;
    QLabel *label_20;
    QLCDNumber *lcdNumber_7;
    QSlider *sliderAlpha;
    QLabel *label_21;
    color *widget_2;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_5;
    QLCDNumber *lcdNumber_14;
    QSlider *sliderRsphere;
    QLabel *label_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(607, 616);
        MainWindow->setMinimumSize(QSize(0, 0));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_8 = new QGridLayout(centralwidget);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMaximumSize(QSize(100, 50));

        verticalLayout_4->addWidget(label_6);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonPVoxel = new QRadioButton(centralwidget);
        buttonPVoxel->setObjectName(QString::fromUtf8("buttonPVoxel"));

        horizontalLayout->addWidget(buttonPVoxel);

        buttonPBox = new QRadioButton(centralwidget);
        buttonPBox->setObjectName(QString::fromUtf8("buttonPBox"));

        horizontalLayout->addWidget(buttonPBox);

        buttonPSphere = new QRadioButton(centralwidget);
        buttonPSphere->setObjectName(QString::fromUtf8("buttonPSphere"));

        horizontalLayout->addWidget(buttonPSphere);

        buttonPEllipsoid = new QRadioButton(centralwidget);
        buttonPEllipsoid->setObjectName(QString::fromUtf8("buttonPEllipsoid"));

        horizontalLayout->addWidget(buttonPEllipsoid);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        buttonCVoxel = new QRadioButton(centralwidget);
        buttonCVoxel->setObjectName(QString::fromUtf8("buttonCVoxel"));

        horizontalLayout_2->addWidget(buttonCVoxel);

        buttonCBox = new QRadioButton(centralwidget);
        buttonCBox->setObjectName(QString::fromUtf8("buttonCBox"));
        buttonCBox->setAutoFillBackground(false);

        horizontalLayout_2->addWidget(buttonCBox);

        buttonCSphere = new QRadioButton(centralwidget);
        buttonCSphere->setObjectName(QString::fromUtf8("buttonCSphere"));

        horizontalLayout_2->addWidget(buttonCSphere);

        buttonCEllipsoid = new QRadioButton(centralwidget);
        buttonCEllipsoid->setObjectName(QString::fromUtf8("buttonCEllipsoid"));

        horizontalLayout_2->addWidget(buttonCEllipsoid);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout);


        verticalLayout_8->addLayout(verticalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        widget = new Plotter(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(350, 350));
        widget->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_7->addWidget(widget);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sliderYbox = new QSlider(centralwidget);
        sliderYbox->setObjectName(QString::fromUtf8("sliderYbox"));
        sliderYbox->setCursor(QCursor(Qt::PointingHandCursor));
        sliderYbox->setMaximum(100);
        sliderYbox->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderYbox, 2, 1, 1, 1);

        lcdNumber_13 = new QLCDNumber(centralwidget);
        lcdNumber_13->setObjectName(QString::fromUtf8("lcdNumber_13"));
        lcdNumber_13->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_13->setDigitCount(3);
        lcdNumber_13->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumber_13, 1, 0, 1, 1);

        lcdNumber_11 = new QLCDNumber(centralwidget);
        lcdNumber_11->setObjectName(QString::fromUtf8("lcdNumber_11"));
        lcdNumber_11->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_11->setFrameShadow(QFrame::Sunken);
        lcdNumber_11->setLineWidth(0);
        lcdNumber_11->setMidLineWidth(1);
        lcdNumber_11->setDigitCount(3);
        lcdNumber_11->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumber_11, 0, 0, 1, 1);

        lcdNumber_12 = new QLCDNumber(centralwidget);
        lcdNumber_12->setObjectName(QString::fromUtf8("lcdNumber_12"));
        lcdNumber_12->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_12->setDigitCount(3);
        lcdNumber_12->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_2->addWidget(lcdNumber_12, 2, 0, 1, 1);

        silderXBox = new QSlider(centralwidget);
        silderXBox->setObjectName(QString::fromUtf8("silderXBox"));
        silderXBox->setCursor(QCursor(Qt::PointingHandCursor));
        silderXBox->setMaximum(100);
        silderXBox->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(silderXBox, 0, 1, 1, 1);

        sliderYBox = new QSlider(centralwidget);
        sliderYBox->setObjectName(QString::fromUtf8("sliderYBox"));
        sliderYBox->setCursor(QCursor(Qt::PointingHandCursor));
        sliderYBox->setMaximum(100);
        sliderYBox->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(sliderYBox, 1, 1, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 0, 2, 1, 1);

        label_16 = new QLabel(centralwidget);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 1, 2, 1, 1);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 2, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_2, 1, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        lcdNumber_10 = new QLCDNumber(centralwidget);
        lcdNumber_10->setObjectName(QString::fromUtf8("lcdNumber_10"));
        lcdNumber_10->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_10->setDigitCount(3);
        lcdNumber_10->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_10, 1, 0, 1, 1);

        lcdNumber_9 = new QLCDNumber(centralwidget);
        lcdNumber_9->setObjectName(QString::fromUtf8("lcdNumber_9"));
        lcdNumber_9->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_9->setDigitCount(3);
        lcdNumber_9->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_9, 2, 0, 1, 1);

        sliderRXellipsoid = new QSlider(centralwidget);
        sliderRXellipsoid->setObjectName(QString::fromUtf8("sliderRXellipsoid"));
        sliderRXellipsoid->setCursor(QCursor(Qt::PointingHandCursor));
        sliderRXellipsoid->setMaximum(100);
        sliderRXellipsoid->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sliderRXellipsoid, 0, 1, 1, 1);

        sliderRZellipsoid = new QSlider(centralwidget);
        sliderRZellipsoid->setObjectName(QString::fromUtf8("sliderRZellipsoid"));
        sliderRZellipsoid->setCursor(QCursor(Qt::PointingHandCursor));
        sliderRZellipsoid->setMaximum(100);
        sliderRZellipsoid->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sliderRZellipsoid, 2, 1, 1, 1);

        lcdNumber_8 = new QLCDNumber(centralwidget);
        lcdNumber_8->setObjectName(QString::fromUtf8("lcdNumber_8"));
        lcdNumber_8->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_8->setDigitCount(3);
        lcdNumber_8->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_3->addWidget(lcdNumber_8, 0, 0, 1, 1);

        sliderRYellipsoid = new QSlider(centralwidget);
        sliderRYellipsoid->setObjectName(QString::fromUtf8("sliderRYellipsoid"));
        sliderRYellipsoid->setCursor(QCursor(Qt::PointingHandCursor));
        sliderRYellipsoid->setMaximum(100);
        sliderRYellipsoid->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(sliderRYellipsoid, 1, 1, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 2, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 1, 2, 1, 1);

        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 2, 2, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 1, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_6->addWidget(label_3, 0, 0, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_6->addWidget(label_4, 0, 1, 1, 1, Qt::AlignHCenter);


        verticalLayout_7->addLayout(gridLayout_6);


        horizontalLayout_3->addLayout(verticalLayout_7);

        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5, 0, Qt::AlignHCenter);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        lcdNumber_3 = new QLCDNumber(centralwidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setDigitCount(3);
        lcdNumber_3->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_3->setProperty("intValue", QVariant(20));

        gridLayout_4->addWidget(lcdNumber_3, 0, 0, 1, 1);

        horizontalSliderX = new QSlider(centralwidget);
        horizontalSliderX->setObjectName(QString::fromUtf8("horizontalSliderX"));
        horizontalSliderX->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSliderX->setMaximum(100);
        horizontalSliderX->setPageStep(10);
        horizontalSliderX->setSliderPosition(20);
        horizontalSliderX->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSliderX, 0, 1, 1, 1);

        label_22 = new QLabel(centralwidget);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_4->addWidget(label_22, 0, 2, 1, 1);

        lcdNumber_2 = new QLCDNumber(centralwidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setDigitCount(3);
        lcdNumber_2->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_2->setProperty("intValue", QVariant(20));

        gridLayout_4->addWidget(lcdNumber_2, 1, 0, 1, 1);

        horizontalSliderY = new QSlider(centralwidget);
        horizontalSliderY->setObjectName(QString::fromUtf8("horizontalSliderY"));
        horizontalSliderY->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSliderY->setMaximum(100);
        horizontalSliderY->setPageStep(10);
        horizontalSliderY->setSliderPosition(20);
        horizontalSliderY->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSliderY, 1, 1, 1, 1);

        label_23 = new QLabel(centralwidget);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_4->addWidget(label_23, 1, 2, 1, 1);

        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy);
        lcdNumber->setLineWidth(1);
        lcdNumber->setDigitCount(3);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber->setProperty("value", QVariant(20.000000000000000));
        lcdNumber->setProperty("intValue", QVariant(20));

        gridLayout_4->addWidget(lcdNumber, 2, 0, 1, 1);

        horizontalSlider_3 = new QSlider(centralwidget);
        horizontalSlider_3->setObjectName(QString::fromUtf8("horizontalSlider_3"));
        horizontalSlider_3->setCursor(QCursor(Qt::PointingHandCursor));
        horizontalSlider_3->setMaximum(100);
        horizontalSlider_3->setPageStep(10);
        horizontalSlider_3->setSliderPosition(20);
        horizontalSlider_3->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(horizontalSlider_3, 2, 1, 1, 1);

        label_24 = new QLabel(centralwidget);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_4->addWidget(label_24, 2, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_3->addWidget(pushButton);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lcdNumber_4 = new QLCDNumber(centralwidget);
        lcdNumber_4->setObjectName(QString::fromUtf8("lcdNumber_4"));
        lcdNumber_4->setFocusPolicy(Qt::NoFocus);
        lcdNumber_4->setLayoutDirection(Qt::LeftToRight);
        lcdNumber_4->setAutoFillBackground(true);
        lcdNumber_4->setFrameShape(QFrame::Box);
        lcdNumber_4->setFrameShadow(QFrame::Raised);
        lcdNumber_4->setLineWidth(1);
        lcdNumber_4->setMidLineWidth(0);
        lcdNumber_4->setSmallDecimalPoint(false);
        lcdNumber_4->setDigitCount(3);
        lcdNumber_4->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_4->setProperty("intValue", QVariant(255));

        gridLayout->addWidget(lcdNumber_4, 0, 0, 1, 1);

        sliderRed = new QSlider(centralwidget);
        sliderRed->setObjectName(QString::fromUtf8("sliderRed"));
        sliderRed->setEnabled(true);
        sliderRed->setCursor(QCursor(Qt::PointingHandCursor));
        sliderRed->setMaximum(255);
        sliderRed->setValue(255);
        sliderRed->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderRed, 0, 1, 1, 1);

        label_18 = new QLabel(centralwidget);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout->addWidget(label_18, 0, 2, 1, 1);

        lcdNumber_6 = new QLCDNumber(centralwidget);
        lcdNumber_6->setObjectName(QString::fromUtf8("lcdNumber_6"));
        lcdNumber_6->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_6->setDigitCount(3);
        lcdNumber_6->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_6->setProperty("intValue", QVariant(255));

        gridLayout->addWidget(lcdNumber_6, 1, 0, 1, 1);

        sliderGreen = new QSlider(centralwidget);
        sliderGreen->setObjectName(QString::fromUtf8("sliderGreen"));
        sliderGreen->setCursor(QCursor(Qt::PointingHandCursor));
        sliderGreen->setMaximum(255);
        sliderGreen->setValue(255);
        sliderGreen->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderGreen, 1, 1, 1, 1);

        label_19 = new QLabel(centralwidget);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout->addWidget(label_19, 1, 2, 1, 1);

        lcdNumber_5 = new QLCDNumber(centralwidget);
        lcdNumber_5->setObjectName(QString::fromUtf8("lcdNumber_5"));
        lcdNumber_5->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_5->setSmallDecimalPoint(false);
        lcdNumber_5->setDigitCount(3);
        lcdNumber_5->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_5->setProperty("intValue", QVariant(255));

        gridLayout->addWidget(lcdNumber_5, 2, 0, 1, 1);

        sliderBlue = new QSlider(centralwidget);
        sliderBlue->setObjectName(QString::fromUtf8("sliderBlue"));
        sliderBlue->setCursor(QCursor(Qt::PointingHandCursor));
        sliderBlue->setMaximum(255);
        sliderBlue->setValue(255);
        sliderBlue->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderBlue, 2, 1, 1, 1);

        label_20 = new QLabel(centralwidget);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 2, 2, 1, 1);

        lcdNumber_7 = new QLCDNumber(centralwidget);
        lcdNumber_7->setObjectName(QString::fromUtf8("lcdNumber_7"));
        lcdNumber_7->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_7->setDigitCount(3);
        lcdNumber_7->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_7->setProperty("intValue", QVariant(255));

        gridLayout->addWidget(lcdNumber_7, 3, 0, 1, 1);

        sliderAlpha = new QSlider(centralwidget);
        sliderAlpha->setObjectName(QString::fromUtf8("sliderAlpha"));
        sliderAlpha->setCursor(QCursor(Qt::PointingHandCursor));
        sliderAlpha->setMaximum(255);
        sliderAlpha->setValue(255);
        sliderAlpha->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sliderAlpha, 3, 1, 1, 1);

        label_21 = new QLabel(centralwidget);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout->addWidget(label_21, 3, 2, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        verticalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(verticalLayout_5);

        widget_2 = new color(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(0, 100));
        widget_2->setMaximumSize(QSize(100, 16777215));
        widget_2->setAutoFillBackground(true);

        verticalLayout_6->addWidget(widget_2);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        lcdNumber_14 = new QLCDNumber(centralwidget);
        lcdNumber_14->setObjectName(QString::fromUtf8("lcdNumber_14"));
        lcdNumber_14->setCursor(QCursor(Qt::ArrowCursor));
        lcdNumber_14->setSegmentStyle(QLCDNumber::Flat);

        gridLayout_5->addWidget(lcdNumber_14, 0, 0, 1, 1);

        sliderRsphere = new QSlider(centralwidget);
        sliderRsphere->setObjectName(QString::fromUtf8("sliderRsphere"));
        sliderRsphere->setCursor(QCursor(Qt::PointingHandCursor));
        sliderRsphere->setMaximum(100);
        sliderRsphere->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(sliderRsphere, 0, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_5, 1, 0, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAutoFillBackground(false);

        gridLayout_7->addWidget(label_2, 0, 0, 1, 1, Qt::AlignHCenter);


        verticalLayout_6->addLayout(gridLayout_7);


        horizontalLayout_3->addLayout(verticalLayout_6);


        verticalLayout_8->addLayout(horizontalLayout_3);


        gridLayout_8->addLayout(verticalLayout_8, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 607, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionSave);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSliderX, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(horizontalSliderY, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(horizontalSlider_3, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(sliderRed, SIGNAL(valueChanged(int)), lcdNumber_4, SLOT(display(int)));
        QObject::connect(sliderGreen, SIGNAL(valueChanged(int)), lcdNumber_6, SLOT(display(int)));
        QObject::connect(sliderBlue, SIGNAL(valueChanged(int)), lcdNumber_5, SLOT(display(int)));
        QObject::connect(sliderAlpha, SIGNAL(valueChanged(int)), lcdNumber_7, SLOT(display(int)));
        QObject::connect(silderXBox, SIGNAL(valueChanged(int)), lcdNumber_11, SLOT(display(int)));
        QObject::connect(sliderYBox, SIGNAL(valueChanged(int)), lcdNumber_13, SLOT(display(int)));
        QObject::connect(sliderYbox, SIGNAL(valueChanged(int)), lcdNumber_12, SLOT(display(int)));
        QObject::connect(sliderRXellipsoid, SIGNAL(valueChanged(int)), lcdNumber_8, SLOT(display(int)));
        QObject::connect(sliderRYellipsoid, SIGNAL(valueChanged(int)), lcdNumber_10, SLOT(display(int)));
        QObject::connect(sliderRZellipsoid, SIGNAL(valueChanged(int)), lcdNumber_9, SLOT(display(int)));
        QObject::connect(sliderRsphere, SIGNAL(valueChanged(int)), lcdNumber_14, SLOT(display(int)));
        QObject::connect(horizontalSliderX, SIGNAL(valueChanged(int)), widget, SLOT(setX(int)));
        QObject::connect(horizontalSliderY, SIGNAL(valueChanged(int)), widget, SLOT(setY(int)));
        QObject::connect(pushButton, SIGNAL(clicked()), widget, SLOT(buildGrid()));
        QObject::connect(sliderRed, SIGNAL(valueChanged(int)), widget_2, SLOT(setRed(int)));
        QObject::connect(sliderGreen, SIGNAL(valueChanged(int)), widget_2, SLOT(setGreen(int)));
        QObject::connect(sliderBlue, SIGNAL(valueChanged(int)), widget_2, SLOT(setBlue(int)));
        QObject::connect(sliderAlpha, SIGNAL(valueChanged(int)), widget_2, SLOT(setAlpha(int)));
        QObject::connect(sliderRXellipsoid, SIGNAL(valueChanged(int)), widget, SLOT(setRx(int)));
        QObject::connect(sliderRYellipsoid, SIGNAL(valueChanged(int)), widget, SLOT(setRy(int)));
        QObject::connect(sliderRZellipsoid, SIGNAL(valueChanged(int)), widget, SLOT(setRz(int)));
        QObject::connect(silderXBox, SIGNAL(valueChanged(int)), widget, SLOT(setDimx(int)));
        QObject::connect(sliderYBox, SIGNAL(valueChanged(int)), widget, SLOT(setDimy(int)));
        QObject::connect(sliderYbox, SIGNAL(valueChanged(int)), widget, SLOT(setDimz(int)));
        QObject::connect(sliderRsphere, SIGNAL(valueChanged(int)), widget, SLOT(setR(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save OFF file", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Select the method", nullptr));
        buttonPVoxel->setText(QCoreApplication::translate("MainWindow", "Add Voxel", nullptr));
        buttonPBox->setText(QCoreApplication::translate("MainWindow", "Add Box", nullptr));
        buttonPSphere->setText(QCoreApplication::translate("MainWindow", "Add Sphere", nullptr));
        buttonPEllipsoid->setText(QCoreApplication::translate("MainWindow", "Add Ellipsoid", nullptr));
        buttonCVoxel->setText(QCoreApplication::translate("MainWindow", "Cut Voxel", nullptr));
        buttonCBox->setText(QCoreApplication::translate("MainWindow", "Cut Box", nullptr));
        buttonCSphere->setText(QCoreApplication::translate("MainWindow", "Cut Sphere", nullptr));
        buttonCEllipsoid->setText(QCoreApplication::translate("MainWindow", "Cut Ellipsoid", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Dimx", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Dimy", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Dimz", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Rx", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Ry", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Rz", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Select the dimensions of ellipsoid", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Select the dimension of box", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Select dimensions (grid)", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
#if QT_CONFIG(tooltip)
        lcdNumber->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_24->setText(QCoreApplication::translate("MainWindow", "Z", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "BuildGrid", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Select the color ", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "Transparency", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Select the dimension of Sphere", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTER3D_H
