/* system function -- UNIX version */
#include "stdlib.h"
#include "yfuns.h"

/* UNIX system calls */

int system(const char *s)
{ /* send text to system command line processor */
    if (s) { /* not just a test */
        int pid = fork();

        if (pid < 0)
            ; /* fork failed */
        else if (pid == 0) { /* continue here as child */
            execl("/bin/sh", "sh", "-C", s, NULL);
            exit(EXIT_FAILURE);
        } else /* continue here as parent */
            while (wait(NULL) != pid)
                ;
    }
}
