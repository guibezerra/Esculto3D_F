/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionNovo;
    QAction *actionSalvar;
    QAction *actionCaneta;
    QAction *actionApagar_Caneta;
    QAction *actionCaixa;
    QAction *actionApagar_Caixa;
    QAction *actionEsfera;
    QAction *actionApagar_Esfera;
    QAction *actionElipsoide;
    QAction *actionApagar_Elipsoide;
    QWidget *centralWidget;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLCDNumber *lcd_esfera;
    QSlider *slider_raio;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QSlider *slider_rx;
    QLCDNumber *lcd_rx;
    QLabel *label_6;
    QSlider *slider_ry;
    QLCDNumber *lcd_ry;
    QLabel *label_7;
    QSlider *rz;
    QLCDNumber *lcd_rz;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QSlider *slider_Dimy;
    QLCDNumber *lcd_dimy;
    QSlider *slider_Dimz;
    QLCDNumber *lcd_dimx;
    QLabel *label_10;
    QLabel *label_9;
    QLCDNumber *lcd_dimz;
    QLabel *label_8;
    QSlider *slider_Dimx;
    Plotter *widget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QSlider *slider_r;
    QSlider *slider_g;
    QSlider *slider_b;
    QLabel *label_13;
    QLabel *label_12;
    QLabel *label_11;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QSlider *slider_profundidadeX;
    QLCDNumber *lcdeixo_x;
    QLabel *label_2;
    QSlider *slider_profundidadeY;
    QLCDNumber *lcdeixo_y;
    QLabel *label_3;
    QSlider *slider_profundidadeZ;
    QLCDNumber *lcdeixo_z;
    QMenuBar *menuBar;
    QMenu *menuArquivo;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(772, 577);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 83);"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionNovo = new QAction(MainWindow);
        actionNovo->setObjectName(QStringLiteral("actionNovo"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/novo"), QSize(), QIcon::Normal, QIcon::Off);
        actionNovo->setIcon(icon);
        actionSalvar = new QAction(MainWindow);
        actionSalvar->setObjectName(QStringLiteral("actionSalvar"));
        actionCaneta = new QAction(MainWindow);
        actionCaneta->setObjectName(QStringLiteral("actionCaneta"));
        actionApagar_Caneta = new QAction(MainWindow);
        actionApagar_Caneta->setObjectName(QStringLiteral("actionApagar_Caneta"));
        actionCaixa = new QAction(MainWindow);
        actionCaixa->setObjectName(QStringLiteral("actionCaixa"));
        actionApagar_Caixa = new QAction(MainWindow);
        actionApagar_Caixa->setObjectName(QStringLiteral("actionApagar_Caixa"));
        actionEsfera = new QAction(MainWindow);
        actionEsfera->setObjectName(QStringLiteral("actionEsfera"));
        actionApagar_Esfera = new QAction(MainWindow);
        actionApagar_Esfera->setObjectName(QStringLiteral("actionApagar_Esfera"));
        actionElipsoide = new QAction(MainWindow);
        actionElipsoide->setObjectName(QStringLiteral("actionElipsoide"));
        actionApagar_Elipsoide = new QAction(MainWindow);
        actionApagar_Elipsoide->setObjectName(QStringLiteral("actionApagar_Elipsoide"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(560, 10, 201, 67));
        groupBox_2->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"border-top-color: rgb(211, 215, 207);\n"
"color: rgb(238, 238, 236);"));
        groupBox_2->setAlignment(Qt::AlignCenter);
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        lcd_esfera = new QLCDNumber(groupBox_2);
        lcd_esfera->setObjectName(QStringLiteral("lcd_esfera"));
        lcd_esfera->setStyleSheet(QLatin1String("color: rgb(238, 238, 236);\n"
""));

        gridLayout->addWidget(lcd_esfera, 0, 3, 1, 1);

        slider_raio = new QSlider(groupBox_2);
        slider_raio->setObjectName(QStringLiteral("slider_raio"));
        slider_raio->setMaximum(60);
        slider_raio->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(slider_raio, 0, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(560, 90, 202, 125));
        groupBox_3->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        groupBox_3->setAlignment(Qt::AlignCenter);
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        slider_rx = new QSlider(groupBox_3);
        slider_rx->setObjectName(QStringLiteral("slider_rx"));
        slider_rx->setMaximum(60);
        slider_rx->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(slider_rx, 0, 1, 1, 1);

        lcd_rx = new QLCDNumber(groupBox_3);
        lcd_rx->setObjectName(QStringLiteral("lcd_rx"));

        gridLayout_2->addWidget(lcd_rx, 0, 2, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        slider_ry = new QSlider(groupBox_3);
        slider_ry->setObjectName(QStringLiteral("slider_ry"));
        slider_ry->setMaximum(60);
        slider_ry->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(slider_ry, 1, 1, 1, 1);

        lcd_ry = new QLCDNumber(groupBox_3);
        lcd_ry->setObjectName(QStringLiteral("lcd_ry"));

        gridLayout_2->addWidget(lcd_ry, 1, 2, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        rz = new QSlider(groupBox_3);
        rz->setObjectName(QStringLiteral("rz"));
        rz->setMaximum(60);
        rz->setOrientation(Qt::Horizontal);

        gridLayout_2->addWidget(rz, 2, 1, 1, 1);

        lcd_rz = new QLCDNumber(groupBox_3);
        lcd_rz->setObjectName(QStringLiteral("lcd_rz"));

        gridLayout_2->addWidget(lcd_rz, 2, 2, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(560, 230, 201, 125));
        groupBox_4->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        groupBox_4->setAlignment(Qt::AlignCenter);
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        slider_Dimy = new QSlider(groupBox_4);
        slider_Dimy->setObjectName(QStringLiteral("slider_Dimy"));
        slider_Dimy->setMaximum(60);
        slider_Dimy->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(slider_Dimy, 1, 1, 1, 1);

        lcd_dimy = new QLCDNumber(groupBox_4);
        lcd_dimy->setObjectName(QStringLiteral("lcd_dimy"));

        gridLayout_3->addWidget(lcd_dimy, 1, 2, 1, 1);

        slider_Dimz = new QSlider(groupBox_4);
        slider_Dimz->setObjectName(QStringLiteral("slider_Dimz"));
        slider_Dimz->setMaximum(60);
        slider_Dimz->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(slider_Dimz, 2, 1, 1, 1);

        lcd_dimx = new QLCDNumber(groupBox_4);
        lcd_dimx->setObjectName(QStringLiteral("lcd_dimx"));

        gridLayout_3->addWidget(lcd_dimx, 0, 2, 1, 1);

        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        gridLayout_3->addWidget(label_10, 2, 0, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        gridLayout_3->addWidget(label_9, 1, 0, 1, 1);

        lcd_dimz = new QLCDNumber(groupBox_4);
        lcd_dimz->setObjectName(QStringLiteral("lcd_dimz"));

        gridLayout_3->addWidget(lcd_dimz, 2, 2, 1, 1);

        label_8 = new QLabel(groupBox_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(13777167, 13777215));
        label_8->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        slider_Dimx = new QSlider(groupBox_4);
        slider_Dimx->setObjectName(QStringLiteral("slider_Dimx"));
        slider_Dimx->setMaximum(60);
        slider_Dimx->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(slider_Dimx, 0, 1, 1, 1);

        widget = new Plotter(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(19, 9, 531, 341));
        widget->setStyleSheet(QStringLiteral("background-color: rgb(238, 238, 236);"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 360, 741, 132));
        gridLayout_6 = new QGridLayout(layoutWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        groupBox_5 = new QGroupBox(layoutWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));
        groupBox_5->setAlignment(Qt::AlignCenter);
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        slider_r = new QSlider(groupBox_5);
        slider_r->setObjectName(QStringLiteral("slider_r"));
        slider_r->setMaximum(10);
        slider_r->setValue(10);
        slider_r->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(slider_r, 0, 1, 1, 1);

        slider_g = new QSlider(groupBox_5);
        slider_g->setObjectName(QStringLiteral("slider_g"));
        slider_g->setMaximum(10);
        slider_g->setValue(10);
        slider_g->setSliderPosition(10);
        slider_g->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(slider_g, 1, 1, 1, 1);

        slider_b = new QSlider(groupBox_5);
        slider_b->setObjectName(QStringLiteral("slider_b"));
        slider_b->setMaximum(10);
        slider_b->setValue(10);
        slider_b->setOrientation(Qt::Horizontal);

        gridLayout_4->addWidget(slider_b, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox_5);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_4->addWidget(label_13, 2, 0, 1, 1);

        label_12 = new QLabel(groupBox_5);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_4->addWidget(label_12, 1, 0, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_4->addWidget(label_11, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_5, 0, 1, 1, 1);

        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setStyleSheet(QStringLiteral("color: rgb(238, 238, 236);"));
        groupBox->setAlignment(Qt::AlignCenter);
        gridLayout_5 = new QGridLayout(groupBox);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        slider_profundidadeX = new QSlider(groupBox);
        slider_profundidadeX->setObjectName(QStringLiteral("slider_profundidadeX"));
        slider_profundidadeX->setMaximum(70);
        slider_profundidadeX->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(slider_profundidadeX, 0, 1, 1, 1);

        lcdeixo_x = new QLCDNumber(groupBox);
        lcdeixo_x->setObjectName(QStringLiteral("lcdeixo_x"));

        gridLayout_5->addWidget(lcdeixo_x, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        slider_profundidadeY = new QSlider(groupBox);
        slider_profundidadeY->setObjectName(QStringLiteral("slider_profundidadeY"));
        slider_profundidadeY->setMaximum(70);
        slider_profundidadeY->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(slider_profundidadeY, 1, 1, 1, 1);

        lcdeixo_y = new QLCDNumber(groupBox);
        lcdeixo_y->setObjectName(QStringLiteral("lcdeixo_y"));

        gridLayout_5->addWidget(lcdeixo_y, 1, 2, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setStyleSheet(QStringLiteral("color: rgb(243, 243, 243);"));

        gridLayout_5->addWidget(label_3, 2, 0, 1, 1);

        slider_profundidadeZ = new QSlider(groupBox);
        slider_profundidadeZ->setObjectName(QStringLiteral("slider_profundidadeZ"));
        slider_profundidadeZ->setMaximum(70);
        slider_profundidadeZ->setOrientation(Qt::Horizontal);

        gridLayout_5->addWidget(slider_profundidadeZ, 2, 1, 1, 1);

        lcdeixo_z = new QLCDNumber(groupBox);
        lcdeixo_z->setObjectName(QStringLiteral("lcdeixo_z"));

        gridLayout_5->addWidget(lcdeixo_z, 2, 2, 1, 1);


        gridLayout_6->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout_6->setColumnStretch(0, 85);
        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        groupBox_2->raise();
        groupBox_3->raise();
        groupBox_4->raise();
        widget->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 772, 22));
        menuArquivo = new QMenu(menuBar);
        menuArquivo->setObjectName(QStringLiteral("menuArquivo"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArquivo->menuAction());
        menuArquivo->addAction(actionSalvar);
        menuArquivo->addAction(actionExit);
        mainToolBar->addAction(actionNovo);
        mainToolBar->addAction(actionCaneta);
        mainToolBar->addAction(actionApagar_Caneta);
        mainToolBar->addAction(actionCaixa);
        mainToolBar->addAction(actionApagar_Caixa);
        mainToolBar->addAction(actionEsfera);
        mainToolBar->addAction(actionApagar_Esfera);
        mainToolBar->addAction(actionElipsoide);
        mainToolBar->addAction(actionApagar_Elipsoide);

        retranslateUi(MainWindow);
        QObject::connect(slider_profundidadeX, SIGNAL(valueChanged(int)), lcdeixo_x, SLOT(display(int)));
        QObject::connect(slider_profundidadeY, SIGNAL(valueChanged(int)), lcdeixo_y, SLOT(display(int)));
        QObject::connect(slider_raio, SIGNAL(valueChanged(int)), lcd_esfera, SLOT(display(int)));
        QObject::connect(slider_profundidadeZ, SIGNAL(valueChanged(int)), lcdeixo_z, SLOT(display(int)));
        QObject::connect(slider_rx, SIGNAL(valueChanged(int)), lcd_rx, SLOT(display(int)));
        QObject::connect(slider_ry, SIGNAL(valueChanged(int)), lcd_ry, SLOT(display(int)));
        QObject::connect(rz, SIGNAL(valueChanged(int)), lcd_rz, SLOT(display(int)));
        QObject::connect(slider_Dimx, SIGNAL(valueChanged(int)), lcd_dimx, SLOT(display(int)));
        QObject::connect(slider_Dimy, SIGNAL(valueChanged(int)), lcd_dimy, SLOT(display(int)));
        QObject::connect(slider_Dimz, SIGNAL(valueChanged(int)), lcd_dimz, SLOT(display(int)));
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(exit()));
        QObject::connect(slider_raio, SIGNAL(valueChanged(int)), widget, SLOT(setRaio(int)));
        QObject::connect(slider_Dimx, SIGNAL(valueChanged(int)), widget, SLOT(setDimx(int)));
        QObject::connect(slider_Dimy, SIGNAL(valueChanged(int)), widget, SLOT(setDimy(int)));
        QObject::connect(slider_Dimz, SIGNAL(valueChanged(int)), widget, SLOT(setDimz(int)));
        QObject::connect(slider_r, SIGNAL(valueChanged(int)), widget, SLOT(setColor_r(int)));
        QObject::connect(slider_g, SIGNAL(valueChanged(int)), widget, SLOT(setColor_g(int)));
        QObject::connect(slider_b, SIGNAL(valueChanged(int)), widget, SLOT(setColor_b(int)));
        QObject::connect(slider_rx, SIGNAL(valueChanged(int)), widget, SLOT(setRx(int)));
        QObject::connect(slider_ry, SIGNAL(valueChanged(int)), widget, SLOT(setRy(int)));
        QObject::connect(rz, SIGNAL(valueChanged(int)), widget, SLOT(setRz(int)));
        QObject::connect(slider_profundidadeX, SIGNAL(valueChanged(int)), widget, SLOT(setProfundidadeX(int)));
        QObject::connect(slider_profundidadeY, SIGNAL(valueChanged(int)), widget, SLOT(setProfundidadeY(int)));
        QObject::connect(slider_profundidadeZ, SIGNAL(valueChanged(int)), widget, SLOT(setProfundidadeZ(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionNovo->setText(QApplication::translate("MainWindow", "Novo", Q_NULLPTR));
        actionSalvar->setText(QApplication::translate("MainWindow", "Salvar", Q_NULLPTR));
        actionCaneta->setText(QApplication::translate("MainWindow", "Caneta", Q_NULLPTR));
        actionApagar_Caneta->setText(QApplication::translate("MainWindow", "Apagar Caneta", Q_NULLPTR));
        actionCaixa->setText(QApplication::translate("MainWindow", "Caixa", Q_NULLPTR));
        actionApagar_Caixa->setText(QApplication::translate("MainWindow", "Apagar Caixa", Q_NULLPTR));
        actionEsfera->setText(QApplication::translate("MainWindow", "Esfera", Q_NULLPTR));
        actionApagar_Esfera->setText(QApplication::translate("MainWindow", "Apagar Esfera", Q_NULLPTR));
        actionElipsoide->setText(QApplication::translate("MainWindow", "Elipsoide", Q_NULLPTR));
        actionApagar_Elipsoide->setText(QApplication::translate("MainWindow", "Apagar Elipsoide", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Esfera", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "Raio", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Elipse", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Rx", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Ry", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Rz", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Caixa", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "DimZ", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "DimY", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "DimX", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Cor", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "b", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "g", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "r", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Profundidade", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "X", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Y", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Z", Q_NULLPTR));
        menuArquivo->setTitle(QApplication::translate("MainWindow", "Arquivo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
