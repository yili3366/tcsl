OBJS = terrno
LDFLAGS = -lm -I ../include

all: $(OBJS)

terrno: terrno.c errno.c ../7/xdscale.c ../7/xdunscal.c ../7/sqrt.c ../7/xvalues.c ../7/xdnorm.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
