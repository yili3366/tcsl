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
CFLAGS = -g
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

tstdlib: tstdlib.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

abort.o     :abort.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
abs.o       :abs.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
atexit.o    :atexit.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
atof.o      :atof.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
atoi.o      :atoi.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
atol.o      :atol.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
bsearch.o   :bsearch.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
calloc.o    :calloc.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
div.o       :div.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
exit.o      :exit.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
free.o      :free.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
getenv.o    :getenv.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
labs.o      :labs.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
ldiv.o      :ldiv.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
malloc.o    :malloc.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
mblen.o     :mblen.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
mbstowcs.o  :mbstowcs.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
mbtowc.o    :mbtowc.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
qsort.o     :qsort.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
rand.o      :rand.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
realloc.o   :realloc.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
srand.o     :srand.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strtod.o    :strtod.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strtol.o    :strtol.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strtoul.o   :strtoul.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
system.o    :system.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
wcstombs.o  :wcstombs.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
wctomb.o    :wctomb.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xgetmem.o   :xgetmem.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xmbtowc.o   :xmbtowc.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xstod.o     :xstod.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xstoul.o    :xstoul.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xwctomb.o   :xwctomb.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
errno.o   :../3/errno.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)

libstdlib.so :abort.o abs.o atexit.o atof.o atoi.o \
              atol.o bsearch.o calloc.o div.o exit.o \
              free.o getenv.o labs.o ldiv.o malloc.o \
              mblen.o mbstowcs.o mbtowc.o qsort.o rand.o \
              realloc.o srand.o strtod.o strtol.o strtoul.o \
              system.o wcstombs.o wctomb.o xgetmem.o \
              xmbtowc.o xstod.o xstoul.o xwctomb.o errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm $(OBJS) *.so *.o
