#include "Cola_circular.h"

int main(void){
	int opc=0;
	int creada=0;
	int dato=0;
	struct cola *Cola=NULL;
	printf("----------Cola circular----------\n");
	
	while(opc != 4){
	printf("\nEscoja una de las siguientes opciones:\n");
	printf("1.-Agregar\n2.-Mostrar\n3.-Eliminar\n4.-Salir\n");
	scanf("%d",&opc);
	if(opc==1){
		if(creada==0){
			printf("\nEscriba el dato que va a encolar:\n ");
			scanf("%d",&dato);
			Cola=crear(Cola,dato);
			if(Cola ==NULL){
	        	printf("\nNo se pudo crear la cola\n");
		        return 1;
	        }
			creada=1;
		}
		else{
			printf("\nEscriba el dato que va a encolar:\n ");
			scanf("%d",&dato);
			agregar(Cola,dato);
		}
	}
	if(opc==2){
		if(Cola==NULL){
			printf("\nNO hay una cola\n");
		}
		else{
		mostrar(Cola);
	}
	}
	if(opc==3){
		if(Cola==NULL){
			printf("\nNO hay una cola\n");
		}
		else{
			eliminar(Cola);
		}
	}	
	if(opc<1 || opc>4){
		printf("Opcion no valida");
	}
}
	
	
	return 0;
	}
