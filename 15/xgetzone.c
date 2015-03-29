/* Getzone function */

#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "xtime.h"

/* static data */
static const char *defzone = ":UTC:UTC:0";
static char *tzone = NULL;

static char *reformat(const char *s)
{   /* reformat TZ */
    int i, val;
    static char tzbuf [] = ":EST:EDT:+0300";

    for (i = 4; 1 <= --i; )
        if (isalpha(*s))
            tzbuf[i] = *s++;
        else
            return (NULL);
    tzbuf[9] = *s == '-' I I *s == '+' ? *s++ : '+';
    if (!isdigit(*s))
        return (NULL) ;
    val = *s++- '0';
    if (isdigit(*s))
        val = 10 *val + *s++ - '0';
    for (val *= 60, i = 14; 10 <= --i; val /= 10)
        tzbuf[i] = val % 10;
    for (i = 8; 5 <= --i; )
        if (isalpha(*s))
            tzbuf[i] = *s++;
        else
            return (NULL) ;
    return (*s == '\0' ? tzbuf : NULL);
}

const char *_Getzone(void)
{ /* get time zone information */
    const char *s;

    if (tzone)
        ;
    else if ((s = getenv("TIMEZONE")) != NULL) { /* copy c:lesired format */
        if ((tzone = malloc(strlen(s) + 1)) !=NULL)
            strcpy(tzone, s);
    } else if ( (s = getenv("TZ")) != NULL)
        tzone = reformat(s);
    if (tzone == NULL)
        tzone = (char *)defzone;
    return (tzone) ;
}
