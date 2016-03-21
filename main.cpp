#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"plansza.h"
#include"lista.h"

using namespace std;

//void WyswietlPlansze(Plansza** &P, Menu D){

//    for(int i=0;i<D.wysokosc;i++){
//        for(int j=0;j<D.szerokosc;j++){
//            cout<<P[i][j].pole;
//        }
//        cout<<endl;
//    }
//}



int main()
{

    Menu DANE;
    Mrowka *mrowki;
    Plansza** T;

    TworzMrowisko(mrowki,DANE);
    TworzPlansze(DANE, T);
    WyswietlPlansze(T,DANE);
    return 0;
}



