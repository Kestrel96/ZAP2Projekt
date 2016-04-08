#include<iostream>
#include "menu.h"
#include"mrowka.h"
#include"plansza.h"
#include"lista.h"


using namespace std;

Menu::Menu(bool DOM)
{
    cout<<"Wprowadz swoje dane(0), lub wybierz domyslne(1): "<<endl;
    do{
    cin>>DOM;
    }while(!(DOM==1||DOM==0));
    DOMYSLNE=DOM;
    if(DOMYSLNE==0){
        cout<<"Podaj ilosc mrowek: "<<endl;
        do{
        cin>>lmrowek;
        }while(!(lmrowek>0||lmrowek<10));
        cout<<"Podaj wymiary planszy"<<endl;
        do{
            cout<<"Wiersze: "<<endl;
            cin>>wysokosc;

        }while(!(wysokosc>0));
        do{
            cout<<"Kolumny: "<<endl;
            cin>>szerokosc;
        }while(szerokosc<0);

        cout<<"Podaj liczbe krokow: "<<endl;
        do{
            cin>>liczba_krokow;
        }while(liczba_krokow<0);



        cout<<"Czas 1 kroku (sekundy): "<<endl;
        do{
            cin>>czas_odswiezania;
            czas_odswiezania=czas_odswiezania*1000;
        }while(czas_odswiezania<0);
    }



    if(DOM==1){
        lmrowek=1;
        wysokosc=14;
        szerokosc=28;
        czas_odswiezania=0;
        liczba_krokow=25;
    }

}




