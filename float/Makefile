include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: libfloat.so

xfloat.o: xfloat.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

libfloat.so: xfloat.o ../errno/errno.o
	$(CC) -g3 -gdwarf-2 -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.so *.o
