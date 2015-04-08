/* mblen function */
#include "stdlib.h"

/* static data */
_Mbsave _Mbxlen = {0};

int (mblen)(const char *s, size_t n)
{ /* determine 1ength of next multibyte code */
    return (_Mbtowc(NULL, s, n, &_Mbxlen));
}
