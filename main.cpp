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
    Plansza **plansza;

    TworzMrowisko(mrowki,DANE);
    TworzPlansze(DANE,plansza);
    WyswietlPlansze(plansza, DANE);
    return 0;
}



