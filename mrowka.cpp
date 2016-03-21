#include "mrowka.h"
#include<iostream>
#include"menu.h"

using namespace std;


Mrowka::Mrowka()
{
    x=0;
    y=0;
    zwrot="gora";
}

void Mrowka::WczytajDaneMowek(int n, int m, int LM){

    cout<<"Podaj pozycje mrowki "<<LM+1<<":"<<endl;
    do{
        cout<<"X: "<<endl;
        cin>>this->x;
    }while(x<0||x>m);

    do{
        cout<<"Y: "<<endl;
        cin>>this->y;
    }while(y<0||y>n);

}

void TworzMrowisko(Mrowka* T, Menu D){
    int N=D.wysokosc;
    int M=D.szerokosc;

    T=new Mrowka [D.lmrowek];

    for (int i=0;i<D.lmrowek;i++){
            T[i].WczytajDaneMowek(N,M,i);
    }
}

void Wykonaj(Menu D, Plansza** &P, Mrowka* T){

}



