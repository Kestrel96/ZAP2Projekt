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
class Lista;


class Plansza{
private:
    friend class Lista;
    char pole;
    bool BIALY;
    //Deklaracja przyjazni
    friend class Mrowka;


public:
    Plansza(); //Dekalrauje pole jako biale i ustawia flage BIALY=1
    friend void TworzPlansze(Menu D, Plansza **&P);
    friend void WyswietlPlansze(Plansza **P, Menu D);
    friend void Wykonaj(Menu D, Plansza** &P, Mrowka* &T, Lista* &g);
    friend void TworzListe(Menu D, Lista *&g);
    friend void UzupelnijListe(Menu D, Lista* &wsk, int krok, Plansza** &T);
    friend void WyswietlajElemnty(Menu D, Lista * g);
};

#endif // PLANSZA_H
