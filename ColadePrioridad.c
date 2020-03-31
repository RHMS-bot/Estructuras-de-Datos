	//Medina Sosa Rafael Hayyim 
	#include <stdio.h>
	#include <stdlib.h>
	
	//Se utilizan 5 prioridades, cada prioridad tiene una cola
	typedef	struct ColaPrioridad{
		   int elementos[100];
		   int frente;
		   int detras;
		}ColaPrioridad;
		
		//funcion que crea todas las colas de prioridad
		void crear(ColaPrioridad *Cola){
			int j=0;
			while(j<5){
				Cola[j].frente=0;
				Cola[j].detras=-1;
				++j;
			 }
			}
		
		//Añade elementos a la cola con la prioridad recibida
		void encolar(ColaPrioridad *Cola,int elemento,int prioridad){
			if (Cola[prioridad-1].frente !=0 && Cola[prioridad-1].frente-1==Cola[prioridad-1].detras || Cola[prioridad-1].frente==0 && Cola[prioridad-1].detras==99 || Cola[prioridad-1].frente==99 && Cola[prioridad-1].detras==0)
		        printf("\nLa cola está llena");
		    else{
			    Cola[prioridad-1].detras=++Cola[prioridad-1].detras % 100;
		        Cola[prioridad-1].elementos[Cola[prioridad-1].detras]=elemento;
		    }
		}
		
		//Elimina elementos a la cola con la prioridad recibida
		void desencolar(ColaPrioridad *Cola, int prioridad){
			if (Cola[prioridad-1].detras ==-1)
		        printf("\nNo hay elementos en la cola");
		    else{
			 Cola[prioridad-1].elementos[Cola[prioridad-1].frente]=0;
			 if(Cola[prioridad-1].frente+1 % 100 == Cola[prioridad-1].detras+1 % 100){
			 	Cola[prioridad-1].frente=0;
			 	Cola[prioridad-1].detras=-1;
			 }
			 else
			 Cola[prioridad-1].frente=++Cola[prioridad-1].frente % 100;
		    }
		}	
		
		//Muestra los elementos de todas las colas
		void mostrar(ColaPrioridad *Cola){
		    	int j=0;
		    	
			    	while(j<5){
			    	if (Cola[j].detras==-1 && Cola[j].frente==0)
			        printf("\nNo hay elementos en la cola %d \n",j+1);
			        else{
			    	printf("\nPrioridad %d: ",j+1);
					int i=Cola[j].frente;
				
				if(Cola[j].frente > Cola[j].detras){
						
				    while(i<=99){
				    	printf("%d,",Cola[j].elementos[i]);
				    	++i;
					 }
					 
					 i=0;
					 while(i<=Cola[j].detras){
					 		printf("%d,",Cola[j].elementos[i]);
				    	++i;
					 }
				     	printf("\n");	
					}
					else 
					if(Cola[j].frente <= Cola[j].detras){
						
				    
				    while(i<=Cola[j].detras){
				    	printf("%d,",Cola[j].elementos[i]);
				    	++i;
					 }
					 printf("\n");
					}
			       }
			       ++j;	
			   }
			}
			
		
		
		int main(void){
		    struct ColaPrioridad Cola[5];
			crear(Cola);
			encolar(Cola,1,1);//Agregamos el valor 1 a la cola de prioridad 1
			encolar(Cola,2,2);//Agregamos el valor 2 a la cola de prioridad 2
			encolar(Cola,3,3);//Agregamos el valor 3 a la cola de prioridad 3
			encolar(Cola,4,4);//Agregamos el valor 4 a la cola de prioridad 4
		    encolar(Cola,5,5);//Agregamos el valor 5 a la cola de prioridad 5
		    desencolar(Cola,1);//Eliminamos el valor que esta al frente en la cola de prioridad 1
		    encolar(Cola,6,1);//Agregamos el valor 6 a la cola de prioridad 1
		    encolar(Cola,7,1);//Agregamos el valor 7 a la cola de prioridad 1
		    mostrar(Cola);//Muestra el contenido de todas las colas
		   return 0;
		}

