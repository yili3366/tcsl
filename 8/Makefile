OBJS = tsetjmp
LDFLAGS = -lm

all: $(OBJS)

tsetjmp: tsetjmp.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
