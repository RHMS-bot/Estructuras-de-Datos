#include <stdio.h>
#include <stdlib.h>
#include "Pila_dinamica.h"


int main(void){
	struct Pila * pila=NULL;
	int opc=0;
	int dato=0;
	printf("----------Pila dinamica----------\n");
	
	while(opc != 4){
	printf("\nEscoja una de las siguientes opciones:\n");
	printf("1.-Agregar\n2.-Mostrar\n3.-Eliminar\n4.-Salir\n");
	scanf("%d",&opc);
	if(opc==1){
		if(pila==NULL){
			printf("\nEscriba el dato que va a meter en la pila:\n");
			scanf("%d",&dato);
			pila=crear(dato);
		}
		else{
			printf("\nEscriba el dato que va a meter en la pila:\n");
			scanf("%d",&dato);
			pila=push(pila,dato);
		}
	}
	if(opc==2)
		mostrar(pila);
	if(opc==3)
	   pila=pop(pila);
	if(opc<1 || opc>4){
		printf("Opcion no valida");
	}
}
	
	return 0;
}
