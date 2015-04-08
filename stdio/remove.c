/* remove function -- UNIX version */
#include "xstdio.h"

/* UNIX system call */
int remove(const char *fname)
{ /* remove a file */
    return (unlink(fname));
}
