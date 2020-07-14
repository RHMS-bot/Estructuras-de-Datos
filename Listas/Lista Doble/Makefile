Lista_Doble.o:Lista_Doble.c Lista_Doble.h
	gcc -c Lista_Doble.c

main.o: main.c Lista_Doble.h
	gcc main.c -c

a.out:main.o Lista_Doble.o
	gcc main.o Lista_Doble.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Lista_Doble.o
