#ifndef MROWKA_H
#define MROWKA_H
#include<iostream>
#include"menu.h"
#include"plansza.h"
using namespace std;

class Plansza;
class Menu;
class Lista;


class Mrowka{
public:

    int x;
    int y;
    string zwrot; //(gora, dol, lewo, prawo)
    char symbol;

public:
    Mrowka();
    void WczytajDaneMowek(int n, int m, int LM);
    friend void Wykonaj(Menu D, Plansza** &P, Mrowka* &T, Lista* &g);
    friend void TworzMrowisko(Mrowka* &T, Menu D);
    friend void TworzPlansze(Menu D, Plansza **P);


};




#endif // MROWKA_H
