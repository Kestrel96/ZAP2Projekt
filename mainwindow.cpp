#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

#include "global.h"

#include"menu.h"
#include"mrowka.h"
#include"plansza.h"
#include "lista.h"
#include<QColor>
#include<QTimer>
#include<QtWidgets>
#include<QApplication>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    TworzPlansze(DANE,P);
    TworzMrowisko(mrowki,DANE);
    ui->spinBox_2->setValue(DANE.liczba_krokow);
    ui->Plansza_X->setValue(DANE.szerokosc);
    ui->Plansza_Y->setValue(DANE.wysokosc);
    ui->L_mrowek->setValue(DANE.lmrowek);
    ui->Losowe->setValue(DANE.Losowe);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    connect(timer, SIGNAL(timeout()), ui->Postep, SLOT(setValue(int)));
        timer->start(1);
}

void MainWindow::Ustaw(){
    ui->Postep->setValue(procent);
}



MainWindow::~MainWindow()
{
    delete ui;
}


bool GOTOWE=0;
bool Planszax=0;
bool Planszay=0;

void MainWindow::on_L_mrowek_editingFinished()
{
    if(GOTOWE==0){
     DANE.lmrowek=ui->L_mrowek->value();
     TworzMrowisko(mrowki,DANE);
     Dialog Okienko;
     Okienko.setModal(true);
     Okienko.exec();
    }
}


//kroki
void MainWindow::on_spinBox_2_editingFinished()
{
    if(GOTOWE==0){
    DANE.liczba_krokow=ui->spinBox_2->value();
    }
}

void MainWindow::on_pB_Start_clicked()
{
    if(GOTOWE==0){
    GOTOWE=1;
    TworzPlansze(DANE,P);
    LosujPole(P,DANE);
    TworzListe(DANE,g);
    Wykonaj(DANE,P,mrowki,g,this);
    GOTOWE=1;
    }
}


void MainWindow::on_Plansza_X_editingFinished()
{

    if(GOTOWE==0){
    DANE.szerokosc=ui->Plansza_X->value();
    Planszax=1;
    }
    if(Planszax==1&&Planszay==1){
            TworzPlansze(DANE,P);
            this->update();
            Planszax=0;
            Planszay=0;
    }
}


void MainWindow::on_Plansza_Y_editingFinished()
{
    if(GOTOWE==0){
    DANE.wysokosc=ui->Plansza_Y->value();
    Planszay=1;
    }

    if(Planszax==1&&Planszay==1){
            TworzPlansze(DANE,P);
            this->update();
            Planszax=0;
            Planszay=0;
    }
}



void MainWindow::on_Losowe_editingFinished()
{
    if(GOTOWE==0){
    DANE.Losowe=ui->Losowe->value();
    }
}



void MainWindow::paintEvent(QPaintEvent*e)
{


    QColor kolor;
    ui->Postep->setValue(procent);
    int a=310;
    int b=70;
    int w=10;
    QPainter painter(this);
//    if(GOTOWE==1){
        for(int i=0;i<DANE.wysokosc;i++){
            ui->Postep->setValue(procent);

            for(int j=0;j<DANE.szerokosc;j++){



                if(P[i][j].BIALY==0){
                    kolor.setRgb(100,100,100,255);
                    painter.drawRect(a,b,w,w);
                    painter.fillRect(a,b,w,w,kolor);
                }
                if(P[i][j].BIALY==1){
                    kolor.setRgb(150,0,0,255);
                    painter.drawRect(a,b,w,w);
                    painter.fillRect(a,b,w,w,kolor);

                }
                a=a+10;
            }
            b=b+10;
            a=310;



        }
//    }
}

void MainWindow::on_Slider_szybkosc_sliderPressed()
{

}

void MainWindow::on_Slider_szybkosc_sliderMoved(int position)
{

}

