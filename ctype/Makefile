SRC = isalnum.c isalpha.c iscntrl.c isdigit.c isgraph.c \
      islower.c isprint.c ispunct.c isspace.c isupper.c \
      isxdigit.c tolower.c toupper.c xctype.c xtolower.c \
      xtoupper.c ../12/xfiles.c ../12/fputs.c \
      ../12/xfwprep.c
OBJS = tctype
CFLAGS = -g
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

isalnum.o : isalnum.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
isalpha.o : isalpha.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
iscntrl.o : iscntrl.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
isdigit.o : isdigit.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
isgraph.o : isgraph.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
islower.o : islower.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
isprint.o : isprint.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
ispunct.o : ispunct.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
isspace.o : isspace.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
isupper.o : isupper.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
isxdigit.o: isxdigit.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
tctype.o  : tctype.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
tolower.o : tolower.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
toupper.o : toupper.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xctype.o  : xctype.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xtolower.o: xtolower.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)
xtoupper.o: xtoupper.c
	$(CC) -fPIC -g -c -Wall $^ $(CFLAGS) $(LDFLAGS)

libctype.so: isalnum.o isalpha.o iscntrl.o isdigit.o \
             isgraph.o islower.o isprint.o ispunct.o \
             isspace.o isupper.o isxdigit.o tolower.o \
             toupper.o xctype.o xtolower.o xtoupper.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)

tctype: tctype.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS) *.o *.so
