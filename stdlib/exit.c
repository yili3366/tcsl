/* exit function */
#include "stdio.h"
#include "stdlib.h"
#include "yfuns.h"

/* macros */
#define NATS 32
/* static data */
void (*_Atfuns[NATS]) (void) = {0};
size_t _Atcount = (NATS);

void exit(int status)
{
    while (_Atcount < NATS) /* tidy up and exit to system */
        (*_Atfuns[_Atcount++]) ();
    {
    size_t i; /* close all files */

    for (i = 0; i < FOPEN_MAX; ++i)
        if (_Files[i])
            fclose(_Files[i]);
    }
    _Exit(status);
}
