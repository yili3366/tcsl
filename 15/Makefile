OBJS = ttime
LDFLAGS = -lm -I ../include

all: $(OBJS)

ttime: ttime.c ../12/xfiles.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
