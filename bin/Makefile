include ../Makefile.in

LDFLAGS += -L ../lib -lstdc

OBJS = tassert tctype terrno tfloat tlimits tlocale \
       tmath1 tmath2 tmath3 tsetjmp tsignal tstdarg \
       tstddef tstdio1 tstdio2 tstdlib tstring ttime

all: $(OBJS)

tassert: tassert.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tctype: tctype.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

terrno: terrno.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tfloat: tfloat.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tlimits: tlimits.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tlocale: tlocale.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tmath1: tmath1.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tmath2: tmath2.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tmath3: tmath3.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tsetjmp : tsetjmp.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tsignal: tsignal.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tstdarg: tstdarg.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tstddef: tstddef.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tstdio1: tstdio1.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tstdio2: tstdio2.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tstdlib: tstdlib.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

tstring: tstring.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

ttime: ttime.c ../errno/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	- rm -fr $(OBJS)
