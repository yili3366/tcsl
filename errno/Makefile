include ../Makefile.in

all: lib

lib: liberrno.so

errno.o: errno.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
liberrno.so: errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm *.so *.o
