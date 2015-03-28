OBJS = tfloat
LDFLAGS = -lm

all: $(OBJS)

tfloat: tfloat.c xfloat.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
