#include <stdio.h>
#include <stdlib.h>

struct Lista{
	int dato;
	struct Lista *siguiente;
};

struct Lista * crear(int dat);
struct Lista * insertar(struct Lista* lista,int dato);
void mostrar(struct Lista * lista);
struct Lista * invertir(struct Lista * lista);
struct Lista * eliminar(struct Lista * lista,int dato);
