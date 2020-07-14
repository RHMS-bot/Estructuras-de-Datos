Cola_Prioridad.o:Cola_Prioridad.c Cola_Prioridad.h
	gcc -c Cola_Prioridad.c

main.o: main.c Cola_Prioridad.h
	gcc main.c -c

a.out:main.o Cola_Prioridad.o
	gcc main.o Cola_Prioridad.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Cola_Prioridad.o
