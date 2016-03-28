#include <iostream>
#include "plansza.h"
#include"menu.h"
#include"mrowka.h"
#include"lista.h"
using namespace std;

Plansza::Plansza(){
    pole=219;
    BIALY=1;
}


void WyswietlPlansze(Plansza** P, Menu D){

    for(int i=0;i<D.wysokosc;i++){
        for(int j=0;j<D.szerokosc;j++){
            cout<<P[i][j].pole;
        }
        cout<<endl;
    }
}

void TworzPlansze(Menu D, Plansza** &P){

    P=new Plansza* [D.wysokosc];
    for (int i=0;i<D.wysokosc;i++){
        P[i]=new Plansza[D.szerokosc];
    }
}




