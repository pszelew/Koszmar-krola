#include <iostream>
#include "graf_lista.h"
#include "plansza.h"
#include "DFS.h"
using namespace std;

int main()
{
    remove("wyniki.txt");
    plansza _plansza;

    _plansza.grafik.dijkstra("wyniki.txt");
    dfs::doDFS(_plansza, 22);

    return 0;
}
