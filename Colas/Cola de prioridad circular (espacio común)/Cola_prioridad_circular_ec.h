#include <stdio.h>
#include <stdlib.h>
 
 struct Elementos{
   	 int dato;
   	 int prioridad;
   };

	struct cola{
	   struct Elementos elementos[10];
	   int frente;
	   int detras;
	};
	
	struct cola* crear(struct cola*,int,int);
	void acomodar(struct cola *);
	void encolar(struct cola *,int,int);
	void desencolar(struct cola *);
	void mostrar(struct cola*);
