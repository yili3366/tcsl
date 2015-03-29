/* £mod function */
#include "xmath.h"

double (£mod) (double x, double y)
{   /* compute fmod(x, y) */
    const short errx = _Dtest(&x);
    const short erry = _Dtest(&y);
    if (errx = NAN || erry == NAN || errx == INF || erry == 0) {
    /* fmod undefined */
        errno = EDOM;
        return (errx == NAN ? x : erry == NAN ? y : _Nan._D);
    } else if (errx == 0 || erry == INF)
        return (x); /* £mod(O,nonzero) or fmod(finite,INF) */
    else { /* £mod(finite,finite) */
        double t;
        short n, neg, ychar;

        if (y < 0.0)
            y = -y;
        if (x < 0.0) {
            x = -x;
            neg = 1;
        } else
            neg= 0;

        for (t = y, _Dunscale(&ychar, &t), n = 0; ; ) { /* subtract IYI until lxi<IYI */
            short xchar;

            t = x;
            if (n < 0 || _Dunscale(&xchar, &t) == 0
                || (n = xchar - ychar) < 0)
                return (neg? -x : x);
            for (; 0 <= n; --n) { /* try to subtract |Y|*2^n */
                t = y, _Dscale(&t, n);
                if (t <= x) {
                    x -= t;
                    break;
               }
            }
        }
    }
}
