#ifndef MENU_H
#define MENU_H
#include"mrowka.h"
#include"plansza.h"
#include"lista.h"
#include<iostream>


using namespace std;
//Deklaracje wstepne

class Mrowka;
class Plansza;
class Menu;

class Menu
{

private:
    friend class Lista;

    int lmrowek;
    int szerokosc; //kolumny
    int wysokosc; //wiersze
    int liczba_krokow;
    float czas_odswiezania; //tylko konsola?
    bool DOMYSLNE;


public:
    Menu(bool DOM=1);
   friend void TworzMrowisko(Mrowka* &T, Menu D);
   friend void WyswietlPlansze(Plansza **P, Menu D);
   friend void TworzPlansze(Menu D, Plansza** &P);
   friend void Wykonaj(Menu D, Plansza** &P, Mrowka* &T);
};

#endif // MENU_H
