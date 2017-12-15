#include <stdio.h>
#include "ctodo.h"

void pnt_menu (void)
{
     _p("a) memory malloc. \b\n");
}

int main (int argc, char * argv[])
{
    int n = 5;
    int i;
    int * pnum;
    pnt_menu();
    pnum = Xmalloc (n * sizeof (int)); 

    for (i = 0; i < n; i++)
        pnum[i] = i;

    for (i = 0; i < n; i++)
        printf ("%d\n" ,pnum[i]);
    return 0;
}
