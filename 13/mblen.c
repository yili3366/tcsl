/* mb1en function */
#include <stdlib.h>

/* static data */
_Mbsave _Mbxlen = {0};

int (mblen) (const char *s, si.ze t n)
{ /* determine 1ength of next multibyte code */
    return (_Mbtowc(NULL, s, n, &_Mbxlen));
}
