#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"plansza.h"
#include"lista.h"

using namespace std;



int main()
{

    Menu DANE;
    Mrowka *mrowki;
    Plansza** P;
    Lista *g;

    TworzMrowisko(mrowki,DANE);
    TworzPlansze(DANE, P);
    TworzListe(DANE, g);
    WyswietlPlansze(P,DANE);
    Wykonaj(DANE, P, mrowki,g);
    WyswietlajElemnty(DANE,g);


    return 0;
}



