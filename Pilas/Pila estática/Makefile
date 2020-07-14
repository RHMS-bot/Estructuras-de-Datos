Pila_estatica.o:Pila_estatica.c Pila_estatica.h
	gcc -c Pila_estatica.c

main.o: main.c Pila_estatica.h
	gcc main.c -c

a.out:main.o Pila_estatica.o
	gcc main.o Pila_estatica.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Pila_estatica.o
