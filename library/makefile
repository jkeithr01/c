hello: driver.o lib/libhello.a
	gcc -o hello -I${HOME}/code/cprog/library/include \
	-L${HOME}/code/cprog/library/lib driver.o -lhello

driver.o: driver.c
	gcc -c -O -I${HOME}/code/cprog/library/include driver.c

lib/libhello.a: hello.c
	gcc -c -O hello.c
	gcc -c -O goodbye.c
	ar rs libhello.a hello.o goodbye.o
	mkdir ${HOME}/code/cprog/library/lib
	mv libhello.a ${HOME}/code/cprog/library/lib/.

clean:
	rm -f hello *.c~ *.o *.a makefile~
	rm -rf ${HOME}/code/cprog/library/lib
