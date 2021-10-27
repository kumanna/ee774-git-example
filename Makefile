all: main

main: main.c
	echo COMPILING
	$(CC) -o main main.c -lm

.PHONY: clean

clean:
	$(RM) main
