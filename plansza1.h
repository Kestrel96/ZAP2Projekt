#ifndef PLANSZA1_H
#define PLANSZA1_H
#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"lista.h"

class Mrowka;
class Menu;


class Plansza1
{
private:
    char pole;
    bool BIALY;
public:
    Plansza1();
    friend void UtworzPlansze(Menu D,Plansza1** &T);
};

#endif // PLANSZA1_H
