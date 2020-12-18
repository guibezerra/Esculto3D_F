#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QDebug>
#include "sculptor.h"
#include<iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->actionExit,
            SIGNAL(triggered(bool)),
            this,
            SLOT(exit()));
    connect(ui->actionNovo,
            SIGNAL(triggered(bool)),
            this,
            SLOT(dimensao()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::exit()
{
    close();
}

void MainWindow::dimensao()
{

    Dialog d;
    d.exec();
    d.on_buttonBox_accepted();
//    qDebug() << d.px;
//    qDebug() << d.py;
//    qDebug() << d.pz;
    px_ = d.px.toInt();
    py_ = d.py.toInt();
    pz_ = d.pz.toInt();
}

int MainWindow::getX()
{
    return px_;
}
int MainWindow::getY()
{
    return py_;
}
int MainWindow::getZ()
{
    return pz_;
}



