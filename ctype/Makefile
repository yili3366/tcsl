include ../Makefile.in

all:  lib

lib: libctype.so

isalnum.o : isalnum.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
isalpha.o : isalpha.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
iscntrl.o : iscntrl.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
isdigit.o : isdigit.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
isgraph.o : isgraph.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
islower.o : islower.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
isprint.o : isprint.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
ispunct.o : ispunct.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
isspace.o : isspace.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
isupper.o : isupper.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
isxdigit.o: isxdigit.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
tctype.o  : tctype.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
tolower.o : tolower.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
toupper.o : toupper.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xctype.o  : xctype.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xtolower.o: xtolower.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include
xtoupper.o: xtoupper.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) -I ../include

libctype.so: isalnum.o isalpha.o iscntrl.o isdigit.o \
             isgraph.o islower.o isprint.o ispunct.o \
             isspace.o isupper.o isxdigit.o tolower.o \
             toupper.o xctype.o xtolower.o xtoupper.o \
             ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm *.o *.so
