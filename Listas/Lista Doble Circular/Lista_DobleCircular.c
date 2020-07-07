#include <stdio.h>
#include <stdlib.h>
#include "Lista_DobleCircular.h"

int main(void){
	int opc=0;
	int creada=0;
	int dato=0;
	struct DobleCircular *lista=NULL;
	printf("----------Lista Doble Circular----------\n");
	
	while(opc != 4){
	printf("Escoja una de las siguientes opciones:\n");
	printf("1.-Agregar\n2.-Mostrar\n3.-Eliminar\n4.-Salir\n");
	scanf("%d",&opc);
	if(opc==1){
		if(creada==0){
			printf("\nEscriba el dato que va a meter en la lista:\n ");
			scanf("%d",&dato);
			lista=crear(dato);
			if(lista ==NULL){
	        	printf("\nNo se pudo crear la lista\n");
		        return 1;
	        }
			creada=1;
		}
		else{
			printf("\nEscriba el dato que va a meter en la lista:\n ");
			scanf("%d",&dato);
			lista=insertar(lista,dato);
		}
	}
	if(opc==2){
		if(lista==NULL){
			printf("\nNO hay lista\n");
		}
		else{
		
		mostrar(lista);
	}
	}
	if(opc==3){
		if(lista==NULL){
			printf("\nNO hay lista\n");
		}
		else{
		
		printf("\nEscriba el dato que va a eliminar de la lista:\n ");
			scanf("%d",&dato);
			lista=eliminar(lista,dato);
		}
	}	
	if(opc<1 || opc>4){
		printf("Opcion no valida");
	}
}
	
	
	return 0;
}
