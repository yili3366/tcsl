SRC = clearerr.c fclose.c feof.c ferror.c fflush.c fgetc.c fgetpos.c \
      fgets.c fopen.c fprintf.c fputc.c fputs.c fread.c freopen.c \
      fscanf.c fseek.c fsetpos.c ftell.c fwrite.c getc.c getchar.c \
      gets.c perror.c printf.c putc.c putchar.c puts.c remove.c rename.c \
      rewind.c scanf.c setbuf.c setvbuf.c sprintf.c sscanf.c tmpfile.c \
      tmpnam.c  ungetc.c vfprintf.c vprintf.c vsprintf.c \
      xfgpos.c xfiles.c xfopen.c xfoprep.c xfrprep.c xfspos.c xfwprep.c \
      xgenld.c xgetfld.c xgetfloa.c xgetint.c xldtob.c xlitob.c xprintf.c \
      xputfld.c xscanf.c ../2/xctype.c ../2/xtolower.c ../3/errno.c  \
      ../4/xfloat.c ../6/localeco.c ../6/xstate.c ../7/xdnorm.c ../7/xldunsca.c \
      ../7/xdtento.c ../7/xdscale.c ../7/xdunscal.c ../13/xstoul.c \
      ../13/xmbtowc.c ../13/xstod.c ../14/strerror.c
OBJS = tstdio1 tstdio2
LDFLAGS = -I ../include

all: $(OBJS)

tstdio1: tstdio1 $(SRC)
	$(CC) $(LDFLAGS) -o $@ $^

tstdio2: tstdio2 $(SRC)
	$(CC) $(LDFLAGS) -o $@ $^

.PHONY: clean
clean:
	rm $(OBJS)
