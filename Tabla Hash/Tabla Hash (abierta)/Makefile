Tabla_Hash.o:Tabla_Hash.c Tabla_Hash.h
	gcc -c Vector.c

main.o: main.c Tabla_Hash.h
	gcc main.c -c

a.out:main.o Tabla_Hash.o
	gcc main.o Tabla_Hash.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Tabla_Hash.o
