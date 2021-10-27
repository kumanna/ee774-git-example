all: main

main: main.c
	$(CC) -o main main.c -lm

.PHONY: clean

clean:
	$(RM) main
