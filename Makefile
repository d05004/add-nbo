#Makefile
all: add-nbo

add-nbo: getValue.o main.o
		gcc -o add-nbo getValue.o main.o
main.o: getValue.h main.c

getValue.o: getValue.h getValue.c

clean:
		rm -f add-nbo
		rm -f *.o
