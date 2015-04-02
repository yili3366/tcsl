OBJS = tfloat
CFLAGS = -g
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

tfloat: tfloat.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^
xfloat.o: xfloat.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
libfloat.so: xfloat.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm $(OBJS) *.so *.o
