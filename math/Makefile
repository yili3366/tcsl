include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: libmath.so

acos.o     :acos.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
asin.o     :asin.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
atan2.o    :atan2.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
atan.o     :atan.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
ceil.o     :ceil.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
cosh.o     :cosh.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
cos.o      :cos.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
exp.o      :exp.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fabs.o     :fabs.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
floor.o    :floor.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fmod.o     :fmod.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
frexp.o    :frexp.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
ldexp.o    :ldexp.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
log10.o    :log10.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
log.o      :log.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
modf.o     :modf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
pow.o      :pow.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
sinh.o     :sinh.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
sin.o      :sin.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
sqrt.o     :sqrt.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
tanh.o     :tanh.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
tan.o      :tan.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xasin.o    :xasin.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xatan.o    :xatan.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xdint.o    :xdint.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xdnorm.o   :xdnorm.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xdscale.o  :xdscale.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xdtento.o  :xdtento.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xdtest.o   :xdtest.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xdunscal.o :xdunscal.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xexp.o     :xexp.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xldunsca.o :xldunsca.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xlog.o     :xlog.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xpoly.o    :xpoly.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xsin.o     :xsin.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xvalues.o  :xvalues.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

libmath.so: acos.o asin.o atan2.o atan.o ceil.o \
            cosh.o cos.o exp.o fabs.o floor.o fmod.o \
            frexp.o ldexp.o log10.o log.o modf.o pow.o \
            sinh.o sin.o sqrt.o tanh.o tan.o xasin.o  \
            xatan.o xdint.o xdnorm.o xdscale.o xdtento.o \
            xdtest.o xdunscal.o xexp.o xldunsca.o xlog.o \
            xpoly.o xsin.o xvalues.o ../errno/errno.o
	$(CC) -g -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.so *.o
