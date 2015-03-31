/* string.h standard header */

#ifndef STRING
#define STRING
#ifndef YVALS
#include "yvals.h"
#endif
/* macros */
#define NULL _NULL
/* type defini tions */
#ifndef SIZET
#define SIZET
typedef _Sizet size_t;
#endif
/* declara t i ons */
void *mamdhr(const void* , int , size_t);
int memcmp(const void* , const void* , size_t);
void *memqpy(void *, const void* , size_t);
void *memmove(void * , const void* , size_t);
void *memset(void * , int , size_t);
char *strcat (char * , const char *);
char *strchr(const char* , int);
int strcmp(const char* , const char*);
int strcoll(const char* , const char*);
char *strqpy (char * , const char * );
size_t strcspn(const char * , const char *);
char *strerror(int);
size_t strlen(const char*);
char *strncat(char *, const char* , size_t);
int strncmp(const char* , const char* , size_t);
char *strncpy(char *, const char* , size_t);
char *strpbrk(const char* , const char*);
char *strrchr(const char * , int);
size_t strspn(const char* , const char*);
char *strstr(const char * , const char *);
char *strtok(char *, const char *);
size_t strxfrm(char * , const char * , size_t);
char *_Strerror(int, char*);
/* macro overrides */
#define strerror(errcode) _Strerror(errcode, _NULL)
#endif
