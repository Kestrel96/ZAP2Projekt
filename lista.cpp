#include "lista.h"
#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"plansza.h"

class Plansza;
class Lista;

Lista::Lista()
{

}

Lista *g;

void UsunListe(Menu D, Lista* &g){
    Lista* pom;

    while(g!=0){
        pom=g;

        for(int i=0;i<D.wysokosc;i++){

            delete []pom->PL[i];
        }
        delete [] pom->PL;


        g=g->nast;
        delete pom;

    }

    cout<<"Zwolniono pamiec!"<<endl;

}
void TworzListe(Menu D, Lista *&g) {
    int l=0;
    g=0;
    Lista* a=0;
    Lista* p=0;

    for(int i=0;i<D.liczba_krokow;i++){

        if(g==0){
            g=new Lista;

            g->poprz=0;
            g->licznik=l;
            a=g;
        }
        else{

            a->nast=new Lista;

            p=a;
            a=a->nast;
        }

        a->PL=new Plansza* [D.wysokosc];

        for(int j=0;j<D.wysokosc;j++){

            a->PL[j]= new Plansza [D.szerokosc];
        }


        a->nast=0;
        a->poprz=p;
        a->licznik=l;
        l++;

    }





}



void UzupelnijListe(Menu D, Lista* &wsk, int krok, Plansza** &T){

    Lista* glowa=wsk;


    while(wsk->licznik!=krok-1){
      wsk=wsk->nast;


    }


    for(int o=0;o<D.wysokosc;o++){

        for(int p=0;p<D.szerokosc;p++){

            wsk->PL[o][p].pole=T[o][p].pole;


        }

    }

    wsk=glowa;
}








void WyswietlajElemnty(Menu D, Lista * &g){

    int k=0;
    int pop=0;


    cout<<"Podaj krok do wyswietlenia (-1 konczy program): "<<endl;

    while(1){
        do{
            cout<<"Krok: "<<endl;
            cin>>k;
            if(k==-1){
                break;
            }
        }while((k<=0 || k>D.liczba_krokow-1));

        if(k!=-1){

            if(k>pop){
                while(g->licznik!=k-1){

                    g=g->nast;

                }
            }

            if(k<pop){

                while(g->licznik!=k){

                    g=g->poprz;

              }
            }

            pop=k;


            for(int i=0;i<D.wysokosc;i++){

                for(int j=0;j<D.szerokosc;j++){

                    cout<<g->PL[i][j].pole;
                }
                cout<<endl;
            }
//            cout<<"KROK NR:"<<endl<<g->licznik<<endl;
        }

        if(k==-1){
            break;
        }
    }



    cout<<"ZAKONCZONO!"<<endl;
}
