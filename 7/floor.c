/* floor function */
#include "xmath.h"
double (floor) (double x)
{    /* compute floor(x) */
    return (_Dint(&x, 0) < 0 && x < 0.0 ?  x - 1.0 : x);
}
