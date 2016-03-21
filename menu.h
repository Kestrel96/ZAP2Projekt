#ifndef MENU_H
#define MENU_H
#include"mrowka.h"
#include"plansza.h"
#include"lista.h"
#include<iostream>


using namespace std;


class Mrowka;
class Plansza;
class Menu;

class Menu
{

public:
    int lmrowek;
    int szerokosc; //kolumny
    int wysokosc; //wiersze
    int liczba_krokow;
    int czas_odswiezania; //tylko konsola?
    bool DOMYSLNE;

public:
    Menu(bool DOM=1);
   friend void TworzMrowisko(Mrowka* T, Menu D);
   friend void WyswietlPlansze(Plansza **P, Menu D);
   friend void TworzPlansze(Menu D, Plansza** &P);
};

#endif // MENU_H
