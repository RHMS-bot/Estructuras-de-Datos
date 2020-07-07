#include <stdio.h>
#include <stdlib.h>
#include "Cola_prioridad_ec.h"
/*Cola de prioridad con espacio comun*/
/*Solo existen 5 prioridades*/
/*la prioridad 1 tiene mayor prioridad y 5 es de menor prioridad*/


int main(void){
	struct Cola * cola=NULL;
	int opc=0;
	int dato=0;
	int priori=0;
	printf("----------Cola de prioridad(espacio comun)----------\n");
	
	while(opc != 4){
	printf("\nEscoja una de las siguientes opciones:\n");
	printf("1.-Agregar\n2.-Mostrar\n3.-Eliminar\n4.-Salir\n");
	scanf("%d",&opc);
	if(opc==1){
		if(cola==NULL){
			printf("\nEscriba el dato que va a meter en la cola:\n");
			scanf("%d",&dato);
			printf("\nEscriba la prioridad del dato que va a meter en la cola:\n");
			scanf("%d",&priori);
			if(priori>0 && priori<6)
			cola=crear(dato,priori);
			else
			printf("\nSolo se aceptan prioridades de 1 a 5");
		}
		else{
			printf("\nEscriba el dato que va a meter en la cola:\n");
			scanf("%d",&dato);
			printf("\nEscriba la prioridad del dato que va a meter en la cola:\n");
			scanf("%d",&priori);
			if(priori>0 && priori<6)
			cola=encolar(cola,dato,priori);
			else
			printf("\nSolo se aceptan prioridades de 1 a 5");
		}
	}
	if(opc==2)
		mostrar(cola);
	if(opc==3)
	   cola=desencolar(cola);
	if(opc<1 || opc>4){
		printf("Opcion no valida");
	}
}
	
	return 0;
}
