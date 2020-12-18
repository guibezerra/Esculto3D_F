#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QString>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    QString px, py, pz;
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

    void on_buttonBox_accepted();

private slots:


private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
