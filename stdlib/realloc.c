/* realloc function */
#include "string.h"
#include "xalloc.h"

void *realloc(void *ptr, size_t size)
{ /* reallocate a data object on the heap */
    _Cell *q;

    if (ptr == NULL)
        return (malloc(size));
    q = (_Cell *) ((char *)ptr - CELL_OFF);
    if (q->_Size < size) { /* try to buy a larger cell */
        char *const new_p = malloc(size);
        if (new_p == NULL)
            return (NULL) ;
        memcpy(new_p, ptr, q->_Size);
        free(ptr);
        return (new_p) ;
    } else if (q->_Size < size + CELL_OFF + SIZE_CELL)
        return (ptr); /*leave cell alone*/
    else { /* free excess space */
        const size_t new_n = (size + _MEMBND) & ~_MEMBND;
        _Cell *const new_q = (_Cell *) ((char *)ptr + new_n);

       new_q->_Size = q->_Size - CELL_OFF - new_n;
       q->_Size = new_n;
       free((char *)new_q + CELL_OFF);
       return (ptr) ;
    }
}
