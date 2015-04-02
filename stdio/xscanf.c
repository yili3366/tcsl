/* _ Scanf function */
#include "ctype.h"
#include "limits.h"
#include "stdlib.h"
#include "string.h"
#include "xstdio.h"

int _Scanf(int (*pfn)(void *, int), void *arg,
    const char *fmt, va_list ap)
{ /* read formatted */
    const char *s;
    int nconv = 0;
    _Sft x;

    x.pfn = pfn;
    x.arg = arg;
    x.ap = ap;
    x.nchar = 0;
    for (s = fmt; ; ++s) { /* parse format string */
        int ch;
        { /* match any literal or white-space */
        int n;
        wchar_t wc;
        _Mbsave state = {0};

        while (0 < (n = _Mbtowc(&wc, s, MB_CUR_MAX, &state))) {
        /* check type of mul tibyte char */
            s += n;
            if (wc == '%')
                break;
            else if (wc <= UCHAR_MAX && isspace(wc)) { /* match any white-space */
                while (isspace(*s))
                    ++s;
                while (isspace(ch = GET(&x)))
                    ;
                UNGET(&x, ch);
            } else /* match literal text */
                for (s -= n; 0 <= --n; )
                    if ((ch = GET(&x)) != *s++) { /* bad match */
                        UNGET(&x, ch);
                        return (nconv) ;
                    }
        }
        if (*s== '\0')
            return (nconv);
        }
        { /* process a conversion specifier */
        x.noconv = *s == '*' ? *s++ : '\0';
        for (x.width = 0; isdigit(*s); ++s)
            if (x.width < _WMAX)
                x.width = x.width * 10 + *s - '0';
        x.qual = strchr("hlL", *s) ? *s++ : '\0';
        if (!strchr ("cn[", *s)) { /* match leading white- space */
             while (isspace(ch = GET(&x)))
                 ;
             UNGET(&x, ch);
        }
        if ((s = _Getfld(&x, s)) ==NULL)
            return (0 < nconv? nconv : EOF);
        if (x.stored)
            ++nconv;
        }
    }
}
