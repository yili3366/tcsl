/* memcmp function */
#include <string.h>

int (memcmp)(const void *s1, const void *s2,
    size_t n)
{ /* compare unsigned char s1[n], s2[n] */
    const unsigned char *su1, *su2;

    for (su1 = s1, su2 = s2; 0 < n; ++su1, ++su2, --n)
        if (*su1 != *su2)
            return ((*su1 < *su2) ? -1 : +1);
    return (0);
}
