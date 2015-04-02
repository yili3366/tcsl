include ../Makefile.in

OBJS = tassert tctype terrno tfloat tlimits tlocale \
       tmath1 tmath2 tmath3 tsetjmp tsignal tstdarg \
       tstddef tstdio1 tstdio2 tstdlib tstring ttime

all: $(OBJS)

tassert: tassert.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tctype: tctype.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

terrno: terrno.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tfloat: tfloat.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tlimits: tlimits.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tlocale: tlocale.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tmath1: tmath1.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tmath2: tmath2.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tmath3: tmath3.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tsetjmp : tsetjmp.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tsignal: tsignal.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tstdarg: tstdarg.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tstddef: tstddef.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tstdio1: tstdio1.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tstdio2: tstdio2.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tstdlib: tstdlib.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

tstring: tstring.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

ttime: ttime.c ../errno/errno.c
	$(CC) $(CFLAGS) -I ../include -L ../lib -lstdc -o $@ $^

.PHONY: clean
clean:
	- rm $(OBJS)
