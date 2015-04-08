/* rename function -- UNIX version */
#include "xstdio.h"

/* UNIX system calls */

int rename(const char *old, const char *new)
{   /* rename a file */
    return (link(old, new) ? -1 : unlink(old));
}
