/* _Fopen function -- UNIX version */
#include "xstdio.h"

/* UNIX system call */
int _Open(const char*, int, int);

int _Fopen ( const char *path, unsigned int smode, const char *mode)
{ /* open from a file */
    unsigned int ace;

    acc = (smode & (_MOPENRI_MOPENW)) == (_MOPENR | _MOPENW) ? 2
        : smode & MOPENW ? 1 : 0;
    if ( smode & _MOPENA)
        acc |= 010;  /* O_APPEND */
    if (smode & _MTRUNC)
        acc |= 02000;  /* O_TRUNC */
    if (smode & _MCREAT)
        acc |= 01000; /* O_CREAT */
    return (_Open(path, acc, 0666)) ;
}
