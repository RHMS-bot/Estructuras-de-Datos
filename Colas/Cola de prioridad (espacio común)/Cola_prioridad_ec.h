#include <stdio.h>
#include <stdlib.h>


struct Cola{
	struct Cola * sig;
	int dato;
	int prioridad;
};

	void acomodar(struct Cola *);
	struct Cola * crear(int,int);
	struct Cola * encolar(struct Cola *,int,int);
	void mostrar(struct Cola *);
	struct Cola * desencolar(struct Cola *);
