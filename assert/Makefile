include ../Makefile.in

all: lib

lib: libassert.so

xassert.o: xassert.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)

libassert.so: xassert.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  *.o *.so
