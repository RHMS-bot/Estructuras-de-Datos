#include <stdio.h>
#include <stdlib.h>
#include "Cola_prioridad_ec.h"

/*Cola de prioridad con espacio comun*/
/*Solo existen 5 prioridades*/
/*la prioridad 1 tiene mayor prioridad y 5 es de menor prioridad*/

void acomodar(struct Cola * cola){
    struct Cola * aux=cola;
    int auxdato=0;
    int auxprioridad=0;
    int tamanio=0;
    int j=0;
    int i=0;

    while(aux - > sig != NULL){
        aux=aux->sig;
        ++tamanio;
    }

    while(i < tamanio){
        aux=cola;
        while(j < tamanio){
            if (aux->sig != NULL && aux->prioridad > aux->sig->prioridad) {
                auxdato=aux->dato;
                auxprioridad=aux->prioridad;
                aux->dato=aux->sig->dato;
                aux->prioridad=aux->sig->prioridad;
                aux->sig->dato=auxdato;
                aux->sig->prioridad=auxprioridad;
            }
            aux=aux->sig;
            ++j;
        }
        j=0;
        ++i;
    }
}

struct Cola * crear(int dato, int prioridad){
    struct Cola * nuevo=NULL;
    nuevo=(struct Cola *)malloc(sizeof(struct Cola));

    if(nuevo == NULL){
        printf("\nNo hay memoria sufuciente");
        return NULL;
    }

    nuevo->sig=NULL;
    nuevo->dato=dato;
    nuevo->prioridad=prioridad;
}

struct Cola * encolar(struct Cola * cola, int dato, int prioridad){
    struct Cola * nuevo=NULL;
    struct Cola * aux=cola;
    while(aux->sig != NULL){
        aux=aux->sig;
    }
    nuevo=crear(dato, prioridad);
    aux->sig=nuevo;
    acomodar(cola);
    return cola;
}

void mostrar(struct Cola * cola){
    struct Cola * aux = cola;
    if(cola == NULL){
        printf("\nNo hay una cola que mostrar");
        return;
    }
    printf("\nDatos:");
    while(aux != NULL){
        printf("%d,", aux->dato);
        aux=aux->sig;
    }
    aux=cola;
    printf("\nPrioridades:");
    while(aux != NULL){
        printf("%d,", aux->prioridad);
        aux=aux->sig;
    }
}

struct Cola * desencolar(struct Cola * cola){
    if(cola == NULL){
        printf("\nNo hay una cola de la cual eliminar");
        return NULL;
    }
    struct Cola * aux=cola->sig;
    free(cola);
    return aux;
}
