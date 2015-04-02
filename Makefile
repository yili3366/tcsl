include Makefile.in

LIB_DIRS = assert ctype errno float locale math \
            setjmp signal stdio stdlib string time

BIN_DIRS = bin

SRCS = $(shell for DIR in $(LIB_DIRS); \
      do \
        ls $$DIR/*.c; \
      done)
OBJS = $(patsubst %.c,%.o,$(SRCS))

#$(warning "SRCS is $(SRCS)")
#$(warning "OBJS is $(OBJS)")

all:: lib bin

lib::
	@for DIR in $(LIB_DIRS);  do (cd $$DIR; $(MAKE) all) done
bin: lib libstdc.so
	@for DIR in $(BIN_DIRS);  do  (cd $$DIR; $(MAKE) all)  done

libstdc.so: lib $(OBJS)
	$(CC) -shared -Wl,-soname,$@ -o $@ $(OBJS) $(CFLAGS) -I ../include
	echo $(OBJS)
	mv $@ lib

.PHONY: clean
clean:
	- rm *.o *.so lib/*.so
	@for DIR in $(LIB_DIRS); do (cd $$DIR; $(MAKE) clean) done
	@for DIR in $(BIN_DIRS); do (cd $$DIR; $(MAKE) clean) done
