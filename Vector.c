#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int hayespacio(int capacidad,int espacio){
	if(espacio<=capacidad && espacio>0){
		return 1;
	}
	else 
	return 0;
}

void guardar(int *arr, int i){
	*(arr+i)=i+1;
}

int* reservarmemoria(int *arr,int capacidad){
	int j=0;
	int *arr2;
	arr2=(int *)malloc(capacidad*2*sizeof(int));
	
	for(j;j<capacidad;j++){
		*(arr2+j)=*(arr+j);
		
	 }
	free(arr);
	return (int *)arr2;
	free(arr2);
}

void imprimir(int *arr,int i){
	int j=0;
	for(j;j<=i;j++){
	  printf("%d ",*(arr+j));
     }
     printf("\n");
   }


void llenar(int n){
 int *arr,espacio,capacidad,ocupados;
 arr=(int *)malloc(sizeof(int));
 capacidad=1;
 espacio=1;
 ocupados=0;
 int i=0;
 
  for(i;i<n;i++){
   
   if(hayespacio(capacidad,espacio)==1){
   	guardar(arr,i);
   	
   	espacio--;
   	ocupados++;
   	
   	imprimir(arr,i);
}
   else{
    arr=(int *)reservarmemoria(arr,capacidad);
    capacidad=capacidad*2;
    espacio=capacidad-ocupados;
   	guardar(arr,i);
   	espacio--;
   	ocupados++;
   	imprimir(arr,i);
   }
 
   }
}


int main(){
 int n;
 printf("Escriba el valor hasta el que llegara la secuencia\n");
 scanf("%d",&n);
 printf("\n");
  if(n>0 && n<=pow(10,8)){
   llenar(n);
  }
  else{
  printf("\n Valor ingresado no válido");
 }
 return 0;
}
