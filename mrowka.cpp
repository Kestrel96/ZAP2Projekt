#include "mrowka.h"
#include<iostream>
#include"menu.h"
#include"plansza.h"
#include "ui_mainwindow.h"
#include<windows.h>

#include<QPainter>

#include<mainwindow.h>

using namespace std;



class MainWindow;
int procent=0;
Mrowka *mrowki;

Mrowka::Mrowka()
{
    x=0;
    y=0;
    symbol='m';
    zwrot="gora";
}

//void Mrowka::WczytajDaneMowek(int n, int m, int LM){

//    cout<<"Podaj pozycje mrowki "<<LM+1<<":"<<endl;
//    do{
//        cout<<"X: "<<endl;
//        cin>>this->x;
//    }while(x<0||x>m);

//    do{
//        cout<<"Y: "<<endl;
//        cin>>this->y;
//    }while(y<0||y>n);

//}

void TworzMrowisko(Mrowka* &T, Menu D){
//    int N=D.wysokosc;
//    int M=D.szerokosc;

    T=new Mrowka [D.lmrowek];

//    for (int i=0;i<D.lmrowek;i++){


}

/**
 * @brief Wykonaj - główny algorytm programu, skupia zmienne z każdej klasy i wykonuje zadane polecenia
 *
 * @param D
 * @param P
 * @param T
 * @param g
 */
void Wykonaj(Menu D, Plansza** &P, Mrowka* &T, Lista* &g,MainWindow* w){

    int KrK=0;

    LosujPole(P,D);


    for(int Z=0;Z<D.liczba_krokow;Z++){
        KrK++;
//        ui->Postep->setValue(procent);
        UzupelnijListe(D,g,KrK,P);
        procent=KrK/D.liczba_krokow*100;
        Sleep (D.czas_odswiezania);
        qApp->processEvents();



        for(int M=0;M<D.lmrowek;M++){

            if(T[M].x==-1){

                T[M].x=D.wysokosc-1;
            }

            if(T[M].y==-1){
                T[M].y=D.szerokosc-1;
            }

            if(T[M].x==D.wysokosc){
                T[M].x=0;
            }

            if(T[M].y==D.szerokosc){
                T[M].y=0;
            }


            if(T[M].zwrot=="gora"&&P[T[M].x][T[M].y].BIALY==1){
                P[T[M].x][T[M].y].BIALY=0;
                P[T[M].x][T[M].y].pole=179;
                T[M].zwrot="prawo";
                T[M].y=T[M].y+1;
                continue;
            }

            if(T[M].zwrot=="gora"&&P[T[M].x][T[M].y].BIALY==0){
                P[T[M].x][T[M].y].BIALY=1;
                P[T[M].x][T[M].y].pole=219;
                T[M].zwrot="lewo";
                T[M].y=T[M].y-1;
                continue;
            }

            if(T[M].zwrot=="dol"&&P[T[M].x][T[M].y].BIALY==1){
                P[T[M].x][T[M].y].BIALY=0;
                P[T[M].x][T[M].y].pole=179;
                T[M].zwrot="lewo";
                T[M].y=T[M].y-1;
                continue;
            }

            if(T[M].zwrot=="dol"&&P[T[M].x][T[M].y].BIALY==0){
                P[T[M].x][T[M].y].BIALY=1;
                P[T[M].x][T[M].y].pole=219;
                T[M].zwrot="prawo";
                T[M].y=T[M].y+1;
                continue;
            }

            if(T[M].zwrot=="prawo"&&P[T[M].x][T[M].y].BIALY==1){
                P[T[M].x][T[M].y].BIALY=0;
                P[T[M].x][T[M].y].pole=179;
                T[M].zwrot="dol";
                T[M].x=T[M].x+1;
                continue;
            }

            if(T[M].zwrot=="prawo"&&P[T[M].x][T[M].y].BIALY==0){
                P[T[M].x][T[M].y].BIALY=1;
                P[T[M].x][T[M].y].pole=219;
                T[M].zwrot="gora";
                T[M].x=T[M].x-1;

                continue;
            }

            if(T[M].zwrot=="lewo"&&P[T[M].x][T[M].y].BIALY==1){
                P[T[M].x][T[M].y].BIALY=0;
                P[T[M].x][T[M].y].pole=179;
                T[M].zwrot="gora";
                T[M].x=T[M].x-1;
                continue;
            }

            if(T[M].zwrot=="lewo"&&P[T[M].x][T[M].y].BIALY==0){
                P[T[M].x][T[M].y].BIALY=1;
                P[T[M].x][T[M].y].pole=219;
                T[M].zwrot="dol";
                T[M].x=T[M].x+1;
                continue;
            }




            KrK++;

        }

    }


}



