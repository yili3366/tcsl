OBJS = tsetjmp
LDFLAGS = -lm -I ../include

all: $(OBJS)

tsetjmp: tsetjmp.c longjmp.c setjmp.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
