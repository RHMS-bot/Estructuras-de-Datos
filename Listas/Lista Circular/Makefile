Lista_Circular.o:Lista_Circular.c Lista_Circular.h
	gcc -c Lista_Circular.c

main.o: main.c Lista_Circular.h
	gcc main.c -c

a.out:main.o Lista_Circular.o
	gcc main.o Lista_Circular.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Lista_Circular.o
