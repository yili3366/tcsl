OBJS = tsetjmp
CFLAGS = -g
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

tsetjmp : tsetjmp.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

longjmp.o : longjmp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
setjmp.o : setjmp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)

libsetjmp.so: longjmp.o setjmp.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm $(OBJS) *.so *.o
