
#ifndef PLANSZA_H
#define PLANSZA_H
#include "graf_lista.h"


class plansza
{
    private:
        char tab[25];  //tablica przechowujaca litery odpowiadajace danym polom w tablicy
        int krol;
        int wieza;
        bool ruchMozliwy(int a, int b);
    public:
        graf_lista grafik; //tworzymy graf oparty na listach stanowiacy dla nas graf wszystkich sytuacji na planszy
        plansza();
        virtual ~plansza();
};

#endif // PLANSZA_H
