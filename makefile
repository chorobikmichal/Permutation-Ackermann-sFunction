all: file test

file: main.c ack.c carbon3.c newton.c newton2.c
	gcc -std=c99 main.c ack.c carbon3.c newton.c newton2.c -o run.

test:
	./run
