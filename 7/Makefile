OBJS = tmath1 tmath2 tmath3
LDFLAGS = -lm

all: $(OBJS)

tmath1: ../4/xfloat.c xvalues.c tmath1.c
	$(CC) $(LDFLAGS) -o $@ $^
tmath2: ../4/xfloat.c tmath2.c
	$(CC) $(LDFLAGS) -o $@ $^
tmath3: ../4/xfloat.c tmath3.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
