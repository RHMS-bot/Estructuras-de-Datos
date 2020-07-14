Vector.o:Vector.c Vector.h
	gcc -c Vector.c

main.o: main.c Vector.h
	gcc main.c -c

a.out:main.o Vector.o
	gcc main.o Vector.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Vector.o
