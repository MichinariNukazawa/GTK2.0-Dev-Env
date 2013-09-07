obj=hellogtk
PKG_CONFIG=pkg-config

all: $(obj).exe

$(obj).exe: $(obj).c makefile
	gcc $(FLAGS) -o $(obj).exe $(obj).c $(shell $(PKG_CONFIG) --libs --cflags gtk+-2.0)


run: $(obj).exe
	./$(obj).exe
	

clean:
	rm $(obj).exe

