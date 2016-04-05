#include "lista.h"
#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"plansza.h"

class Plansza;

Lista::Lista()
{

}


void TworzListe(Menu D, Lista *&g) {
/*    int l=1;*/ //Licznik do sprawdzania czy lista dobrze sie utworzyla, do usuniecia
    g=0;
    Lista* a=0;
    Lista* p=0;

    for(int i=0;i<D.liczba_krokow;i++){

        if(g==0){
            g=new Lista;
            g->poprz=0;
            a=g;
        }
        else{

            a->nast=new Lista;
            p=a;
            a=a->nast;
//            a->poprz=p;
//        cout<<"ADRES GLOWY: "<<(int) g<<endl;
        }

//        a->PL=new *Plansza [D.wysokosc];

//        for(int j=0;j<D.wysokosc;j++){

//            a->PL= new Plansza [D.szerokosc];
//        }

        a->nast=0;
        a->poprz=p;



//        cout<<"Adres elemntu poprzedzajacego element "<<l<<":"<<(int)a->poprz<<endl;
//        l++;





    }


}
