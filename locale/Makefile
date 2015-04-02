SRC = ../12/xfiles.c ../13/xmbtowc.c ../15/xgetzone.c  ../15/xgettime.c ../15/xgentime.c ../15/xstrftim.c ../15/asctime.c ../2/xctype.c ../2/xtolower.c ../2/xtoupper.c localeco.c setlocal.c xdefloc.c xfmtval.c xfreeloc.c xgetloc.c  xloctab.c xlocterm.c xmakeloc.c xreadloc.c xsetloc.c xstate.c
OBJS = tlocale
CFLAGS = -g
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

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
              xsetloc.o xstate.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)

tlocale: tlocale.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS) *.o *.so
