#include <stdio.h>
#include <stdlib.h>

struct Pila{
	struct Pila * sig;
	int dato;
};

struct Pila* crear(int dato){
	struct Pila * nuevo=NULL;
	
	nuevo=(struct Pila *)malloc(sizeof(struct Pila));
	
	if(nuevo==NULL){
		printf("\nNo hay memoria sufuciente");
		return NULL;
	}
	nuevo->sig=NULL;
	nuevo->dato=dato;
	
	return nuevo;
}

struct Pila* push(struct Pila * pila,int dato){
	struct Pila * nuevo=NULL;
	nuevo=crear(dato);
	nuevo->sig=pila;
	
	return nuevo;
}

void mostrar(struct Pila * pila){
	if(pila==NULL){
		printf("\nNo hay una pila que mostrar");
		return;
	}
	while(pila != NULL){
		printf("\n");
		printf("%d,",pila->dato);
		pila=pila->sig;
	}
	printf("\n");
}

struct Pila * pop(struct Pila * pila){
	if(pila==NULL){
		printf("\nNo hay una pila de la cual eliminar");
		return NULL;
	}
	struct Pila * aux=pila->sig;
	free(pila);
	return aux;
}
