OBJS = tlimits
LDFLAGS = -lm

all: $(OBJS)

tlimits: tlimits.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
