#include <stdio.h>
#include <stdlib.h>
#include "assert.h"

void _Assert(char *mesg)
{
    fputs(mesg,stderr);
    fputs("--- assertion failed\n",stderr);
    abort();
}
