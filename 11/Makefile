OBJS = tstddef
LDFLAGS = -I ../include

all: $(OBJS)

tstddef: tstddef.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
