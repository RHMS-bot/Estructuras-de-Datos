#include <stdio.h>
#include <stdlib.h>

struct Vector{
	int *datos;
	int capacidad;
	int espacio;
	int ocupados;
};

struct Vector * crear(struct Vector *);
int * reservarmemoria(struct Vector *);
int *reducirmemoria(struct Vector *);
struct Vector * insertar(struct Vector *,int);
void mostrar(struct Vector *);
int buscar(struct Vector *,int);
struct Vector * eliminar(struct Vector *,int);
