SRC = atan.c asin.c ../4/xfloat.c atan2.c ceil.c cos.c cosh.c exp.c \
      fabs.c floor.c fmod.c frexp.c ldexp.c log10.c log.c modf.c \
      pow.c sin.c sinh.c sqrt.c tan.c tanh.c xasin.c xatan.c xdint.c \
      xdnorm.c xdscale.c xdtento.c xdtest.c xdunscal.c xexp.c \
      xldunsca.c xlog.c xpoly.c xsin.c xvalues.c
OBJS = tmath1 tmath2 tmath3
LDFLAGS = -lm

all: $(OBJS)

tmath1: tmath1.c $(SRC)
	$(CC) $(LDFLAGS) -o $@ $^
tmath2: tmath2.c $(SRC)
	$(CC) $(LDFLAGS) -o $@ $^
tmath3: tmath3.c $(SRC)
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
