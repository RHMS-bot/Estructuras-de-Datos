#include "Cola_circular.h"

struct cola * crear(struct cola * Cola, int dato){
    struct cola * nuevo=(struct cola *)malloc(sizeof(struct cola));
    if(nuevo == NULL){
        printf("\nNo hay memoria");
    } 
    else {
        nuevo->frente=0;
        nuevo->detras=-1;
        nuevo->detras=++nuevo->detras % 100;
        nuevo->elementos[nuevo->detras]=dato;
    }
    return nuevo;
}

void agregar(struct cola * Cola, int elemento){
    if(Cola->frente - 1 == Cola->detras || Cola->frente == 0 && Cola->detras == 99 || Cola->frente == 99 && Cola->detras == 0)
        printf("\nLa cola está llena");
    else{
        Cola->detras=++Cola->detras % 100;
        Cola->elementos[Cola->detras]=elemento;
    }
}

void eliminar(struct cola * Cola){
    if (Cola->detras == -1)
        printf("\n No hay elementos en la cola");
    else{
        Cola->elementos[Cola->frente]=0;
        if(Cola->frente+1 % 100 == Cola->detras+1 % 100){
            Cola->detras=-1;
        } else
            Cola->frente=++Cola->frente % 100;
    }
}

void mostrar(struct cola * Cola){
  int i=0;
    if (Cola->detras == -1)
        printf("\n No hay elementos en la cola");
    else{
        if(Cola->frente > Cola->detras){
            i=Cola->frente;

            while (i <= 99){
                printf("%d,",Cola->elementos[i]);
                ++i;
            }

            i=0;
            while(i <= Cola->detras){
                printf("%d,", Cola->elementos[i]);
                ++i;
            }
            printf("\n");
        } 
	else
         if(Cola->frente <= Cola->detras){
            i=Cola->frente;

            while(i <= Cola->detras){
                printf("%d,", Cola->elementos[i]);
                ++i;
            }
            printf("\n");
        }
    }
}
