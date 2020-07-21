#include "Lista_Doble.h"

struct Doble * crear(int dato){
    struct Doble * nuevo=(struct Doble *)malloc(sizeof(struct Doble));
    if (nuevo == NULL){
        return NULL;
    }
    nuevo->dato=dato;
    nuevo->anterior=NULL;
    nuevo->siguiente=NULL;
    return nuevo;
}

struct Doble * insertar(struct Doble * lista, int dato){
    if (lista == NULL){
        return NULL;
    }

    struct Doble * nuevo=crear(dato);
    nuevo->siguiente=lista;
    lista->anterior=nuevo;

    return nuevo;
}

void mostrar(struct Doble * lista){
    while(lista != NULL){
        printf("%d,", lista->dato);
        lista=lista->siguiente;
    }
    printf("\n");
}

struct Doble * eliminar(struct Doble * lista, int dato) {
    struct Doble * aux=lista;

    while(lista->dato != dato){
        lista=lista->siguiente;
    }

    if (lista->anterior != NULL){
        lista->anterior->siguiente=lista->siguiente;
    } 
    else{
        lista - > siguiente - > anterior = NULL;
        aux = aux - > siguiente;
    }
    if (lista->siguiente != NULL) {
        lista->siguiente->anterior=lista->anterior;
    } 
    else{
        lista->anterior->siguiente=NULL;
    }
    free(lista);

    return aux;
}
