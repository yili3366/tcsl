 /* _Getfld function */
#include <ctype.h>
#include <limits.h>
#include <string.h>
#include "xstdio.h"

const char * _Getfld(_Sft *px, const char *s)
{ /* convert a field */
    int ch;
    char *p;

    px->stored = 0;
    switch (*s) { /* switch on conversion specifier */
    case 'c': /* convert an array of chars */
        if (px->width == 0)
            px->width = 1;
        p = va_arg(px->ap, char*);
        for (; 0 < px->width; --px->width)
            if ((ch = GET(px)) < 0)
                return (NULL);
            else if (!px->noconv)
                *p++ = ch, px->stored = 1;
        break;
    case 'p': /* convert a pointer */
    case 'd':
    case 'i':
    case 'o':
    case 'u':
    case 'x':
    case 'X':
        if (_Getint(px, *s)) /* convert an integer */
            return (NULL);
        break;
    case 'e':
    case 'E':
    case 'f':
    case 'g':
    case 'G':
        if (_Getfloat(px)) /* convert a floating */
            return (NULL) ;
        break;
    case 'n': /* return output count */
        if (px->qual == 'h')
            *va_arg(px->ap, short *) = px->nchar;
        else if (px->qual != '1')
            *va_arg(px->ap, int *) = px->nchar;
        else
            *va_arg(px->ap, long *) = px->nchar;
        break;
    case 's': /* convert a string */
        px->nget = px->width <= 0 ? INT_MAX : px->width;
        p = va_arg(px->ap, char *);
        while (0 <= (ch = GETN (px)))
            if (isspace(ch))
                break;
            else if (!px->noconv)
                *p++ = ch;
        UNGETN (px, ch) ;
        if (!px->noconv)
            *p++ = '\0', px->stored = 1;
        break;
    case '%': /* match a '%' */
        if ((ch = GET(px)) == '%')
            break;
        UNGET (px, ch) ;
        return (NULL) ;
    case '[' :
        { /* convert a scan set */
        char comp= *++s =='^' ? *s++: '\0';
        const char *t = strchr(*s == ']' ? s + 1 : s, ']');
        size_t n = t - s;

        if (t = NULL)
            return (NULL); /* undefined */
        px->nget = px->width <= 0 ? INT_MAX : px->width;
        p = va_arg(px->ap, char*);
        while (0 <= (ch = GETN (px)))
            if (!comp && !memchr(s, ch, n)
                || comp && memchr(s, ch, n))
                break;
            else if (!px->noconv)
                *p++ = ch;
        UNGETN (px, ch) ;
        if (!px->noconv)
            *p++ = '\0', px->stored = 1;
        s = t;
        }
        break;
    default: /* undefined specifier, quit */
        return (NULL);
    }
    return (s);
}
