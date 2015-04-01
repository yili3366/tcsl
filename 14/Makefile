SRC = memchr.c memcpy.c memcmp.c memmove.c memset.c \
      strcat.c strchr.c  strcmp.c strcoll.c strcpy.c \
      strcspn.c strerror.c strlen.c strncat.c strncmp.c \
      strncpy.c strpbrk.c strspn.c strstr.c strtok.c \
      strxfrm.c xstrxfrm.c ../6/xstate.c
OBJS = tstring
LDFLAGS = -I ../include

all: $(OBJS)

tstring: $(SRC) tstring.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
