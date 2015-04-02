include Makefile.in

LIB_DIRS = assert ctype errno float locale math \
            setjmp signal stdio stdlib string time

BIN_DIRS = bin

all:: lib bin libstdc.so

lib::
	@for DIR in $(LIB_DIRS);  do (cd $$DIR; $(MAKE) all) done
bin::
	@for DIR in $(BIN_DIRS);  do  (cd $$DIR; $(MAKE) all)  done

libstdc.so: assert/*.o ctype/*.o errno/*.o float/*.o locale/*.o math/*.o \
      setjmp/*.o signal/*.o stdio/*.o stdlib/*.o string/*.o time/*.o
	$(CC) -shared -Wl,-soname,$@ -o $@  $^ $(CFLAGS) -I ../include
	mv $@ lib

.PHONY: clean cleanlib cleanbin
clean: cleanlib cleanbin
	- rm *.o *.so lib/*.so
cleanlib:
	@for DIR in $(LIB_DIRS); do (cd $$DIR; $(MAKE) clean) done

cleanbin:
	@for DIR in $(BIN_DIRS); do (cd $$DIR; $(MAKE) clean) done
