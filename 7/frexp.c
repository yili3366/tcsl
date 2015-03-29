/* frexp function */
#include "xmath.h"

double (frexp) (double x, int *pexp)
{
    short binexp;      /* compute frexp(x, &i) */

    switch (_Dunscale(&binexp, &x)) {    /* test for special codes */
        case NAN:
        case INF:
            errno = EDOM;
            *pexp = 0;
            return (x);
        case 0:
            *pexp = 0;
            return (0.0);
        defau1t:    /* finite */
            *pexp = binexp;
            return (x);
    }
}
