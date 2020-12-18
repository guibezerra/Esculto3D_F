#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    int profundidadeX, profundidadeY, profundidadeZ, raio, rx,ry,rz, dimx,dimy,dimz;
    float r,g,b,a;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
signals:

public slots:
    void setProfundidadeX(int profundidadeX_);
    void setProfundidadeY(int profundidadeY_);
    void setProfundidadeZ(int profundidadeZ_);
    void setRaio(int Raio_);
    void setRx(int rx_);
    void setRy(int ry_);
    void setRz(int rz_);
    void setDimx(int dimx_);
    void setDimy(int dimy_);
    void setDimz(int dimz_);
    void setColor_r(int r_);
    void setColor_g(int g_);
    void setColor_b(int b_);
    void setColor_a(int a_);
};

#endif // PLOTTER_H
