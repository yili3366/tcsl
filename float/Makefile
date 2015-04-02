include ../Makefile.in

all: lib

lib: libfloat.so

xfloat.o: xfloat.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include

libfloat.so: xfloat.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  *.so *.o
