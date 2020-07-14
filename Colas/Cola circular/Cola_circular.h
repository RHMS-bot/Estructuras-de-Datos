#include <stdio.h>
#include <stdlib.h>

	struct cola{
	   int elementos[100];
	   int frente;
	   int detras;
	};
	
	struct cola* crear(struct cola*,int);
	void agregar(struct cola *,int);
	void eliminar(struct cola *);
	void mostrar(struct cola*);
