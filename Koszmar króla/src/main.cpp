#include <iostream>
#include "graf_lista.h"
#include "plansza.h"
#include "DFS.h"
using namespace std;

int main()
{
    remove("wyniki.txt");
    plansza _plansza;
    plansza _plansza2;

    if(_plansza.grafik.czy_krawedz(6,13))
        cout<< "TAK"<< std::endl;
    else
         cout<< "NIE"<< std::endl;


    dfs::doDFS(_plansza.grafik, 22);


    if(_plansza.grafik.czy_krawedz(6,13))
        cout<< "TAK"<< std::endl;
    else
         cout<< "NIE"<< std::endl;



    return 0;
}
