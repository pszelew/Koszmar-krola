#include "dfs.h"

dfs::dfs()
{
    //ctor
}

dfs::~dfs()
{
    //dtor
}

void dfs::doDFS(const plansza &plansz, int aktualny)
{
    //dobra, teraz musimy utworzyc stos Frontier
    std::vector <int> odwiedzone;
    std::stack <int> doRozpatrzenia;

    bool _odwiedzone[plansz.grafik.ilosc_wierzcholkow()]; //opowiedniej wielkosci tablica

    for(int i=0;i<plansz.grafik.ilosc_wierzcholkow();i++)
        _odwiedzone[i] = false;

    doRozpatrzenia.push(aktualny); //dodajemy pierwszy element do stosu
    while(!doRozpatrzenia.empty()) //dopoki stos nie bedzie pusty
	{
	    aktualny=doRozpatrzenia.top();
	    doRozpatrzenia.pop();
	    if(_odwiedzone[aktualny] ==false)
        {
            odwiedzone.push_back(aktualny);  //dodajemy jako element juz odwiedzony
            _odwiedzone[aktualny]=true;

            if(aktualny==plansz.getKrol())
            {
                std::cout<<"DFS: ZNALEZIONO SCIEZKE"<<std::endl;
                for(int i=0; i<odwiedzone.size();i++)
                {
                    std::cout<<odwiedzone[i];
                    if(i<odwiedzone.size()-1)
                        std::cout<<", ";
                }

                std::cout<<std::endl<<std::endl;
            }

        for(int i=plansz.grafik.ilosc_wierzcholkow()-1;i>=0;--i) //przeszukujemy nasz graf
		{
			if(plansz.grafik.czy_krawedz(aktualny, i) && _odwiedzone[i] == false)
			{
				doRozpatrzenia.push(i);//Wrzucamy na stos jego s¹siadów
			}
		}



        }
	}

    std::cout<<"DFS: Kolejnosc odwiedzania wierzcholkow"<<std::endl;
    for(int i=0; i<odwiedzone.size();i++)
    {
        std::cout<<odwiedzone[i];
        if(i<odwiedzone.size()-1)
            std::cout<<", ";
    }


}
