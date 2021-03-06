/* strtol function */
#include "errno.h"
#include "ctype.h"
#include "limits.h"
#include "stdlib.h"

long strtol(const char *s, char **endptr, int base)
{ /* convert string to long, with checking */
    const char *sc;
    unsigned long x;

    for (sc = s; isspace(*sc); ++sc)
        ;
    x = _Stoul(s, endptr, base); /* not sc! */
    if (*sc == '-' && x <= LONG_MAX) { /* negative number overflowed */
        errno = ERANGE;
        return (LONG_MIN);
    } else if (*sc != '-' && LONG_MAX < x) { /* positive number overflowed */
        errno = ERANGE;
        return (LONG_MAX) ;
    } else
        return ((long)x);
}
