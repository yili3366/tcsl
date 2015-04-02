OBJS = tlimits
CFLAGS = -g
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

tlimits: tlimits.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
