/* exp function */
#include "xmath.h"

double exp(double x)
{   /* compute exp(x) */
    switch (_Dtest(&x)) {
    case NAN:    /* test for special codes */
        errno = EDOM;
        return (x);
    case INF:
       errno = ERANGE;
       return (DSIGN(x) ? 0.0 : _Inf._D);
    case 0:
       return (1.0);
    default: /* finite */
        if (0 <= _Exp(&x, 0))
            errno = ERANGE;
        return (x);
    }
}
