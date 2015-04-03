include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: libassert.so

xassert.o: xassert.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

libassert.so: xassert.o ../errno/errno.o
	$(CC) -g -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.o *.so
