include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: libsignal.so

raise.o : raise.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
signal.o : signal.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

libsignal.so : raise.o signal.o ../errno/errno.o
	$(CC) -g -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  -fr *.o *.so
