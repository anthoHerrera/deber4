all: assigment4

assigment4: assigment4.c
	gcc -g -Wall -o assigment4 assigment4.c 

clean:
	rm assigment4 