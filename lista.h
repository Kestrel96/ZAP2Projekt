#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"plansza.h"

#include "global.h"

using namespace std;

class Plansza;
class Menu;
class Lista;



/**
 * @brief Lista:
 *Klasa obsługująca dwukierunkową listę zawierającą każdy krok głównego algorytmu (zrzuty planszy po każdym kroku)
 */
class Lista
{
private:

    friend class Plansza;
    ///Numer aktualnego kroku
    int licznik;
    ///Podwójny wskaźnik typu Plansza, pozwala na stworzenie zrzutu planszy
    Plansza** PL;
    ///Wskaźnik na koljeny elemnt listy
    Lista* nast;
    ///Wskaźnik na poprzedni element listy
    Lista* poprz;

public:
    /**
     * @brief Lista
     *-Konstruktor klasy
     */
    Lista();
    /**
     * @brief TworzListe
     *Funkcja tworząca tablicę wewnątrz elemntu listy - tablicą jest tu plansza
     * @param D
     * @param g
     *
     */
    friend void TworzListe(Menu D, Lista *&g);
    ///Funkcja pozwalająca na wyświetlanie zrzutów
    friend void WyswietlajElemnty(Menu D, Lista * &g);
    ///Funkcja uzupełniająca tablice
    friend void UzupelnijListe(Menu D, Lista* &wsk, int krok, Plansza** &T);
    ///Funkcja losująca pola, które na starcie programu mają być zamalowane
    friend void LosujPole(Plansza** &P,Menu D);
    ///Funkcja zwalniająca pamięć
    friend void UsunListe(Menu D, Lista* &g);

};

#endif // LISTA_H
