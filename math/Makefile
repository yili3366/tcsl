SRC = atan.c asin.c ../4/xfloat.c atan2.c ceil.c cos.c cosh.c exp.c \
      fabs.c floor.c fmod.c frexp.c ldexp.c log10.c log.c modf.c \
      pow.c sin.c sinh.c sqrt.c tan.c tanh.c xasin.c xatan.c xdint.c \
      xdnorm.c xdscale.c xdtento.c xdtest.c xdunscal.c xexp.c \
      xldunsca.c xlog.c xpoly.c xsin.c xvalues.c ../3/errno.c
OBJS = tmath1 tmath2 tmath3
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

CFLAGS = -g

all: $(OBJS)

tmath1: tmath1.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^
tmath2: tmath2.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^
tmath3: tmath3.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

acos.o     :acos.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
asin.o     :asin.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
atan2.o    :atan2.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
atan.o     :atan.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
ceil.o     :ceil.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
cosh.o     :cosh.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
cos.o      :cos.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
exp.o      :exp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
fabs.o     :fabs.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
floor.o    :floor.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
fmod.o     :fmod.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
frexp.o    :frexp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
ldexp.o    :ldexp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
log10.o    :log10.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
log.o      :log.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
modf.o     :modf.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
pow.o      :pow.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
sinh.o     :sinh.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
sin.o      :sin.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
sqrt.o     :sqrt.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
tanh.o     :tanh.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
tan.o      :tan.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xasin.o    :xasin.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xatan.o    :xatan.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xdint.o    :xdint.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xdnorm.o   :xdnorm.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xdscale.o  :xdscale.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xdtento.o  :xdtento.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xdtest.o   :xdtest.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xdunscal.o :xdunscal.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xexp.o     :xexp.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xldunsca.o :xldunsca.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xlog.o     :xlog.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xpoly.o    :xpoly.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xsin.o     :xsin.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xvalues.o  :xvalues.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
errno.o    :../3/errno.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)

libmath.so: acos.o asin.o atan2.o atan.o ceil.o \
            cosh.o cos.o exp.o fabs.o floor.o fmod.o \
            frexp.o ldexp.o log10.o log.o modf.o pow.o \
            sinh.o sin.o sqrt.o tanh.o tan.o xasin.o  \
            xatan.o xdint.o xdnorm.o xdscale.o xdtento.o \
            xdtest.o xdunscal.o xexp.o xldunsca.o xlog.o \
            xpoly.o xsin.o xvalues.o errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)
.PHONY: clean
clean:
	rm $(OBJS) *.so *.o
