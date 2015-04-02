include ../Makefile.in

all: lib

lib: libstring.so

memchr.o    :memchr.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
memcmp.o    :memcmp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
memcpy.o    :memcpy.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
memmove.o   :memmove.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
memset.o    :memset.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strcat.o    :strcat.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strchr.o    :strchr.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strcmp.o    :strcmp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strcoll.o   :strcoll.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strcpy.o    :strcpy.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strcspn.o   :strcspn.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strerror.o  :strerror.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strlen.o    :strlen.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strncat.o   :strncat.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strncmp.o   :strncmp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strncpy.o   :strncpy.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strpbrk.o   :strpbrk.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strrchr.o   :strrchr.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strspn.o    :strspn.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strstr.o    :strstr.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strtok.o    :strtok.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strxfrm.o   :strxfrm.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xstrxfrm.o  :xstrxfrm.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)

libstring.so: memchr.o memcmp.o memcpy.o memmove.o \
              memset.o strcat.o strchr.o strcmp.o \
              strcoll.o strcpy.o strcspn.o strerror.o \
              strlen.o strncat.o strncmp.o strncpy.o \
              strpbrk.o strrchr.o strspn.o strstr.o \
              strtok.o strxfrm.o xstrxfrm.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm *.so *.o
