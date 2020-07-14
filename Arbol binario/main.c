#include "Arbol_binario.h"

int main(void){
	struct Nodo* raiz=NULL;
	int opc,dato;
	
	printf("\n------Arbol binario------");
	
	do{
	 printf("\nEscoge una opcion");
	 printf("\n1.-Insertar un dato\n2.-Mostrar recorrido en pre orden\n3.-Mostrar recorrido en inorden\n4.-Mostrar recorrido en post orden\n5.-Buscar un dato\n6.-Eliminar un dato\n7.-Salir\n");
	 scanf(" %d",&opc);
		switch(opc){
			case 1:
				printf("\nIngrese el valor a insertar\n");
				scanf("%d",&dato);
				raiz=insertar(raiz,dato);
			break;
			case 2:
			    mostrar_2(raiz);
			break;
			case 3:
				mostrar_1(raiz);
			break;
			case 4:
			    mostrar_3(raiz);
			break;
			case 5:
			    printf("\nIngrese el valor a buscar\n");
				scanf("%d",&dato);
				buscar(raiz,dato);
			break;
			case 6:
				printf("\nIngrese el valor a eliminar\n");
				scanf("%d",&dato);
			    raiz=eliminar(raiz,dato);
			break;
			case 7:
				printf("\nEjecucion terminada");
			break;
			default:
				printf("\nEscoge una opcion valida");
		}
	}while(opc != 7);
	
	return 0;
}


