#include "lista.h"
#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"plansza.h"

class Plansza;

Lista::Lista()
{
    licznik=0;
}


void Lista::TworzListe(Menu D, Lista *&g) {


    if(g==NULL){

        g=new Lista;
        g->PL=new *Plansza [D.wysokosc];
        for(int i=0;i<D.wysokosc;i++){

            g->PL[i]=new Plansza [D.szerokosc];
            g->nast=NULL;
            g->poprz=NULL;
        }
    }

    for(int i=0;i<D.liczba_krokow;i++){




    }


}
