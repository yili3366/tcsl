include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all:  lib

lib: libctype.so

isalnum.o : isalnum.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
isalpha.o : isalpha.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
iscntrl.o : iscntrl.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
isdigit.o : isdigit.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
isgraph.o : isgraph.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
islower.o : islower.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
isprint.o : isprint.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
ispunct.o : ispunct.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
isspace.o : isspace.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
isupper.o : isupper.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
isxdigit.o: isxdigit.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
tctype.o  : tctype.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
tolower.o : tolower.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
toupper.o : toupper.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
xctype.o  : xctype.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
xtolower.o: xtolower.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)
xtoupper.o: xtoupper.c
	$(CC) $(CFLAGS) $^  $(LDFLAGS)

libctype.so: isalnum.o isalpha.o iscntrl.o isdigit.o \
             isgraph.o islower.o isprint.o ispunct.o \
             isspace.o isupper.o isxdigit.o tolower.o \
             toupper.o xctype.o xtolower.o xtoupper.o \
             ../errno/errno.o
	$(CC) -g -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.o *.so
