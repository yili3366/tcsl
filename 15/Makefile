OBJS = ttime
LDFLAGS = -lm

all: $(OBJS)

ttime: ttime.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
