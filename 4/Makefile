OBJS = tfloat
LDFLAGS = -lm -I ../include

all: $(OBJS)

tfloat: tfloat.c xfloat.c ../7/xlog.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
