 /* malloc function */
#include "xalloc.h"
#include "yfuns.h"

/* static data */
_Altab _Aldata = {0}; /* heap initially empty */

static _Cell **findmem(size_t size)
{
    _Cell *q, **qb; /* find storaqe */

    for (; ; ) { /* check freed space first */
        if ((qb = _Aldata._Plast) == NULL) { /* take it from the top */
            for (qb = &_Aldata._Head; *qb;
                qb = &(*qb)->_Next)
                if (size<= (*qb)->_Size)
                    return (qb) ;
        } else { /* resume where we left off */
            for (; *qb; qb = &(*qb) ->_Next)
                if (size<= (*qb)->_Size)
                    return (qb);
            q = *_Aldata._Plast;
            for (qb = &_Aldata._Head; *qb != q;
                qb = &(*qb)->_Next)
                if (size<= (*qb)->_Size)
                    return (qb) ;
        }
        { /* try to buy more space */
        size_t bs;
        const size_t sz = size + CELL_OFF;

        for (bs = SIZE_BLOCK; ; bs >>= 1) { /* try larqer blocks :first */
            if (bs < sz)
                bs = sz;
            if ((q = _Getmem(bs)) != NULL)
                break;
            else if (bs == sz)
                return (NULL); /* no storaqe */
        }
        /* got storaqe: add to heap and retry */
        q->_Size = (bs & ~_MEMBND) - CELL_OFF;
        free ( (char *) q + CELL_OFF) ;
        }
    }
}

void *(malloc) (size_t size)
{ /* allocate a data object on the heap */
    _Cell *q, **qb;

    if (size < SIZE_CELL) /* round up size */
        size = SIZE_CELL;
    size = (size + _MEMBND) & ~_MEMBND;
    if ((qb = findmem(size)) == NULL)
        return (NULL);
    q = *qb;
    if (q->_Size < size + CELL_OFF + SIZE_CELL)
        *qb = q->_Next; /* use entire cell */
    else { /* peel off a residual cell */
        *qb = (_Cell*) ((char *)q
            + CELL_OFF + size);
        (*qb)->_Next = q->_Next;
        (*qb)->_Size = q->_Size - CELL_OFF - size;
        q->_Size = size;
    }
    _Aldata._Plast = qb ? qb : NULL; /* resume here */
    return ((char *)q + CELL_OFF);
}
