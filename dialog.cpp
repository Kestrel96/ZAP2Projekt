#include "dialog.h"
#include "ui_dialog.h"

#include"menu.h"
#include"mrowka.h"
#include"plansza.h"
#include "lista.h"

#include"mainwindow.h"



Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


int licznik_m=1;

bool XX=0;
bool YY=0;


void Dialog::on_Spin_mrowka_X_editingFinished()
{
    XX=0;
    mrowki[licznik_m].x=ui->Spin_mrowka_X->value();
    if(ui->Spin_mrowka_X->value()>=DANE.szerokosc){
        XX=0;
    }
    if(ui->Spin_mrowka_X->value()<DANE.szerokosc){
        XX=1;
    }


}

void Dialog::on_Spin_mrowka_Y_editingFinished()
{
    YY=0;
    mrowki[licznik_m].y=ui->Spin_mrowka_Y->value();
    if(ui->Spin_mrowka_Y->value()>=DANE.wysokosc){
        YY=0;
    }
    if(ui->Spin_mrowka_Y->value()<DANE.wysokosc){
        YY=1;
    }


}

void Dialog::on_Potwierdzenie_clicked()
{

    if(licznik_m==DANE.lmrowek+1){
        licznik_m=0;
        XX=0;
        YY=0;
        this->close();
    }

    if(XX==1 && YY==1){
    ui->lcdNumber_mrowka_nr->display(licznik_m);
    licznik_m++;
    }

}
