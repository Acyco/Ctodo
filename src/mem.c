#include <stdio.h>
#include <stdlib.h>

void * Xmalloc (size_t size)
{
    void * p;
    if (size < 1)
    {
        printf ("malloc size 0!");
        exit (EXIT_FAILURE);
    }
    p = malloc (size);
    if (p == NULL)
    {
        printf ("malloc size 0!");
        exit (EXIT_FAILURE);
    }
    return p;
}

void Xfree (void * p)
{
    free (p);
}
