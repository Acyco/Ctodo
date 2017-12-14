# automake

- \# autoscan
- \# mv configure.scan configure.in
- \# cat configure.in

```
#             -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
    AC_PREREQ(2.61)
    AC_INIT(main, 1.0, x@x.x)
    AC_CONFIG_SRCDIR([main.c])
    AC_CONFIG_HEADER([config.h])
AM_INIT_AUTOMAKE(main,1.0)
# Checks for programs.
    AC_PROG_CC
# Checks for libraries.
# Checks for header files.
# Checks for typedefs, structures, and compiler characteristics.
# Checks for library functions.
AC_OUTPUT([Makefile])
    ```
> AC_INIT(main, 1.0, x@x.x)

> AM_INIT_AUTOMAKE(main,1.0)

> AC_OUTPUT([Makefile])

    - \# aclocal
    - \# autoheader
    - \# vim Makefile.am

    ```
    AUTOMAKE_OPTIONS=foreign
    bin_PROGRAMS=main
    main_SOURCES=main.c
    ```

    - \# automake --add-missing
    - \# ./configure
    - \# make
    - \# ./main 



    ```
    ```
    ```
    ```
