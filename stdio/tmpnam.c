/* tmpnam function -- UNIX version */
#include "string.h"
#include "xstdio.h"

/* UNIX system call */

char * tmpnam(char *s)
{ /* create a temporary file name */
    int i ;
    char *p;
    unsigned short t ;
    static char buf[L_tmpnam];
    static unsigned short seed = 0;

    if (s == NULL)
        s = buf;
    seed = seed == 0 ? getpid() : seed + 1;
    strcpy (s, "/tmp/t" );
    i = 5;
    p = s + strlen(s) + i ;
    *p = '\0';
    for (t = seed; 0 <= --i; t >>= 3)
        *--p = '0' + (t & 07);
    return (s);
}
