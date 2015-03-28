OBJS = terrno
LDFLAGS = -lm

all: $(OBJS)

terrno: terrno.c errno.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
