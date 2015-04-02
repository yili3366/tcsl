OBJS = tsignal
CFLAGS = -g
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

tsignal: tsignal.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

raise.o : raise.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
signal.o : signal.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)

libsignal.so : raise.o signal.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm $(OBJS) *.o *.so
