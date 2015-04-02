/* isprint function */

#include "ctype.h"

int (isprint)(int c)
{
    return (_Ctype[c] & (_DI|_LO|_PU|_SP|_UP|_XA));
}
