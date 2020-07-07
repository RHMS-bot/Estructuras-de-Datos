#include <stdio.h>
#include <stdlib.h>

struct Vector{
	int *datos;
	int capacidad;
	int espacio;
	int ocupados;
};

struct Vector * crear(struct Vector * vector){
	struct Vector * nuevo =NULL;
	nuevo=(struct Vector*)malloc(sizeof(struct Vector));
	
	if(nuevo==NULL){
		printf("\n No hay memoria suficiente");
		return NULL;
	}
	
	 nuevo->datos=(int *)malloc(sizeof(int));
	 if(nuevo->datos == NULL){
		printf("\n No hay memoria suficiente");
		return NULL;
	}
	 
	 nuevo->capacidad=1;
	 nuevo->espacio=1;
	 nuevo->ocupados=0;
	 
	 return nuevo;
}

int * reservarmemoria(struct Vector * vector){
	int * datos2 =NULL;
	int i=0;
	datos2=(int *)malloc(sizeof(int)*(vector->capacidad*2));
	
	if(datos2==NULL){
		printf("\nNo hay memoria sufuciente");
		return vector->datos;
	}
	
	vector->espacio=vector->espacio+vector->capacidad;
	vector->capacidad=vector->capacidad*2;
	
	while(i<vector->ocupados){
		datos2[i]=vector->datos[i];
		++i;
	}
	
	free(vector->datos);
	return datos2;
}

int *reducirmemoria(struct Vector * vector){
	int * datos2 =NULL;
	int i=0;
	datos2=(int *)malloc(sizeof(int)*(vector->capacidad/2));
	
	if(datos2==NULL){
		printf("\nNo hay memoria sufuciente");
		return vector->datos;
	}
	
	vector->espacio=0;
	vector->capacidad=vector->capacidad/2;
	vector->ocupados=vector->capacidad;
	
	while(i<vector->ocupados){
		datos2[i]=vector->datos[i];
		++i;
	}
	
	return datos2;
}

struct Vector * insertar(struct Vector * vector,int dato){
	if(vector==NULL){
		printf("\nNo se ha creado el vector");
		return NULL;
	}
	
	if(vector->espacio==0)
		vector->datos=reservarmemoria(vector);
	
	vector->datos[vector->ocupados]=dato;
 	vector->espacio=vector->espacio-1;
	++vector->ocupados;
}

void mostrar(struct Vector * vector){
	int i=0;
	if(vector==NULL ||  vector->espacio==vector->capacidad){
		printf("\nNo hay datos que mostrar");
		return;
	}
	
	printf("\n");
	while(i<vector->ocupados){
		printf("%d,",vector->datos[i]);
		++i;
	}
	
}

int buscar(struct Vector * vector,int dato){
	int i=0;
	int encontrado=-1;
	if(vector == NULL){
		printf("\nNo existe el dato en el vector");
		return 0;
	}
	while(i<vector->ocupados && encontrado ==-1){
		if(dato==vector->datos[i]){
		 encontrado=1;
		 break;
	   }
		++i;
	}
	
	if(encontrado==-1)
	 return -1;
	else
	 return i;
}

struct Vector * eliminar(struct Vector * vector,int dato){
	int encontrado=0;
	int * datos2=NULL;
	int i=0;
	if(vector == NULL){
		printf("\nNo hay un vector creado");
		return NULL;
	}
	
	encontrado=buscar(vector,dato);
	
	if(encontrado == -1)
	 printf("\nNo existe el dato en el vector");
	else{
		if(vector->ocupados-1==vector->capacidad/2){
			datos2=reducirmemoria(vector);
			while(i<vector->ocupados){
				if(i >= encontrado && i!=vector->capacidad)
				datos2[i]=vector->datos[i+1];
				else
				datos2[i]=vector->datos[i];
				++i;
			}	
		}
		else{
			datos2=(int *)malloc(sizeof(int)*(vector->capacidad));
			while(i<vector->ocupados){
				if(i >= encontrado && i+1!=vector->capacidad)
				datos2[i]=vector->datos[i+1];
				else
				datos2[i]=vector->datos[i];
				++i;
			}
			--vector->ocupados;
		    ++vector->espacio;
		}
		free(vector->datos);
		vector->datos=datos2;
	}
	return vector;
}
