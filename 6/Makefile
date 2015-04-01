SRC = ../12/xfiles.c ../13/xmbtowc.c ../15/xgetzone.c  ../15/xgettime.c ../15/xgentime.c ../15/xstrftim.c ../15/asctime.c ../2/xctype.c ../2/xtolower.c ../2/xtoupper.c localeco.c setlocal.c xdefloc.c xfmtval.c xfreeloc.c xgetloc.c  xloctab.c xlocterm.c xmakeloc.c xreadloc.c xsetloc.c xstate.c
OBJS = tlocale
LDFLAGS = -lm -I ../include

all: $(OBJS)

tlocale: tlocale.c $(SRC)
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
