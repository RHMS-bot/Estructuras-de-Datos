#include <stdio.h>
#include <stdlib.h>

struct Nodo{
	 int dato;
	 struct Nodo * derecha;
	 struct Nodo * izquierda;
	};

struct Nodo *insertar (struct Nodo *,int);
void buscar(struct Nodo*,int);
void mostrar_1(struct Nodo *);
void mostrar_2(struct Nodo *);
void mostrar_3(struct Nodo *);
struct Nodo * eliminar(struct Nodo *,int);
