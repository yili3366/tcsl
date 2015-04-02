include ../Makefile.in

all: lib

lib: libsignal.so

raise.o : raise.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
signal.o : signal.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include

libsignal.so : raise.o signal.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  *.o *.so
