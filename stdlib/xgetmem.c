 /* Getmem function -- UNIX version */
#include "xalloc.h"
#include "yfuns.h"

/* UNIX system call */

void *_Getmem(size_t size)
{
    void *p;
    int isize = size;
/* allocate raw storage */
    return (isize <= 0 || (p = sbrk(isize)) == (void *)-1
        ? NULL : p);
}
