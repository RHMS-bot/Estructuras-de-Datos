#include <stdio.h>
#include <stdlib.h>


struct Lista{
	int dato;
	struct Lista *siguiente;
};

struct Lista * crear(int dat){
	struct Lista *nuevo=NULL;
	nuevo=(struct Lista *)malloc(sizeof(struct Lista));
	if(nuevo == NULL){
		return NULL;
	}
	else{
		
		nuevo->dato=dat;
		nuevo->siguiente=NULL;
		
		return nuevo;
    }
}

struct Lista * insertar(struct Lista* lista,int dato){
	struct Lista *nuevo= crear(dato);
		nuevo->siguiente=lista;
	return nuevo;
}


void mostrar(struct Lista * lista){
	while(lista != NULL){
		printf("%d, ",lista->dato);
		lista=lista->siguiente;
	}
	printf("\n");
}

struct Lista * invertir(struct Lista * lista){
	struct Lista * nuevo=NULL;
	while(lista!=NULL){
		nuevo=insertar(nuevo,lista->dato);
		lista=lista->siguiente;
	}
	
	return nuevo;
}

struct Lista * eliminar(struct Lista * lista,int dato){
	struct Lista * aux=lista;
	struct Lista *copia=lista;
	int eliminado=0;
	int posel=0;
	int i=1;
	
	while(posel==0 || aux!=NULL){
		if(dato==aux->dato){
			posel=i;
		}
		aux=aux->siguiente;
		++i;
	}
	
	
	if(posel==0){
		printf("\nEse dato no existe en la lista\n");
		return copia;
	}
	else{
		i=1;
		if(posel==1){
			aux=lista->siguiente;
			free(lista);
			return aux;
		}
		else{
		
		while(eliminado==0 || lista!=NULL){
			
			if(i==(posel-1)){
				
				if(lista->siguiente->siguiente==NULL || lista->siguiente==NULL){
					aux=NULL;
				}
				else
				aux=lista->siguiente->siguiente;
				
				free(lista->siguiente);
				lista->siguiente=aux;
				return copia;
				eliminado=1;	
			}
			lista=lista->siguiente;
			++i;
	   }
	   
      }
	}
	
}

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
	if(opc<1 || opc>4){
		printf("Opcion no valida");
	}
}
	
	
	return 0;
}



