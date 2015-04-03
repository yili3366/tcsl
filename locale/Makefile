include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: liblocale.so

localeco.o : localeco.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
setlocal.o : setlocal.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xdefloc.o  : xdefloc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xfmtval.o  : xfmtval.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xfreeloc.o : xfreeloc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgetloc.o  : xgetloc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xloctab.o  : xloctab.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xlocterm.o : xlocterm.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xmakeloc.o : xmakeloc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xreadloc.o : xreadloc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xsetloc.o  : xsetloc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xstate.o   : xstate.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

liblocale.so: localeco.o setlocal.o xdefloc.o xfmtval.o xfreeloc.o \
              xgetloc.o xloctab.o xlocterm.o xmakeloc.o xreadloc.o \
              xsetloc.o xstate.o ../errno/errno.o
	$(CC) -g -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.o *.so
