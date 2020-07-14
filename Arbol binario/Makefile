Arbol_binario.o:Arbol_binario.c Arbol_binario.h
	gcc -c Arbol_binario.c

main.o: main.c Arbol_binario.h
	gcc main.c -c

a.out:main.o Arbol_binario.o
	gcc main.o Arbol_binario.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Arbol_binario.o
