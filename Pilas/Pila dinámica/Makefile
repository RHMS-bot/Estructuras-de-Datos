Pila_dinamica.o:Pila_dinamica.c Pila_dinamica.h
	gcc -c Pila_dinamica.c

main.o: main.c Pila_dinamica.h
	gcc main.c -c

a.out:main.o Pila_dinamica.o
	gcc main.o Pila_dinamica.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Pila_dinamica.o
