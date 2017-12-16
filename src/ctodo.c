#include <stdio.h>
#include "ctodo.h"

void pnt_menu (void)
{
    _p("\n请选择： \b\n");
    _p("a) memory malloc. \b\n");
    _p("q) 退出. \b\n");
}
void choice_menu (void) 
{
    char _m;
    pnt_menu();
    while ((scanf ("%c", &_m))==1 && _m != 'q') 
    {
        if (!isalpha (_m))
            continue;
        do_menu (_m);
        pnt_menu();
    }

}
void do_menu (char ch)
{
    switch (ch)
    {
    case 'a':
        _p("内存 malloc 例子\n");
        malloc_exp2 ();
        break;
    default:
        break;
    }
}

void malloc_exp2 (void)
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
int main (int argc, char * argv[])
{
//    printf ("%d\n", argc);
    if (argc > 1)
        get_args(argc,argv);
    else{
        choice_menu ();
        _p ("退出成功~~\n");
    }
    return 0;
}
