/* strrchr function */
#include "string.h"

char *(strrchr) (const char *s, int c)
{ /* find last occurrence of c in char s [1 */
    const char ch = c;
    const char *sc;

    for (sc = NULL; ; ++s) {
        if (*s == ch)
            sc = s;
        if (*s == '\0')
            return ((char *)sc);
    }
}
