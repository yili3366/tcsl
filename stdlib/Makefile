include ../Makefile.in

all: lib

lib: libstdlib.so

abort.o     :abort.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
abs.o       :abs.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
atexit.o    :atexit.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
atof.o      :atof.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
atoi.o      :atoi.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
atol.o      :atol.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
bsearch.o   :bsearch.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
calloc.o    :calloc.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
div.o       :div.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
exit.o      :exit.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
free.o      :free.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
getenv.o    :getenv.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
labs.o      :labs.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
ldiv.o      :ldiv.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
malloc.o    :malloc.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
mblen.o     :mblen.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
mbstowcs.o  :mbstowcs.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
mbtowc.o    :mbtowc.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
qsort.o     :qsort.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
rand.o      :rand.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
realloc.o   :realloc.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
srand.o     :srand.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strtod.o    :strtod.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strtol.o    :strtol.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strtoul.o   :strtoul.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
system.o    :system.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
wcstombs.o  :wcstombs.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
wctomb.o    :wctomb.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xgetmem.o   :xgetmem.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xmbtowc.o   :xmbtowc.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xstod.o     :xstod.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xstoul.o    :xstoul.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xwctomb.o   :xwctomb.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include

libstdlib.so :abort.o abs.o atexit.o atof.o atoi.o \
              atol.o bsearch.o calloc.o div.o exit.o \
              free.o getenv.o labs.o ldiv.o malloc.o \
              mblen.o mbstowcs.o mbtowc.o qsort.o rand.o \
              realloc.o srand.o strtod.o strtol.o strtoul.o \
              system.o wcstombs.o wctomb.o xgetmem.o \
              xmbtowc.o xstod.o xstoul.o xwctomb.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  *.so *.o
