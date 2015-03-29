OBJS = tsignal
LDFLAGS = -lm

all: $(OBJS)

tsignal: tsignal.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
