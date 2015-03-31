OBJS = tlimits
LDFLAGS = -lm -I ../include

all: $(OBJS)

tlimits: tlimits.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
