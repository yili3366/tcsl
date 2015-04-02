include ../Makefile.in

all: lib

lib: liberrno.so

errno.o: errno.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
liberrno.so: errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm *.so *.o
