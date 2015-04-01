SRC = abort.c atof.c bsearch.c exit.c labs.c mblen.c \
      qsort.c srand.c strtoul.c wcstombs.c xmbtowc.c \
      abs.c atoi.c calloc.c free.c ldiv.c mbstowcs.c \
      rand.c strtod.c system.c wctomb.c xstoul.c xstod.c \
      atexit.c atol.c div.c getenv.c malloc.c mbtowc.c \
      realloc.c strtol.c xgetmem.c xwctomb.c ../3/errno.c \
      ../2/xtolower.c ../2/xctype.c ../6/localeco.c \
      ../6/xstate.c ../7/xdunscal.c ../7/xdtento.c \
      ../7/xvalues.c ../7/xdscale.c ../7/xdnorm.c ../12/xfiles.c

OBJS = tstdlib
LDFLAGS = -I ../include

all: $(OBJS)

tstdlib: $(SRC) ../7/xlog.c tstdlib.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
