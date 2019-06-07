#ifndef DFS_H
#define DFS_H
#include "graf_lista.h"
#include "plansza.h"
class dfs
{
    private:

    public:
        dfs();
        virtual ~dfs();
        static void doDFS(const plansza &plansz, int aktualny);
};

#endif // DFS_H
