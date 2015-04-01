/* yfuns.h functions header -- UNIX version */
#ifndef _YFUNS
#define _YFUNS
    /* macros */
#define _Envp (*_Environ)
#define _Fclose(str) _Close((str)->_Handle)
#define _Fread(str, buf, cnt) _Read((str)->_Handle, buf, cnt)
#define _Fwrite(str, buf, cnt) _Write((str)->_Handle, buf, cnt)

#define _Environ environ
#define _Clock clock
#define _Close close
#define _Execl execl
#define _Exit exit
#define _Fork fork
#define _Getpid getpid
#define _Kill kill
#define _Link link
#define _Lseek lseek
#define _Open open
#define _Read read
#define _Sbrk sbrk
#define _Signal signal
#define _Time time
#define _Unlink unlink
#define _Write write
#define _Wait wait

    /* interface declarations */
extern const char **_Environ;
int _Close(int);
void _Exit(int);
int _Read(int, unsigned char *, int);
int _Write(int, const unsigned char*, int);
#endif
