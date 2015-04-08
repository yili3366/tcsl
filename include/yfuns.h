/* yfuns.h functions header -- UNIX version */
#ifndef _YFUNS
#define _YFUNS
    /* macros */
#define _Envp (*environ)
#define _Fclose(str) close((str)->_Handle)
#define _Fread(str, buf, cnt) read((str)->_Handle, buf, cnt)
#define _Fwrite(str, buf, cnt) write((str)->_Handle, buf, cnt)

    /* interface declarations */
extern const char **environ;
#endif
