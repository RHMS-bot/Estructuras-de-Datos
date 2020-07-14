Cola_circular.o:Cola_circular.c Cola_circular.h
	gcc -c Cola_circular.c

main.o: main.c Cola_circular.h
	gcc main.c -c

a.out:main.o Cola_circular.o
	gcc main.o Cola_circular.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Cola_circular.o
