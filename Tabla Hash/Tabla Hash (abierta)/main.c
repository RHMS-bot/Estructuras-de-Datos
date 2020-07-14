#include "Tabla_Hash.h"

	int main(void){
		struct TablaHash * tabla= NULL;
		tabla=creartabla();
		int opc=0;
		int dato=0;
		printf("----------Tabla Hash----------\n");
		do{
			printf("\nTeclea el numero de la operacion a realizar");
			printf("\n1.-Agregar\n2.-Mostrar tabla\n3.-Eliminar\n4.-Buscar\n5.-Salir\n");
			scanf("%d",&opc);
			
			switch(opc){
			case 1:
			printf("\nTeclea el dato entero que vas a colocar en la tabla\n");
			scanf("%d",&dato);
			insertar(tabla,dato);
			break;
			case 2:
			mostrar(tabla);
			break;
			case 3:
			 printf("\nTeclea el dato entero que vas a eliminar de la tabla\n");
			 scanf("%d",&dato);
			 eliminar(tabla,dato);
			break;
			case 4:
			 printf("\nTeclea el dato entero que vas a buscar en la tabla\n");
			 scanf("%d",&dato);
			 buscar(tabla,dato);
			break;
			case 5:
			printf("\nEjecucion terminada");
			break;
			default:
				printf("Teclea un numero valido");
		   }	
		}
		while(opc != 5);
		
		
		return 0;
	}
