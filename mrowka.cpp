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

void Wykonaj(Menu D, Plansza** &P, Mrowka* &T){
    for(int Z=0;Z<D.liczba_krokow;Z++){
        for(int M=0;M<D.lmrowek;M++){

            if(T[M].zwrot=="gora"&&P[T[M].x][T[M].y].BIALY==1){
                P[T[M].x][T[M].y].BIALY=0;
                P[T[M].x][T[M].y].pole=179;
                T[M].zwrot="prawo";
                //Tak, albo tak:
                //T[M].symbol=p;
                //P[T[M].x][T[M].y].pole=T[M].symbol;

            }



        }

    }


}



