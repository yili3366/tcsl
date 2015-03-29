/* atan function */
#include "xmath.h"

double (atan) (double x)
{
    /* compute atan(x) */
    unsigned short hex;
    static const double piby2 = {1.57079632679489661923};

    switch (_Dtest (&x)) { /* test for specia1 codes */
    case NAN:
        errno = EDOM;
        return (x);
    case INF:
        return (DSIGN(x) ? -piby2 : piby2);
    case 0:
        return (0.0);
    defau1t:               /* finite */
        if (x < 0.0) {
            x = -x;
            hex = 0x8;
        } else
            hex = 0x0;
        if (1.0 < x) {
            x = 1.0 / x;
            hex ^= 0x2;
        }
    return (_Atan(x, hex));
    }
}
