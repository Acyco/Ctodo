#include <stdio.h>
#include "ctodo.h"

int main (int argc, char * argv[])
{
    int n = 5;
    int i;
    int * pnum;
    pnum = Xmalloc (n * sizeof (int)); 

    for (i = 0; i < n; i++)
        pnum[i] = i;

    for (i = 0; i < n; i++)
        printf ("%d\n" ,pnum[i]);
    printf ("ttt\n");
    return 0;
}
