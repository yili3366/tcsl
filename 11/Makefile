OBJS = tstddef
LDFLAGS = -lm

all: $(OBJS)

tstddef: tstddef.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
