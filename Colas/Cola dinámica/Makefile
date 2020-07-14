Cola_dinamica.o:Cola_dinamica.c Cola_dinamica.h
	gcc -c Cola_dinamica.c

main.o: main.c Cola_dinamica.h
	gcc main.c -c

a.out:main.o Cola_dinamica.o
	gcc main.o Cola_dinamica.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Cola_dinamica.o
