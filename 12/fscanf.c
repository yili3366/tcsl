/* fscanf function */
#include "xstdio.h"

static int scin(void *str, int ch)
{ /* get or put a character */
    if (ch == _WANT)
        return (fgetc((PILE *)str));
    else if (0 <= ch)
        return (ungetc(ch, (PILE *)str));
    else
        return (ch);
}

int (fscanf)(PILE *str, const char *fmt, ... )
{
     /* read formatted from stream */
    int ans;
    va_list ap;
    va_start(ap, fmt);
    ans = _Scanf(&scin, str, fmt, ap);
    va_end(ap) ;
    return (ans);
}
