/* memaet function */
#include "string.h"

void *memset(void *s, int c, size_t n)
{ /* store c throughout unsigned char s[n] */
    const unsigned char uc = c;
    unsigned char *su;

    for (su = s; 0 < n; ++su, --n)
        *su = uc;
    return (s);
}
