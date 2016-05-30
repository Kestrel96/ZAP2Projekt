#ifndef GLOBAL_H
#define GLOBAL_H

#include "wmrowki.h"
#include "mainwindow.h"

#include"menu.h"
#include"mrowka.h"
#include"plansza.h"
#include "lista.h"

#include "global.h"

class Menu;
class Mrowka;
class Lista;
class Plansza;

extern Menu DANE;
extern Mrowka *mrowki;
extern Plansza **P;
extern Lista *g;
extern int procent;

#endif // GLOBAL_H
