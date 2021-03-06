#include "Tabla_Hash.h"

/*Medina Sosa Rafael Hayyim*/

int hash(int dato) {
  return (dato) % 100;
}

struct TablaHash * creartabla(){
  int i=0;
  struct TablaHash * nueva=NULL;
  nueva=(struct TablaHash*) malloc(sizeof(struct TablaHash));
	
  if (nueva == NULL) {
    return NULL;
  } 
  else {
    while (i <= 99){
      nueva - > datos[i] = NULL;
      ++i;
    }
    return nueva;
  }
}

struct Lista * insertar_lista(struct Lista * lista, int dato){
  struct Lista * nuevo=NULL;
  nuevo=(struct Lista*)malloc(sizeof(struct Lista));
  if (nuevo == NULL)
    return NULL;
  else {
    nuevo->dato=dato;
    nuevo->siguiente=lista;
    return nuevo;
  }
}

void insertar(struct TablaHash * tabla, int dato){
  struct Lista * aux=NULL;
  int indice;
  indice=hash(dato);
  aux=tabla->datos[indice];
  tabla->datos[indice]=insertar_lista(aux, dato);

  if (tabla->datos[indice] == NULL)
    printf("No se pudo crear la lista");
}

void buscar(struct TablaHash * tabla, int dato){
  int indice;
  indice=hash(dato);
  struct Lista * aux=tabla->datos[indice];

  if (aux == NULL){
    printf("No existe el dato");
  } 
  else {
    while (aux != NULL && dato != aux->dato){
      aux=aux->siguiente;
    }
    if (aux == NULL)
      printf("\nEl dato %d no existe en la tabla", dato);
    else
      printf("\nEl dato %d si existe en la tabla", dato);
  }
}

struct Lista * eliminar_lista(struct Lista * lista, int dato){
  struct Lista * aux=lista;
  struct Lista * aux2=lista;
  int posel=0;
  int i=1;

  while (posel == 0 && aux != NULL){
    if (aux->dato == dato){
      posel = i;
    }
    aux=aux->siguiente;
    ++i;
  }

  if (posel == 0){
    printf("\nEse dato no existe en la tabla\n");
    return aux2;
  } 
  else{
    i = 1;
    if (posel == 1){
      aux=lista->siguiente;
      free(lista);
      return aux;
    } 
    else{

      while (aux2 != NULL){

        if (i == (posel-1)){

          if (aux2->siguiente->siguiente == NULL || aux2->siguiente == NULL){
            aux=NULL;
          } else
            aux=aux2->siguiente->siguiente;

          free(aux2->siguiente);
          aux2->siguiente=aux;
          return lista;
        }
        aux2=aux->siguiente;
        ++i;
      }

    }
  }
}

void eliminar(struct TablaHash * tabla, int dato){
  int indice = hash(dato);

  tabla->datos[indice]=eliminar_lista(tabla->datos[indice], dato);
}

void mostrar(struct TablaHash * tabla){
  int i=0;
  int existe=0;
  struct Lista * aux=NULL;

  if (tabla == NULL){
    printf("\nNo hay una tabla que mostar\n");
  } 
   else {
    printf("\nTabla:\n");
    while (i <= 99){
      aux = tabla->datos[i];
      while (aux != NULL) {
        printf("%d,", aux->dato);
        aux=aux->siguiente;
      }
      if (tabla->datos[i] != NULL){
        printf("\n");
        existe = 1;
      }
      ++i;
    }
    if (existe == 0)
      printf("\nNo hay una tabla que mostar\n");
  }
}

