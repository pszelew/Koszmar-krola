#include <iostream>
#include "graf_lista.h"
#include "plansza.h"
using namespace std;

int main()
{
    remove("wyniki.txt");
    plansza _plansza;

    _plansza.grafik.dijkstra("wyniki.txt");


    cout << "Hello world!" << endl;
    return 0;
}
