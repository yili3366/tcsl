include ../Makefile.in

all: lib

lib: libsetjmp.so

longjmp.o : longjmp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
setjmp.o : setjmp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)

libsetjmp.so: longjmp.o setjmp.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm *.so *.o
