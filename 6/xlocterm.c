/* _Locterm and Locvar functions */

//#include <ctype.h>
//#include <limits.h>
#include <string.h>
#include "xlocale.h"
#include "../2/ctype.h"
#include "../5/limits.h"

/* static data */
static const char dollars[] = {
 /* PLUS $@ and $$ */
"^abfnrtv" /* character codes */
"01234567" /* state values */
"ACDHLMPSUW" /* ctype codes */
"#FIOR"}; /* state commands */

static const unsigned short dolvals[] = {
    CHAR_MAX, '\a', '\b', '\f', '\n', '\r', '\t', '\v',
    0x000, 0x100, 0x200, 0x300, 0x400, 0x500, 0x600, 0x700,
    _XA, _BB, _DI, _XD, _LO, _CN, _PU, _SP, _UP, _XS,
    UCHAR_MAX, ST_FOLD, ST_INPUT, ST_OUTPUT, ST_ROTATE
};

static const char uppers[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
static short vars[sizeof (uppers) - 1] = {0};

int _Locvar (char ch, short val)
{
    const char *s = strchr(uppers, ch); /* set a $ variable */

    if (s == NULL)
        return (0);
    vars [s - uppers] = val;
    return (1);
}

int _Locterm(const char **ps, unsigned short *ans)
{ /* eva~uate a term on a ~ocale file line */
    const char *s = *ps;
    const char *sl;
    int mi;

    for (mi = 0; *s == '+' || *s == '-'; s = _Skip(s))
        mi = *s == '-' ? !mi : mi;
    if (isdigit(s[0]))
        *ans = strtol(s, (char **)&s, 0);
    else if (s[0] == '\'' && s[1] != '\0' && s[2] == '\'')
        *ans= ((unsigned char *)s) [1], s += 3;
    else if (s[0] && (sl = strchr(uppers, s[0])) != NULL)
        *ans= vars[sl - uppers], ++s;
    else if (s[0] == '$' && s[1]
        && (sl = strchr(dollars, s[1])) != NULL) {
        *ans = dolvals[sl - dollars];
        s += 2;
    } else
        return (0);

    if (mi)
        *ans = -*ans;
    *ps = _Skip(s- 1);
    return (1);
}
