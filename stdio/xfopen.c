/* _Fopen function -- UNIX version */
#include "xstdio.h"

/* UNIX system call */

int _Fopen ( const char *path, unsigned int smode, const char *mode)
{ /* open from a file */
    unsigned int acc;

    acc = (smode & (_MOPENR|_MOPENW)) == (_MOPENR | _MOPENW) ? 2
        : smode &_MOPENW ? 1 : 0;
    if ( smode & _MOPENA)
        //acc |= 010;  /* O_APPEND */
        acc |= 00002000;  /* Linux O_APPEND */
    if (smode & _MTRUNC)
        //acc |= 02000;  /* O_TRUNC */
        acc |= 00001000;  /* Linux O_TRUNC */
    if (smode & _MCREAT)
        //acc |= 01000; /* O_CREAT */
        acc |= 00000100; /* Linux O_CREAT */
    return (open(path, acc, 0666)) ;
}
