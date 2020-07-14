#include <stdio.h>
#include <stdlib.h>


struct Cola{
	struct Cola * sig;
	int dato;
};

struct Cola * crear(int);
struct Cola * encolar(struct Cola *,int);
void mostrar(struct Cola *);
struct Cola * desencolar(struct Cola *);
