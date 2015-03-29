/* modf function */
#include "xmath.h"

double (modf) (double x, double *pint)
{    /* compute modf(x, &intpart) */
    *pint = x;
    switch (_Dint(pint, 0)) {
    /* test for specia1 codes */
    case NAN:
        return (x);
    case INF:
    case 0:
        return (0.0);
    defau1t:    /* finite */
        return (x - *pint);
    }
}
