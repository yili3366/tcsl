OBJS = tsignal
LDFLAGS =  -I ../include

all: $(OBJS)

tsignal: tsignal.c raise.c signal.c ../12/xfiles.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
