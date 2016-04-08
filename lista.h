#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"plansza.h"

using namespace std;

class Plansza;
class Menu;

class Lista
{
private:

    friend class Plansza;
    int licznik;
    Plansza** PL;
    Lista* nast;
    Lista* poprz;

public:
    Lista();
    friend void TworzListe(Menu D, Lista *&g);
    friend void WyswietlajElemnty(Menu D, Lista * g);
    friend void UzupelnijListe(Menu D, Lista* &wsk, int krok, Plansza** &T);

};

#endif // LISTA_H
