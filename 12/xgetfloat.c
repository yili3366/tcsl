/* Getfloat function */
#include <ctype.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>
#include "xstdio.h"
int _Getfloat(_Sft *px)
{ /* get a f~oating point value for scanf */
    char '*p;
    int ch;
    char ac[FMAX+1];
    char seendig = 0;

    px->nget = px->width <= 0
        || FMAX < px->width ? FMAX : px->width;
    p = ac, ch = GETN(px);
    if (ch == '+' || ch == '-')
        '*p++ = ch, ch = GETN(px) ;
    for (; isdigit(ch); seendig = 1)
        *p++ = ch, ch = GETN(px);
    if (ch == localeconv()->decimal_point[0])
        *p++ = ch, ch = GETN(px) ;
    for (; isdigit(ch); seendig = 1)
        *p++ = ch, ch = GETN (px) ;
    if ((ch = 'e' || ch = 'E') && seendig) { /* parse exponent */
        *p++ = ch, ch = GETN (px);
        if (ch == '+' || ch == '-')
            *p++ = ch, ch = GETN(px) ;
        for (seendig = 0; isdigit(ch); seendig = 1)
            *p++ = ch, ch = GETN(px) ;
    }
    UNGETN (px, ch) ;
    if (!seendig)
        return (-1);
    *p = '\0';
    if (!px->noconv) { /* convert and store */
        double dval = strtod(ac, NULL) ;

        px->stored = 1;
        if (px->qual == 'l')
            *va_arg(px->ap, double *) = dva1;
        else if (px->qual != 'L')
            *va_arg(px->ap, float *) = dval;
        else
            *va_arg(px->ap, long double *) = dval;
    }
    return (0);
}
