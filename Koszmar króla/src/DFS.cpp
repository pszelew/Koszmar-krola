#include "dfs.h"

dfs::dfs()
{
    //ctor
}

dfs::~dfs()
{
    //dtor
}

void dfs::doDFS(const graf_lista &grafik, int aktualny)
{
    //dobra, teraz musimy utworzyc stos Frontier
    std::vector <int> odwiedzone;
    std::stack <int> doRozpatrzenia;

    bool _odwiedzone[grafik.ilosc_wierzcholkow()]; //opowiedniej wielkosci tablica

    for(int i=0;i<grafik.ilosc_wierzcholkow();i++)
        _odwiedzone[i] = false;

    doRozpatrzenia.push(aktualny); //dodajemy pierwszy element do stosu
    while(!doRozpatrzenia.empty()) //dopoki stos nie bedzie pusty
	{
	    aktualny=doRozpatrzenia.top();
	    doRozpatrzenia.pop();
	    printf("\nOdwiedzam: %d\n",aktualny);
	    odwiedzone.push_back(aktualny);  //dodajemy jako element juz odwiedzony


	    _odwiedzone[aktualny]=true;


        for(int i=grafik.ilosc_wierzcholkow()-1;i>=0;--i) //przeszukujemy nasz graf
		{
		    if(aktualny==6&&i==13)
                std::cout<< "Tutaj jestem"<<std::endl;
			if(grafik.czy_krawedz(aktualny, i) && _odwiedzone[i] == false)
			{
			    std::cout<< "Wolny sasiad"<<aktualny<<"-->"<<i<<std::endl;
				doRozpatrzenia.push(i);//Wrzucamy na stos jego s¹siadów
				_odwiedzone[i] = true;//Znaznaczamy ,¿e go odwiedzimy!(w niedalekiej przysz³oœci)
				//Inaczej bêdziemy mieli np tak¹ sytuacjê w stosie 2,3,4,2 <-- 2x dwójka
			}
		}



	}


}
