#include <stdio.h>
#include <stdlib.h>
 
 struct Elementos{
   	 int dato;
   	 int prioridad;
   };

	struct cola{
	   struct Elementos elementos[10];
	   int frente;
	   int detras;
	};
	
	struct cola* crear(struct cola*Cola,int dato,int prioridad){
		struct cola *nuevo=NULL;
		nuevo=(struct cola*)malloc(sizeof(struct cola));
		if(nuevo==NULL){
			printf("\nNo hay memoria");
		}
		else{
			nuevo->frente=0;
			nuevo->detras=-1;
			nuevo->detras=++nuevo->detras % 10;
			nuevo->elementos[nuevo->detras].dato=dato;
			nuevo->elementos[nuevo->detras].prioridad=prioridad;
		}
		return nuevo;
	}
	
	void acomodar(struct cola * Cola){
	struct Elementos aux[10];
	int auxdato=0;
	int auxprioridad=0;
	int j=0;
	int i=0;
	int k=0;
	
	if(Cola->frente < Cola->detras)
	while(i<Cola->detras){
		while(j<Cola->detras){
			if(Cola->elementos[j].prioridad > Cola->elementos[j+1].prioridad){
				
				
				auxdato=Cola->elementos[j].dato;
				auxprioridad=Cola->elementos[j].prioridad;
				Cola->elementos[j].dato=Cola->elementos[j+1].dato;
				Cola->elementos[j].prioridad=Cola->elementos[j+1].prioridad;
				Cola->elementos[j+1].dato=auxdato;
				Cola->elementos[j+1].prioridad=auxprioridad;
			}
			++j;
		}	
		j=0;
		++i;
	}
	if(Cola->detras < Cola->frente){
		j=Cola->frente;
		while(j<10){
			aux[i].dato=Cola->elementos[j].dato;
			aux[i].prioridad=Cola->elementos[j].prioridad;
			++i;
			++j;
		}
		j=0;
		while(j<=Cola->detras){
			aux[i].dato=Cola->elementos[j].dato;
			aux[i].prioridad=Cola->elementos[j].prioridad;
			++i;
			++j;
		}
		
		j=0;
		while(k<i){
		while(j<i){
			if(aux[j].prioridad > aux[j+1].prioridad){
				auxdato=aux[j].dato;
				auxprioridad=aux[j].prioridad;
				aux[j].dato=aux[j+1].dato;
				aux[j].prioridad=aux[j+1].prioridad;
				aux[j+1].dato=auxdato;
				aux[j+1].prioridad=auxprioridad;
			}
			++j;
		}	
		j=0;
		++k;
	}
	k=0;
		while(k<10){
			if(k<i){
				Cola->elementos[k].dato=aux[k].dato;
				Cola->elementos[k].prioridad=aux[k].prioridad;
			}
			else{
				Cola->elementos[k].dato=0;
				Cola->elementos[k].prioridad=0;
			}
			++k;
		}
		Cola->frente=0;
		Cola->detras=i-1;
	}
}
	
	
	void encolar(struct cola *Cola,int elemento,int prioridad){
		int indice=0;
		if (Cola->frente-1==Cola->detras || Cola->frente==0 && Cola->detras==9 || Cola->frente==9 && Cola->detras==0)
	        printf("\nLa cola está llena");
	    else{
		    Cola->detras=++Cola->detras % 10;
		    indice=Cola->detras;
	        Cola->elementos[indice].dato=elemento;
	        Cola->elementos[indice].prioridad=prioridad;
	        acomodar(Cola);
	    }
	}
	
	void desencolar(struct cola *Cola){
		if (Cola->detras ==-1)
	        printf("\n No hay elementos en la cola");
	    else{
	     Cola->elementos[Cola->frente].dato=0;
	     Cola->elementos[Cola->frente].prioridad=0;
	     if(Cola->frente+1 % 10 == Cola->detras+1 % 10){
			 	Cola->detras=-1;
			}
		   else
		      Cola->frente=++Cola->frente % 10;
	 }
	}	
	
	void mostrar(struct cola* Cola){
		int i=0;
		if (Cola->detras==-1)
	        printf("\n No hay elementos en la cola");
	    else{
		
		if(Cola->frente > Cola->detras){
				
		     i=Cola->frente;
		    
		    while(i<=9){
		    	printf("[Dato: %d | Prioridad: %d],",Cola->elementos[i].dato,Cola->elementos[i].prioridad);
		    	++i;
			 }
			 
			 i=0;
			 while(i<=Cola->detras){
			 	printf("[Dato: %d | Prioridad: %d],",Cola->elementos[i].dato,Cola->elementos[i].prioridad);
		    	++i;
			 }
		     	printf("\n");	
			}
			else 
			if(Cola->frente <= Cola->detras){
				 i=Cola->frente;
		    
		    while(i<=Cola->detras){
		    	printf("[Dato: %d | Prioridad: %d],",Cola->elementos[i].dato,Cola->elementos[i].prioridad);
		    	++i;
			 }
			 printf("\n");
			}	
		}	
		}
