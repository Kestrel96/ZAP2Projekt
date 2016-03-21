#ifndef MENU_H
#define MENU_H
#include"mrowka.h"
#include<iostream>


using namespace std;

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


};

#endif // MENU_H
