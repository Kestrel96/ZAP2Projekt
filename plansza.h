#ifndef PLANSZA_H
#define PLANSZA_H
#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"lista.h"

using namespace std;

// Deklaracje poprzedzające (Forward declarations):
class Menu;
class Mrowka;


class Plansza{
private:
    char pole;
    bool BIALY;
    //Deklaracja przyjazni
    friend class Mrowka;

public:
    Plansza(); //Dekalrauje pole jako biale i ustawia flage BIALY=1
    friend void TworzPlansze(Menu D, Plansza **&P);
    friend void WyswietlPlansze(Plansza **P, Menu D);
};

#endif // PLANSZA_H
