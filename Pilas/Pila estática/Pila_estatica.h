#include <stdio.h>
#include <stdlib.h>

int push(int pila[],int dato,int tope){
	if(tope==99){
		printf("\n La pila esta llena, no puedes meter mas datos");
	}else{
	pila[++tope]=dato;
	return tope;
  }
}

void mostrar(int pila[],int tope){
	int i=0;
	while(i<=tope){
		printf("%d,",pila[i]);
		++i;
	}
	printf("\n");
}

int pop(int pila[],int tope){
	pila[tope]=0;
	tope=tope-1;
	
	return tope;
}
