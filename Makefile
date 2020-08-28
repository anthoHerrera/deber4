all: assigment4

assigment4: main.c
	gcc -g -Wall -o assigment4 main.c 

clean:
	rm assigment4 