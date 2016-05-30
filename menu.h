#ifndef MENU_H
#define MENU_H
#include"mrowka.h"
#include"plansza.h"
#include"lista.h"
#include<iostream>

#include "global.h"
#include"mainwindow.h"


using namespace std;
//Deklaracje wstepne

class Mrowka;
class Plansza;
class Menu;
class MainWindow;




/**
 * @brief Menu - Zasadnicza część interfejsu, zawiera dane wymagane do wykonania głównego algorytmu i utworzenia odpowiednich obiektów
 */
class Menu
{

private:

    friend class MainWindow;
    friend class Dialog;

    friend class Lista;
///Ilość mrówek
    int lmrowek;
    ///Szerkość planszy (kolumny)
    int szerokosc; //kolumny
    ///Wysokość planszy (wiersze)
    int wysokosc; //wiersze
    ///Liczba kroków głównego algorytmu
    int liczba_krokow;
    ///Czas jednego kroku
    float czas_odswiezania; //tylko konsola?
    ///Zmienna informująca czy wybrano wartości domyślne
    bool DOMYSLNE;

    int Losowe;


public:
    ///Konstruktor klasy Menu, tworzy interfejs
    Menu();
    ///Funkcja tworząca tablicę dynamiczną zawierającą obiekty typu Mrowka
   friend void TworzMrowisko(Mrowka* &T, Menu D);
   ///Funkcja wyświetlająca powstałą planszę
   friend void WyswietlPlansze(Plansza **P, Menu D);
   ///Funkcja tworząca planszę
   friend void TworzPlansze(Menu D, Plansza** &P);
   ///Funkcja zawierająca główny algorytm, wykonuje program
   friend void Wykonaj(Menu D, Plansza** &P, Mrowka* &T, Lista* &g,MainWindow* w);
   ///Funkcja tworząca listę
   friend void TworzListe(Menu D, Lista *&g);
   ///Funkcja uzupełniająca listę rzutami plansz
   friend void UzupelnijListe(Menu D, Lista* &wsk, int krok, Plansza** &T);
   ///Funkcja wyświetlająca wybrany zrzut
   friend void WyswietlajElemnty(Menu D, Lista * &g);
   ///Funkcja losująca pola, które na starcie mają być czarne
   friend void LosujPole(Plansza** &P,Menu D);
   ///Funkcja zwalniająca pamięć
   friend void UsunListe(Menu D, Lista* &g);
};

#endif // MENU_H
