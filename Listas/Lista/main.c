#include "Lista.h"

int main(void){
	int opc=0;
	int creada=0;
	int dato=0;
	struct Lista *milista=NULL;
	printf("----------Listas----------\n");
	
	while(opc != 5){
	printf("Escoja una de las siguientes opciones:\n");
	printf("1.-Agregar\n2.-Mostrar\n3.-Eliminar\n4.-Invertir\n5.-Salir\n");
	scanf("%d",&opc);
	if(opc==1){
		if(creada==0){
			printf("\nEscriba el dato que va a meter en la lista:\n ");
			scanf("%d",&dato);
			milista=crear(dato);
			if(milista ==NULL){
	        	printf("\nNo se pudo crear la lista\n");
		        return 1;
	        }
			creada=1;
		}
		else{
			printf("\nEscriba el dato que va a meter en la lista:\n ");
			scanf("%d",&dato);
			milista=insertar(milista,dato);
		}
	}
	if(opc==2){
		if(milista==NULL){
			printf("\nNO hay lista\n");
		}
		else{
		
		mostrar(milista);
	}
	}
	if(opc==3){
		if(milista==NULL){
			printf("\nNO hay lista\n");
		}
		else{
		
		printf("\nEscriba el dato que va a eliminar de la lista:\n ");
			scanf("%d",&dato);
			milista=eliminar(milista,dato);
		}
	}
	if(opc==4){
		if(milista==NULL){
			printf("\nNO hay lista\n");
		}
		else{
		
		milista=invertir(milista);
		mostrar(milista);
	}
	}	
	if(opc<1 || opc>5){
		printf("Opcion no valida");
	}
}
	
	
	return 0;
}
