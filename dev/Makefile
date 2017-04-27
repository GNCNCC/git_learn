taget = dev
src = dev.c
cflag = 
cflags = $(cflag)
cflags += -Wall #-DDEBUG

$(taget):$(src)
	gcc $^ -o $@ $(cflags)

clean:
	rm $(taget)
