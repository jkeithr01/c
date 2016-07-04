main: main.o libf.a
	gcc -o main -L$(HOME)/code/cprog/libtest main.o -lf

main.o: main.c
	gcc -c -O main.c

libf.a: f.o
	ar rs libf.a f.o

f.o: f.c
	gcc -c -O f.c

clean:
	rm -f *.o *.a main
