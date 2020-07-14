#include "Cola_Prioridad.h"	

int main(void){
			int opc=0;
			int priori=0;
			int dato=0;
		    struct ColaPrioridad Cola[5];
		    crear(Cola);
		    
		    printf("----------Cola de prioridad------------\n");
		    do{
		    	printf("\nEscoja una de las siguientes opciones:\n");
				printf("1.-Encolar\n2.-Mostrar\n3.-Desencolar\n4.-Salir\n");
				scanf("%d",&opc);
		    	
		    	switch(opc){
		    		case 1:
		    		printf("\nEscriba la prioridad del dato a encolar\n");
		    		scanf("%d",&priori);
		    		printf("\nEscriba el elemento que va a encolar\n");
		    		scanf("%d",&dato);
		    		encolar(Cola,dato,priori);
		    		break;
		    		case 2:
		    		mostrar(Cola);
		    		break;
		    		case 3:
		    		desencolar(Cola);
					break;
					case 4:
					 printf("\nEjecucion terminada");
					 printf("\n");
					break;
					default:
		    		printf("\nEscoja una opcion valida");
				}
			}
			while(opc !=4);
			
		   return 0;
		}


