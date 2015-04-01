OBJS = tstdarg
LDFLAGS = -I ../include

all: $(OBJS)

tstdarg: tstdarg.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
