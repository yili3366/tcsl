/* xalloc.h internal header */
#include <stddef.h>
#include <stdlib.h>
#ifndef _ YVALS
#include "yvals.h"

/* macros */
#define CELL_OFF (sizeof (size_t) + _MEMBND & ~_MEMBND)
#define SIZE_ BLOCK 512 /* minimum block size */
#define SIZE_ CELL \
    ((sizeof (_Cell) + _MEMBND & ~_MEMBND) - CELL_OFF)
    /* type definitions */
typedef struct _Cell {
    size_t _Size;
    struct _Cell *_Next;
} _Cell;

typedef struct {
  _Cell **_Plast;
  _Cell *_Head;
} _Altab;
    /* declarations */
void *_Getmem(size_t);
extern  _Altab _Aldata;
