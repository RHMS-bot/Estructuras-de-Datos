#include <stdio.h>
#include <stdlib.h>



struct Circular {
	int dato;
	struct Circular * siguiente;
};

struct Circular * crear(int);
struct Circular * insertar(struct Circular*,int);
void mostrar(struct Circular *);
struct Circular* eliminar(struct Circular *,int);
