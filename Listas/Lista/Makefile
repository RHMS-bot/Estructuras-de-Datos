Lista.o:Lista.c Lista.h
	gcc -c Lista.c

main.o: main.c Lista.h
	gcc main.c -c

a.out:main.o Lista.o
	gcc main.o Lista.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Lista.o
