#include <stdio.h>
#include <stdlib.h>


int insertar(int pila[],int dato,int tope){
	pila[++tope]=dato;
	return tope;
}

void mostrar(int pila[],int tope){
	int i=0;
	while(i<=tope){
		printf("%d,",pila[i]);
		++i;
	}
	printf("\n");
}

int eliminar(int pila[],int tope){
	pila[tope]=NULL;
	tope=tope-1;
	
	return tope;
}


int main(void){
	
	int pila[100];
	int tope=-1;
	
	tope=insertar(pila,2,tope);
	tope=insertar(pila,2,tope);
	tope=insertar(pila,3,tope);
	tope=insertar(pila,4,tope);
	mostrar(pila,tope);
	
	tope=eliminar(pila,tope);
	mostrar(pila,tope);
	
	return 0;
}
