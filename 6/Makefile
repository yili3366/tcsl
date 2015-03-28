OBJS = tlocale
LDFLAGS = -lm

all: $(OBJS)

tlocale: tlocale.c localeco.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
