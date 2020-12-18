#include "plotter.h"
#include "sculptor.h"
#include "mainwindow.h"
#include <QDebug>
#include "dialog.h"
#include<QPainter>
#include<QBrush>


Plotter::Plotter(QWidget *parent) : QWidget(parent)
{

}
void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;

    brush.setColor(QColor(0,0,0));
    brush.setStyle(Qt::SolidPattern);

}

void Plotter::setProfundidadeX(int profundidadeX_)
{
    profundidadeX = profundidadeX_;
    repaint();
}

void Plotter::setProfundidadeY(int profundidadeY_)
{
    profundidadeY = profundidadeY_;
    repaint();
}

void Plotter::setProfundidadeZ(int profundidadeZ_)
{
    profundidadeZ = profundidadeZ_;
    repaint();
}

void Plotter::setRaio(int Raio_)
{
    raio = Raio_;
    repaint();
}

void Plotter::setRx(int rx_)
{
    rx = rx_;
    repaint();
}
void Plotter::setRy(int ry_)
{
    ry = ry_;
    repaint();
}

void Plotter::setRz(int rz_)
{
    rz = rz_;
    repaint();
}

void Plotter::setDimx(int dimx_)
{
    dimx = dimx_;
    repaint();
}

void Plotter::setDimy(int dimy_)
{
    dimy = dimy_;
    repaint();
}

void Plotter::setDimz(int dimz_)
{
    dimz = dimz_;
    repaint();
}

void Plotter::setColor_r(int r_)
{
    r = (float)r_/10;
}

void Plotter::setColor_g(int g_)
{
    g = (float)g_/10;
    repaint();
}

void Plotter::setColor_b(int b_)
{
    b = (float)b_/10;
    repaint();
}

void Plotter::setColor_a(int a_)
{
    a = (float)a_/10;
    repaint();
}




