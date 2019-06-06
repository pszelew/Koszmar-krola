#ifndef DFS_H
#define DFS_H
#include "graf_lista.h"

class dfs
{
    private:

    public:
        dfs();
        virtual ~dfs();
        static void doDFS(const graf_lista &grafik, int aktualny);
};

#endif // DFS_H
