#include "Pila_estatica.h"


int main(void){
	
	int pila[100];
	int tope=-1;
	int opc=0;
	int dato=0;
	printf("----------Pila estatica----------\n");
		do{
			printf("\nTeclea el numero de la operacion a realizar");
			printf("\n1.-Agregar\n2.-Mostrar\n3.-Eliminar\n4.-Salir\n");
			scanf("%d",&opc);
			switch(opc){
				case 1:
				printf("\nEscriba el dato que va a agregar a la pila\n");
				scanf("%d",&dato);
				tope=push(pila,dato,tope);
				break;
				case 2:
					mostrar(pila,tope);
				break;
				case 3:
				 tope=pop(pila,tope);
				break;
				case 4:
				 printf("\nEjecucion terminada");
				break;
				default:
					printf("\nescriba una opcion valida");
			}
		}
		while(opc != 4);
	
	return 0;
}
