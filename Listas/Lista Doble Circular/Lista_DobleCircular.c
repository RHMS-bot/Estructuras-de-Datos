#include "Lista_DobleCircular.h"

struct DobleCircular * crear(int dato){
	struct DobleCircular * nuevo=(struct DobleCircular*) malloc(sizeof(struct DobleCircular));
	if(nuevo==NULL){
		return NULL;
	}	
	nuevo->dato=dato;
	nuevo->siguiente=nuevo;
	nuevo->anterior=nuevo;
	return nuevo;
}

struct DobleCircular * insertar(struct DobleCircular* lista,int dato){
	if(lista==NULL){
		return NULL;
	}
	struct DobleCircular * aux=lista;
	while(lista->siguiente !=aux && lista->siguiente!=NULL){
		lista=lista->siguiente;
		
	}
	struct DobleCircular *nuevo = crear(dato);
	
	lista->siguiente=nuevo;
	nuevo->siguiente=aux;
	nuevo->anterior=lista;
	aux->anterior=nuevo;
	
    return aux;
}

void mostrar(struct DobleCircular * lista){
	struct DobleCircular * aux=lista;
	do{
		printf("%d,",lista->dato);
		lista=lista->siguiente;
	}
	while(lista != aux && lista !=NULL);
	printf("\n");
}

struct DobleCircular* eliminar(struct DobleCircular * lista, int dato){
	struct DobleCircular * aux=lista;
	
	while(lista->dato != dato){
		lista=lista->siguiente;
	} 
	if(lista == aux){
		aux=aux->siguiente;
	}
	lista->anterior->siguiente=lista->siguiente;
	lista->siguiente->anterior=lista->anterior;
	
	free(lista);
	
	return aux;
}
