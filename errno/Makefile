include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: liberrno.so

errno.o: errno.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
liberrno.so: errno.o
	$(CC) -g3 -gdwarf-2 -shared -Wl,-soname,$@ -o $@  $^ -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.so *.o
