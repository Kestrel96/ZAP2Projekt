#ifndef PLANSZA_H
#define PLANSZA_H
#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"lista.h"


#include "global.h"

using namespace std;


class Menu;
class Mrowka;
class Lista;
class Plansza;
class MainWindow;

/**
 * @brief Plansza - Plansza, po której poruszają się mrówki
 */

class Plansza{
private:
    friend class MainWindow;
    friend class Lista;
    ///Znak wypełniający pole
    char pole;
    ///Zmienna mówiąca o tym czy pole jest białe czy czarne
    bool BIALY;
    //Deklaracja przyjazni
    friend class Mrowka;


public:
    ///Kosntruktor klasy Plansza: dekalrauje pole jako biale i ustawia flage BIALY=1
    Plansza(); //Dekalrauje pole jako biale i ustawia flage BIALY=1
    ///Funkcja tworząca planszę
    friend void TworzPlansze(Menu D, Plansza **&P);
    ///Funkcja wyswietlająca utworzoną planszę (tylko raz, przed wykonianiem algorytmu)
    friend void WyswietlPlansze(Plansza **P, Menu D);
    ///Funkcja głównego algorytmu
    friend void Wykonaj(Menu D, Plansza** &P, Mrowka* &T, Lista* &g,MainWindow* w);
    ///Funkcja tworząca listę zawierającą zrzuty poszczegółnych kroków
    friend void TworzListe(Menu D, Lista *&g);
    ///Funkcja zapisująca zrzuty
    friend void UzupelnijListe(Menu D, Lista* &wsk, int krok, Plansza** &T);
    ///Funkcja pozwalająca na wyświetlanie poszczególnych krokóW
    friend void WyswietlajElemnty(Menu D, Lista * &g);
    ///Funkcja losująca pola, które na starcie mają być czarne
    friend void LosujPole(Plansza** &P,Menu D);
    ///Funkcja zwalniająca pamięć
    friend void UsunListe(Menu D, Lista* &g);
};

#endif // PLANSZA_H
