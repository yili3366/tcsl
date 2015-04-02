include ../Makefile.in

all: lib

lib: liblocale.so

localeco.o : localeco.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
setlocal.o : setlocal.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xdefloc.o  : xdefloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xfmtval.o  : xfmtval.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xfreeloc.o : xfreeloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xgetloc.o  : xgetloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xloctab.o  : xloctab.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xlocterm.o : xlocterm.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xmakeloc.o : xmakeloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xreadloc.o : xreadloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xsetloc.o  : xsetloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xstate.o   : xstate.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include

liblocale.so: localeco.o setlocal.o xdefloc.o xfmtval.o xfreeloc.o \
              xgetloc.o xloctab.o xlocterm.o xmakeloc.o xreadloc.o \
              xsetloc.o xstate.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  *.o *.so
