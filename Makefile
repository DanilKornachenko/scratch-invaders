files := main.c invaders.c

all: run

run:
	gcc $(files) -lncurses
	./a.out

clean:
	rm a.out
