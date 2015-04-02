include ../Makefile.in

all: lib

lib: libtime.so

asctime.o   :asctime.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
clock.o     :clock.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
ctime.o     :ctime.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
difftime.o  :difftime.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
gmtime.o    :gmtime.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
localtim.o  :localtim.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
mktime.o    :mktime.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
strftime.o  :strftime.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
time.o      :time.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xgentime.o  :xgentime.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xgetdst.o   :xgetdst.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xgettime.o  :xgettime.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xgetzone.o  :xgetzone.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xisdst.o    :xisdst.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xstrftim.o  :xstrftim.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include
xttotm.o    :xttotm.c
	$(CC) -fPIC -g -c -Wall $^ -I ../include

libtime.so : asctime.o clock.o ctime.o difftime.o \
             gmtime.o localtim.o mktime.o strftime.o \
             time.o xgentime.o xgetdst.o xgettime.o \
             xgetzone.o xisdst.o xstrftim.o xttotm.o ../errno/errno.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm $(OBJS) *.so *.o
