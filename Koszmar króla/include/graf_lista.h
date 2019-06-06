#ifndef GRAF_LISTA_H_INCLUDED
#define GRAF_LISTA_H_INCLUDED
#include "graf.h"

class graf_lista: public graf
{
    private:
        lista<wezel_docelowy> *_tablica; //tablica list sasiedztwa
        int n=0;
        int m=0;
        int start=0;
    public:
        graf_lista(int wierzcholki, int startowy); //wczytanie grafu
        virtual ~graf_lista();
        virtual void dodaj_krawedz(int a, int b, int waga);
        virtual bool czy_krawedz(int a, int b);
        virtual int ilosc_sasiadow(int a);
        virtual int waga_krawedzi(int a, int b);
        int wartosc(int a, int b){return _tablica[a].zwroc_wartosc(b)._numer;};
        virtual void dijkstra(std::string nazwa_pliku);
      //  virtual void test_efektywnosci(int ilosc_wierzcholkow, int gestosc_grafu);
};

#endif
