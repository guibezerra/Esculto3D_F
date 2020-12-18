#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{

    Q_OBJECT

public:
    int px_,py_,pz_;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:

    void exit();
    void dimensao(void);
    int getX();
    int getY();
    int getZ();


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
