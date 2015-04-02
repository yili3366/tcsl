OBJS = terrno
CFLAGS = -g
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

terrno: terrno.c errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^
errno.o: errno.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
liberrno.so: errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm $(OBJS) *.so *.o
