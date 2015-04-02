include ../Makefile.in

all: lib

lib: libmath.so

acos.o     :acos.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
asin.o     :asin.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
atan2.o    :atan2.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
atan.o     :atan.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
ceil.o     :ceil.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
cosh.o     :cosh.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
cos.o      :cos.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
exp.o      :exp.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
fabs.o     :fabs.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
floor.o    :floor.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
fmod.o     :fmod.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
frexp.o    :frexp.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
ldexp.o    :ldexp.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
log10.o    :log10.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
log.o      :log.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
modf.o     :modf.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
pow.o      :pow.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
sinh.o     :sinh.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
sin.o      :sin.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
sqrt.o     :sqrt.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
tanh.o     :tanh.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
tan.o      :tan.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xasin.o    :xasin.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xatan.o    :xatan.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xdint.o    :xdint.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xdnorm.o   :xdnorm.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xdscale.o  :xdscale.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xdtento.o  :xdtento.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xdtest.o   :xdtest.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xdunscal.o :xdunscal.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xexp.o     :xexp.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xldunsca.o :xldunsca.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xlog.o     :xlog.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xpoly.o    :xpoly.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xsin.o     :xsin.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xvalues.o  :xvalues.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include

libmath.so: acos.o asin.o atan2.o atan.o ceil.o \
            cosh.o cos.o exp.o fabs.o floor.o fmod.o \
            frexp.o ldexp.o log10.o log.o modf.o pow.o \
            sinh.o sin.o sqrt.o tanh.o tan.o xasin.o  \
            xatan.o xdint.o xdnorm.o xdscale.o xdtento.o \
            xdtest.o xdunscal.o xexp.o xldunsca.o xlog.o \
            xpoly.o xsin.o xvalues.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm  *.so *.o
