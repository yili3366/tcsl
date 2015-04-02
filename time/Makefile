SRC = asctime.c ctime.c gmtime.c strftime.c ttime.c \
      xgetdst.c xgetzone.c xstrftim.c clock.c \
      difftime.c localtim.c mktime.c time.c xgentime.c \
      xgettime.c xisdst.c xttotm.c ../2/xctype.c \
      ../6/xstate.c ../13/xmbtowc.c
OBJS = ttime
LDFLAGS = -I ../include -L ../lib -lassert -lerrno \
          -llocale -lsetjmp -lstdio -lstring -lctype \
          -lfloat -lmath -lsignal -lstdlib -ltime

all: $(OBJS)

ttime: ttime.c ../3/errno.c
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $^

asctime.o   :asctime.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
clock.o     :clock.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
ctime.o     :ctime.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
difftime.o  :difftime.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
gmtime.o    :gmtime.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
localtim.o  :localtim.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
mktime.o    :mktime.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
strftime.o  :strftime.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
time.o      :time.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xgentime.o  :xgentime.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xgetdst.o   :xgetdst.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xgettime.o  :xgettime.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xgetzone.o  :xgetzone.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xisdst.o    :xisdst.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xstrftim.o  :xstrftim.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)
xttotm.o    :xttotm.c
	$(CC) -fPIC -g -c -Wall $^ $(LDFLAGS)

libtime.so : asctime.o clock.o ctime.o difftime.o \
             gmtime.o localtim.o mktime.o strftime.o \
             time.o xgentime.o xgetdst.o xgettime.o \
             xgetzone.o xisdst.o xstrftim.o xttotm.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) $(LDFLAGS)

.PHONY: clean
clean:
	rm $(OBJS) *.so *.o
