#include <stdio.h>
#include <stdlib.h>

struct DobleCircular {
	int dato;
	struct DobleCircular * siguiente;
	struct DobleCircular * anterior;
};

struct DobleCircular * crear(int);
struct DobleCircular * insertar(struct DobleCircular*,int);
void mostrar(struct DobleCircular *);
struct DobleCircular* eliminar(struct DobleCircular *,int);
