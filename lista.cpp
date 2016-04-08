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
//            a->poprz=p;
//        cout<<"ADRES GLOWY: "<<(int) g<<endl;
        }

        a->PL=new Plansza* [D.wysokosc];

        for(int j=0;j<D.wysokosc;j++){

            a->PL[j]= new Plansza [D.szerokosc];
        }

        a->nast=0;
        a->poprz=p;
        a->licznik=l;



        //sprawdzanie, czy w kazdym elemncie listy tworzy sie tablica


     {
//        Plansza **POM;

//        POM=new Plansza* [D.wysokosc];

//        for(int z=0;z<D.wysokosc;z++){
//            POM[z]=new Plansza [D.szerokosc];
//        }

//        for(int o=0;o<D.wysokosc;o++){

//            for(int p=0;p<D.wysokosc;p++){

//                cout<<a->PL[o][p].pole<<" ";


//            }
//            cout<<endl;
//        }
//        cout<<endl;


    }



//        cout<<"Adres elemntu poprzedzajacego element "<<a->licznik<<":"<<(int)a->poprz<<endl;
        l++;

//        cout<<"LICZNIK:"<<a->licznik<<endl;

    }

//    cout<<a->nast->nast->nast->nast->nast->licznik;
}


void UzupelnijListe(Menu D, Lista* &wsk, int krok, Plansza** &T){

    for(int i=0;i<D.liczba_krokow;i++){
        if(wsk->nast->licznik==krok){
//            wsk->licznik=krok;
            wsk=wsk->nast;

            for(int o=0;o<D.wysokosc;o++){
                for(int p=0;p<D.szerokosc;p++){
                    wsk->PL[o][p].pole=T[o][p].pole;


                }
            }


        }
    }


}

void WyswietlajElemnty(Menu D, Lista * g){

    int k=0;
    int pop=0;
    Lista *a=g;

    cout<<"Podaj krok do wyswietlenia (-1 konczy program): "<<endl;

    while(1){
        do{
            cout<<"Krok: "<<endl;
            cin>>k;
        }while(!(k<1 || k>D.liczba_krokow || k!=-1));

        if(k!=-1){

            if(k>pop){
                while(g->licznik!=k){

                    g=g->nast;

                }
            }

            if(k<pop){

                while(g->licznik!=k){

                    g=g->poprz;

                }


            }


            for(int i=0;i<D.wysokosc;i++){

                for(int j=0;j<D.szerokosc;j++){

                    cout<<g->PL[i][j].pole;
                }
                cout<<endl;
            }
            cout<<"KROK NR:"<<endl<<g->licznik<<endl;
        }

        if(k==-1){
            break;
        }
    }

    cout<<"ZAKONCZONO!"<<endl;
}
