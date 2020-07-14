#include "Cola_prioridad_circular_ec.h"

int main(void){
			int priori=0;
			int opc=0;
			int creada=0;
			int dato=0;
			struct cola *Cola=NULL;
			printf("----------Cola de prioridad circular con espacio comun----------\n");
			
			while(opc != 4){
			printf("\nEscoja una de las siguientes opciones:\n");
			printf("1.-Agregar\n2.-Mostrar\n3.-Eliminar\n4.-Salir\n");
			scanf("%d",&opc);
			if(opc==1){
				if(creada==0){
					printf("\nEscriba el dato que va a encolar:\n");
					scanf("%d",&dato);
					printf("\nEscriba la prioridad del dato que va a encolar:\n");
					scanf("%d",&priori);
					if(priori<0 || priori>5)
					printf("\nSolo puede escribir una prioridad desde 1 hasta 5");
					else{
					Cola=crear(Cola,dato,priori);
					if(Cola ==NULL){
			        	printf("\nNo se pudo crear la cola\n");
				        return 0;
			        }
					creada=1;
				   }
				}
				else{
					printf("\nEscriba el dato que va a encolar:\n");
					scanf("%d",&dato);
					printf("\nEscriba la prioridad del dato que va a encolar:\n");
					scanf("%d",&priori);
					if(priori<0 || priori>5)
					printf("\nSolo puede escribir una prioridad desde 1 hasta 5");
					else
					encolar(Cola,dato,priori);
				}
			}
			if(opc==2){
				if(Cola==NULL)
					printf("\nNo hay una cola\n");
				else
				mostrar(Cola);
			}
			if(opc==3){
				if(Cola==NULL)
					printf("\nNo hay una cola\n");
				else
					desencolar(Cola);
			}	
			if(opc<1 || opc>4)
				printf("Opcion no valida");
			}
					
			return 0;
		}
