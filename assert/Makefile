SRC = xassert.c ../12/xfiles.c ../3/errno.c
OBJS = tassert
CFLAGS = -g
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

libassert.so: xassert.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)

xassert.o: xassert.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)

tassert: tassert.c $(SRC)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	@rm $(OBJS) *.o *.so
