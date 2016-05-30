#include<QPainter>
#include<QtGui>
#include<QMainWindow>

#include <iostream>
#include<ctime>
#include<cstdlib>


#include "plansza.h"
#include"menu.h"
#include"mrowka.h"
#include"lista.h"
#include "mainwindow.h"
using namespace std;

Plansza::Plansza(){
    pole=219;
    BIALY=1;

}

Plansza **P;

void LosujPole(Plansza** &P,Menu D){
    srand(time(NULL));
    int il_pol=D.Losowe;

    for(int i=0;i<il_pol;i++){
        int w,k;

        do{
            w=((double)rand()/RAND_MAX)*D.wysokosc;
            k=((double)rand()/RAND_MAX)*D.szerokosc;

        }while((w<0 || w>D.wysokosc) && (k<0 || k>D.szerokosc));

        P[w][k].pole=176;
        P[w][k].BIALY=0;

}



}

void WyswietlPlansze(Plansza** P, Menu D){

    for(int i=0;i<D.wysokosc;i++){
        for(int j=0;j<D.szerokosc;j++){
//            cout<<P[i][j].pole;
        }
//        cout<<endl;
    }
}

void RysujPlansze(Plansza** P, Menu D, QPainter* painter){




}

void TworzPlansze(Menu D, Plansza** &P){

    P=new Plansza* [D.wysokosc];
    for (int i=0;i<D.wysokosc;i++){
        P[i]=new Plansza[D.szerokosc];
    }
}




