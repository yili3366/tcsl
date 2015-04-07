/* memcpy function */
#include "string.h"

void *(memcpy) (void *s1, const void *s2, size_t n)
{ /* copy char s2[n] to s1[n] in any order */
    char *su1;
    const char *su2;

    for (su1 = s1, su2 = s2; 0 < n; ++su1, ++su2, --n)
        *su1 = *su2;
    return (s1);
}