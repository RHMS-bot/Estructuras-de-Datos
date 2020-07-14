Lista_DobleCircular.o:Lista_DobleCircular.c Lista_DobleCircular.h
	gcc -c Lista_DobleCircular.c

main.o: main.c Lista_DobleCircular.h
	gcc main.c -c

a.out:main.o Lista_DobleCircular.o
	gcc main.o Lista_DobleCircular.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Lista_DobleCircular.o
