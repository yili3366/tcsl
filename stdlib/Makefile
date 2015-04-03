include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: libstdlib.so

abort.o     :abort.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
abs.o       :abs.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
atexit.o    :atexit.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
atof.o      :atof.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
atoi.o      :atoi.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
atol.o      :atol.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
bsearch.o   :bsearch.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
calloc.o    :calloc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
div.o       :div.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
exit.o      :exit.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
free.o      :free.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
getenv.o    :getenv.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
labs.o      :labs.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
ldiv.o      :ldiv.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
malloc.o    :malloc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
mblen.o     :mblen.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
mbstowcs.o  :mbstowcs.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
mbtowc.o    :mbtowc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
qsort.o     :qsort.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
rand.o      :rand.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
realloc.o   :realloc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
srand.o     :srand.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strtod.o    :strtod.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strtol.o    :strtol.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strtoul.o   :strtoul.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
system.o    :system.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
wcstombs.o  :wcstombs.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
wctomb.o    :wctomb.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgetmem.o   :xgetmem.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xmbtowc.o   :xmbtowc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xstod.o     :xstod.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xstoul.o    :xstoul.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xwctomb.o   :xwctomb.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

libstdlib.so :abort.o abs.o atexit.o atof.o atoi.o \
              atol.o bsearch.o calloc.o div.o exit.o \
              free.o getenv.o labs.o ldiv.o malloc.o \
              mblen.o mbstowcs.o mbtowc.o qsort.o rand.o \
              realloc.o srand.o strtod.o strtol.o strtoul.o \
              system.o wcstombs.o wctomb.o xgetmem.o \
              xmbtowc.o xstod.o xstoul.o xwctomb.o ../errno/errno.o
	$(CC) -g3 -gdwarf-2 -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.so *.o
