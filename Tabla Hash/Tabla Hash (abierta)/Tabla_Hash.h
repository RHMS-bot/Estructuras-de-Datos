#include <stdio.h>
#include <stdlib.h>

struct Lista{
		int dato;
		struct Lista *siguiente;
	};
	
	struct TablaHash{
		struct Lista *datos[100];
	};
	
	int hash(int);
	struct TablaHash * creartabla(void);
	struct Lista* insertar_lista(struct Lista*, int);
	void insertar(struct TablaHash *,int);
	void buscar(struct TablaHash *,int);
	struct Lista * eliminar_lista(struct Lista *,int);
	void eliminar(struct TablaHash *,int);
	void mostrar(struct TablaHash *);
