include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: libsetjmp.so

longjmp.o : longjmp.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
setjmp.o : setjmp.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

libsetjmp.so: longjmp.o setjmp.o ../errno/errno.o
	$(CC) -g3 -gdwarf-2 -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.so *.o
