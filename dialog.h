#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

#include"menu.h"
#include"mrowka.h"
#include"plansza.h"
#include "lista.h"

#include"mainwindow.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
    
private slots:
    void on_Spin_mrowka_X_editingFinished();

    void on_Spin_mrowka_Y_editingFinished();

    void on_Potwierdzenie_clicked();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
