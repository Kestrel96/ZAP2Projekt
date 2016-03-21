#ifndef MENU_H
#define MENU_H
#include"mrowka.h"
#include<iostream>


using namespace std;
class Mrowka;
class Plansza;

class Menu
{

private:
    int lmrowek;
    int szerokosc; //kolumny
    int wysokosc; //wiersze
    int liczba_krokow;
    int czas_odswiezania; //tylko konsola?
    bool DOMYSLNE;
    friend class Mrowka;
public:
    Menu(bool DOM=1);
   friend void TworzMrowisko(Mrowka* T, Menu D);
   friend void TworzPlansze(Menu D, Plansza **P);
   friend void WyswietlPlansze(Plansza **P, Menu D);


};

#endif // MENU_H
