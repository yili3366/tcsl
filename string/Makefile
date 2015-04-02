include ../Makefile.in

all: lib

lib: libstring.so

memchr.o    :memchr.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
memcmp.o    :memcmp.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
memcpy.o    :memcpy.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
memmove.o   :memmove.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
memset.o    :memset.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strcat.o    :strcat.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strchr.o    :strchr.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strcmp.o    :strcmp.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strcoll.o   :strcoll.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strcpy.o    :strcpy.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strcspn.o   :strcspn.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strerror.o  :strerror.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strlen.o    :strlen.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strncat.o   :strncat.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strncmp.o   :strncmp.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strncpy.o   :strncpy.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strpbrk.o   :strpbrk.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strrchr.o   :strrchr.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strspn.o    :strspn.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strstr.o    :strstr.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strtok.o    :strtok.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strxfrm.o   :strxfrm.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xstrxfrm.o  :xstrxfrm.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include

libstring.so: memchr.o memcmp.o memcpy.o memmove.o \
              memset.o strcat.o strchr.o strcmp.o \
              strcoll.o strcpy.o strcspn.o strerror.o \
              strlen.o strncat.o strncmp.o strncpy.o \
              strpbrk.o strrchr.o strspn.o strstr.o \
              strtok.o strxfrm.o xstrxfrm.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm *.so *.o
