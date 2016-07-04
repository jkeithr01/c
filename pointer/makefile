all: pointer1 pointer2 pointer3

pointer1: pointer1.o
	gcc -o pointer1 -L$(HOME)/code/c/pointer pointer1.o

pointer2: pointer2.o
	gcc -o pointer2 -L$(HOME)/code/c/pointer pointer2.o

pointer3: pointer3.o
	gcc -o pointer3 -L$(HOME)/code/c/pointer pointer3.o

pointer1.o: pointer1.c
	gcc -c -O pointer1.c

pointer2.o: pointer2.c
	gcc -c -O pointer2.c

pointer3.o: pointer3.c
	gcc -c -O pointer3.c

clean:
	rm -f *.o *.a pointer1 pointer2 pointer3
