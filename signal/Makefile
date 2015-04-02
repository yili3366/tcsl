include ../Makefile.in

all: lib

lib: libsignal.so

raise.o : raise.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
signal.o : signal.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)

libsignal.so : raise.o signal.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  *.o *.so
