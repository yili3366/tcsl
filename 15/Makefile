SRC = asctime.c ctime.c gmtime.c strftime.c ttime.c \
      xgetdst.c xgetzone.c xstrftim.c clock.c \
      difftime.c localtim.c mktime.c time.c xgentime.c \
      xgettime.c xisdst.c xttotm.c ../2/xctype.c \
      ../6/xstate.c ../13/xmbtowc.c
OBJS = ttime
LDFLAGS = -I ../include

all: $(OBJS)

ttime: $(SRC) ttime.c ../12/xfiles.c
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
