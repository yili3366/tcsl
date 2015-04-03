include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: libtime.so

asctime.o   :asctime.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
clock.o     :clock.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
ctime.o     :ctime.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
difftime.o  :difftime.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
gmtime.o    :gmtime.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
localtim.o  :localtim.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
mktime.o    :mktime.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
strftime.o  :strftime.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
time.o      :time.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgentime.o  :xgentime.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgetdst.o   :xgetdst.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgettime.o  :xgettime.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgetzone.o  :xgetzone.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xisdst.o    :xisdst.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xstrftim.o  :xstrftim.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xttotm.o    :xttotm.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

libtime.so : asctime.o clock.o ctime.o difftime.o \
             gmtime.o localtim.o mktime.o strftime.o \
             time.o xgentime.o xgetdst.o xgettime.o \
             xgetzone.o xisdst.o xstrftim.o xttotm.o ../errno/errno.o
	$(CC) -g3 -gdwarf-2 -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr  *.so *.o
