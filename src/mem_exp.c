#include <stdio.h>
#include "ctodo.h"


static void malloc_exp (void)
{
    int n = 5;
    int i;
    int * pnum;
    pnum = Xmalloc (n * sizeof (int)); 

    p_;
    for (i = 0; i < n; i++)
        pnum[i] = i;

    for (i = 0; i < n; i++)
        printf ("%d\n" ,pnum[i]);
    Xfree (pnum);
    pnum == NULL;
    p_;
}


void mem_exp_exec(const char * exp_name)
{

}


