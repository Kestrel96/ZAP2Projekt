#ifndef MROWKA_H
#define MROWKA_H
#include<iostream>
#include"menu.h"
using namespace std;



class Mrowka
{
private:

    int x;
    int y;
    string zwrot; //(gora, dol, lewo, prawo)
    char symbol;

public:
    Mrowka();
    void WczytajDaneMowek(int n, int a, int b);

};




#endif // MROWKA_H
