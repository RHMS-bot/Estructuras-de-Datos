#include "Cola_dinamica.h"

int main(void){
	struct Cola * cola=NULL;
	int opc=0;
	int dato=0;
	printf("----------Cola dinamica----------\n");
	
	while(opc != 4){
	printf("\nEscoja una de las siguientes opciones:\n");
	printf("1.-Agregar\n2.-Mostrar\n3.-Eliminar\n4.-Salir\n");
	scanf("%d",&opc);
	if(opc==1){
		if(cola==NULL){
			printf("\nEscriba el dato que va a meter en la cola:\n");
			scanf("%d",&dato);
			cola=crear(dato);
		}
		else{
			printf("\nEscriba el dato que va a meter en la cola:\n");
			scanf("%d",&dato);
			cola=encolar(cola,dato);
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
