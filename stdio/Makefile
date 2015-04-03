include ../Makefile.in

CFLAGS += -fPIC -g -c -Wall

all: lib

lib: libstdio.so

clearerr.o  :clearerr.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fclose.o    :fclose.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
feof.o      :feof.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
ferror.o    :ferror.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fflush.o    :fflush.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fgetc.o     :fgetc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fgetpos.o   :fgetpos.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fgets.o     :fgets.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fopen.o     :fopen.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fprintf.o   :fprintf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fputc.o     :fputc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fputs.o     :fputs.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fread.o     :fread.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
freopen.o   :freopen.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fscanf.o    :fscanf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fseek.o     :fseek.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fsetpos.o   :fsetpos.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
ftell.o     :ftell.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
fwrite.o    :fwrite.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
getc.o      :getc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
getchar.o   :getchar.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
gets.o      :gets.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
perror.o    :perror.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
printf.o    :printf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
putc.o      :putc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
putchar.o   :putchar.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
puts.o      :puts.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
remove.o    :remove.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
rename.o    :rename.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
rewind.o    :rewind.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
scanf.o     :scanf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
setbuf.o    :setbuf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
setvbuf.o   :setvbuf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
sprintf.o   :sprintf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
sscanf.o    :sscanf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
tmpfile.o   :tmpfile.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
tmpnam.o    :tmpnam.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
ungetc.o    :ungetc.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
vfprintf.o  :vfprintf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
vprintf.o   :vprintf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
vsprintf.o  :vsprintf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xfgpos.o    :xfgpos.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xfiles.o    :xfiles.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xfopen.o    :xfopen.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xfoprep.o   :xfoprep.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xfrprep.o   :xfrprep.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xfspos.o    :xfspos.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xfwprep.o   :xfwprep.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgenld.o    :xgenld.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgetfld.o   :xgetfld.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgetfloa.o  :xgetfloa.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xgetint.o   :xgetint.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xldtob.o    :xldtob.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xlitob.o    :xlitob.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xprintf.o   :xprintf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xputfld.o   :xputfld.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)
xscanf.o    :xscanf.c
	$(CC) $(CFLAGS) $^ $(LDFLAGS)

libstdio.so :clearerr.o fclose.o feof.o ferror.o \
             fflush.o fgetc.o fgetpos.o fgets.o \
             fopen.o fprintf.o fputc.o fputs.o fread.o \
             freopen.o fscanf.o fseek.o fsetpos.o ftell.o \
             fwrite.o getchar.o getc.o gets.o perror.o \
             printf.o putchar.o putc.o puts.o remove.o \
             rename.o rewind.o scanf.o setbuf.o setvbuf.o \
             sprintf.o sscanf.o tmpfile.o tmpnam.o ungetc.o \
             vfprintf.o vprintf.o vsprintf.o xfgpos.o xfiles.o \
             xfopen.o xfoprep.o xfrprep.o xfspos.o xfwprep.o \
             xgenld.o xgetfld.o xgetfloa.o xgetint.o xldtob.o  \
             xlitob.o xprintf.o xputfld.o xscanf.o ../errno/errno.o
	$(CC) -g -shared -Wl,-soname,$@ -o $@  $^ $(LDFLAGS)
	mv $@ ../lib/

.PHONY: clean
clean:
	- rm -fr *.o *.so
