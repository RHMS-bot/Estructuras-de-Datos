#include <stdio.h>
#include <stdlib.h>

struct Pila{
	struct Pila * sig;
	int dato;
};

struct Pila* crear(int);
struct Pila* push(struct Pila *,int);
void mostrar(struct Pila *);
struct Pila * pop(struct Pila *);
