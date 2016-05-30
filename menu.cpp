#include<iostream>
#include<windows.h>
#include "menu.h"
#include"mrowka.h"
#include"plansza.h"
#include"lista.h"

#include"global.h"
#include "mainwindow.h"


using namespace std;


Menu DANE;

Menu::Menu()
{
        lmrowek=2;
        wysokosc=60;
        szerokosc=60;
        czas_odswiezania=0;
        liczba_krokow=500;
        Losowe=0;


}



