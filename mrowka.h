#ifndef MROWKA_H
#define MROWKA_H
#include<iostream>
#include"menu.h"
#include"plansza.h"

#include"mainwindow.h"


#include "global.h"

using namespace std;

class Plansza;
class Menu;
class Lista;
class Mrowka;
class MainWindow;




/**
 * @brief  Mrowka - Klasa obiektów poruszających się po planszy
 */
class Mrowka{
private:
    friend class Dialog;
    ///Współrzędna x danej mrówki
    int x;
    ///Współrzędna y danej mrówki
    int y;
    ///Zwrot mrówki (góra/dół/lew/prawo
    string zwrot; //(gora, dol, lewo, prawo)
    ///Symbol mrówki
    char symbol;

public:
    ///Konstruktor klasy Mrowka
    Mrowka();
    ///Funkcja wczytująca x i y danej mrówki
    void WczytajDaneMowek(int n, int m, int LM);
    ///Funkcja głóWnego algorytmu
    friend void Wykonaj(Menu D, Plansza** &P, Mrowka* &T, Lista* &g,MainWindow* w);
    ///Funkcja tworząca tablicę zawierajacą mrówki
    friend void TworzMrowisko(Mrowka* &T, Menu D);
    ///Funkcja tworząca planszę
    friend void TworzPlansze(Menu D, Plansza **P);


};




#endif // MROWKA_H
