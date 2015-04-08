/* vfprintf function */
#include "xstdio.h"

static void *prout(void *str, const char *buf, size_t n)
{ /* write to file */
    return (fwrite(buf, 1, n, str) == n ? str : NULL);
}
int vfprintf(FILE *str, const char *fmt, char *ap)
{ /* print formatted to stream from arq list */
    return (_Printf(&prout, str, fmt, ap));
}
