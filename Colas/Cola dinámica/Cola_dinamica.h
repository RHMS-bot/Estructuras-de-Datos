#include <stdio.h>
#include <stdlib.h>


struct Cola{
	struct Cola * sig;
	int dato;
};

struct Cola * crear(int dato){
	struct Cola *nuevo=NULL;
	nuevo=(struct Cola *)malloc(sizeof(struct Cola));
	
	if(nuevo==NULL){
		printf("\nNo hay memoria sufuciente");
		return NULL;
	}
	
	nuevo->sig=NULL;
	nuevo->dato=dato;
}

struct Cola * encolar(struct Cola * cola,int dato){
    struct Cola * nuevo=NULL;
    struct Cola * aux=cola;
    while(aux->sig != NULL){
    	aux=aux->sig;
	}
	nuevo=crear(dato);
	aux->sig=nuevo;
	
	return cola;
}

void mostrar(struct Cola * cola){
	if(cola==NULL){
		printf("\nNo hay una cola que mostrar");
		return;
	}
	printf("\n");
	while(cola != NULL){
		printf("%d,",cola->dato);
		cola=cola->sig;
	}
}

struct Cola * desencolar(struct Cola * cola){
	if(cola==NULL){
		printf("\nNo hay una cola de la cual eliminar");
		return NULL;
	}
	struct Cola * aux=cola->sig;
	free(cola);
	return aux;
}
