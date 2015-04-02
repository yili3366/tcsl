include ../Makefile.in

all: lib

lib: liblocale.so

localeco.o : localeco.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
setlocal.o : setlocal.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xdefloc.o  : xdefloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xfmtval.o  : xfmtval.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xfreeloc.o : xfreeloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xgetloc.o  : xgetloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xloctab.o  : xloctab.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xlocterm.o : xlocterm.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xmakeloc.o : xmakeloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xreadloc.o : xreadloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xsetloc.o  : xsetloc.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xstate.o   : xstate.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)

liblocale.so: localeco.o setlocal.o xdefloc.o xfmtval.o xfreeloc.o \
              xgetloc.o xloctab.o xlocterm.o xmakeloc.o xreadloc.o \
              xsetloc.o xstate.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  *.o *.so
