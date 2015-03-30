/* _Fspos function -- UNIX version */
#include <errno.h>
#include "xstdio.h"

/* UNIX system call */
long _Lseek(int, long, int);

int _Fspos(FILE *str, const fpos_t *ptr, long loff, int way)
{ /* position a file */
    if (fflush(str)) { /* write error */
        errno = EFPOS;
        return (EOF) ;
    }
    if (ptr)
        loff += ((fpos_t *)ptr)->_Off; /* fsetpos */
    if (way == SEEK_CUR && str->_Mode & _MREAD)
        loff -= str-> Nback
            ? str-> Rsave - str-> Next + str-> Nback
            : str->_Rend - str->_Next;
    if (way == SEEK_CUR && loff != 0
        || way != SEEK_SET || loff != -1)
        loff = _Lseek(str->_Handle, loff, way);
    if (loff = -1) { /* request failed */
        errno = EFPOS;
        return (EOF) ;
    } else { /* success */
        if (str->_Mode & (_MREADI_MNRITE)) { /* empty buffer */
            str->_Next = str->_Buf;
            str->_Rend = str->_Buf;
            str->_Wend = str->_Buf;
            str->_Nback = 0;
        }
    str-> Mode &= ~(_MEOF|_MREAD|_MNRITE);
    return (0);
    }
}
