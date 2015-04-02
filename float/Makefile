include ../Makefile.in

all: lib

lib: libfloat.so

xfloat.o: xfloat.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)

libfloat.so: xfloat.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  *.so *.o
