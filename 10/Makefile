OBJS = tstdarg
LDFLAGS = -lm

all: $(OBJS)

tstdarg: tstdarg.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
