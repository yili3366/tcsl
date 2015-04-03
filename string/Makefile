include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: libstring.so

memchr.o    :memchr.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
memcmp.o    :memcmp.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
memcpy.o    :memcpy.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
memmove.o   :memmove.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
memset.o    :memset.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strcat.o    :strcat.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strchr.o    :strchr.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strcmp.o    :strcmp.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strcoll.o   :strcoll.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strcpy.o    :strcpy.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strcspn.o   :strcspn.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strerror.o  :strerror.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strlen.o    :strlen.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strncat.o   :strncat.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strncmp.o   :strncmp.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strncpy.o   :strncpy.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strpbrk.o   :strpbrk.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strrchr.o   :strrchr.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strspn.o    :strspn.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strstr.o    :strstr.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strtok.o    :strtok.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strxfrm.o   :strxfrm.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xstrxfrm.o  :xstrxfrm.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

libstring.so: memchr.o memcmp.o memcpy.o memmove.o \
              memset.o strcat.o strchr.o strcmp.o \
              strcoll.o strcpy.o strcspn.o strerror.o \
              strlen.o strncat.o strncmp.o strncpy.o \
              strpbrk.o strrchr.o strspn.o strstr.o \
              strtok.o strxfrm.o xstrxfrm.o ../errno/errno.o
	$(CC) -g -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.so *.o
