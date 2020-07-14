Cola_prioridad_circular_ec.o:Cola_prioridad_circular_ec.c Cola_prioridad_circular_ec.h
	gcc -c Cola_prioridad_circular_ec.c

main.o: main.c Cola_prioridad_circular_ec.h
	gcc main.c -c

a.out:main.o Cola_prioridad_circular_ec.o
	gcc main.o Cola_prioridad_circular_ec.o

run:a.out
	./a.out

clean:
	rm -f a.out main.o Cola_prioridad_circular_ec.o
