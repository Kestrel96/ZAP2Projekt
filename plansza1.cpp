#include "plansza1.h"
#include <iostream>
#include"menu.h"
#include"mrowka.h"
#include"lista.h"

using namespace std;

Plansza1::Plansza1()
{
    pole=219;
    BIALY=1;
}

void UtworzPlansze(Menu D,Plansza1** &T){
    T=new Plansza1* [D.wysokosc];

    for(int i=0;i<D.szerokosc;i++){
        T[i]=new Plansza1 [D.szerokosc];
    }

}
