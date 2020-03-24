#include <stdio.h>



int hanoi(int n,int torrei, int torrem,int torref){  
	int pasos=0;
	int p1=0;
	int p2=0;
	
	if(n==1){
		printf("\nMover de la torre %d a la torre %d",torrei,torref);
		++pasos;
	}
	else{
	  p1=hanoi(n-1,torrei,torref,torrem);
	  ++pasos;
	  printf("\nMover de la torre %d a la torre %d",torrei,torref);
	  p2=hanoi(n-1,torrem,torrei,torref);
	  pasos=pasos+p1+p2;
    }
    
    return pasos;
}

int main(void){
	int n=0;
	int pasos=0;
	printf("Escribe el numero de discos \n");
	scanf("%d",&n);
	pasos=hanoi(n,1,2,3);
	printf("\npasos: %d",pasos);
	
	return 0;
}




