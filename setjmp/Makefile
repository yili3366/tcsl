include ../Makefile.in

all: lib

lib: libsetjmp.so

longjmp.o : longjmp.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
setjmp.o : setjmp.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include

libsetjmp.so: longjmp.o setjmp.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm *.so *.o
