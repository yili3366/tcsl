/* rename function -- UNIX version */
#include "xstdio.h"

/* UNIX system calls */
int _Link(const char*, const char*);
int _Unlink(const char*);

int (rename) (const char *old, const char *new)
{   /* rename a file */
    return (_Link(old, new) ? -1 : _Unlink(old));
}
