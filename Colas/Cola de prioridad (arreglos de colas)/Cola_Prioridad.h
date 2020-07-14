#include <stdio.h>
#include <stdlib.h>

        /*Se utilizan 5 prioridades, cada prioridad tiene una cola*/
        /*Mayor prioridad 1*/
	 typedef struct ColaPrioridad{
		   int elementos[100];
		   int frente;
		   int detras;
		}ColaPrioridad;
		
		void crear(ColaPrioridad *);
		void encolar(ColaPrioridad *,int,int);
		void desencolar(ColaPrioridad *);
		void mostrar(ColaPrioridad *);
