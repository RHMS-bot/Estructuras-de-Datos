#include "Vector.h"

int main(void) {
  struct Vector * vector = NULL;
  vector = crear(vector);
  int opc = 0;
  int dato = 0;
  int encontrar = -1;
  printf("----------Vector----------\n");
  do {
    printf("\nTeclea el numero de la operacion a realizar");
    printf("\n1.-Agregar\n2.-Mostrar vector\n3.-Eliminar\n4.-Buscar\n5.-Salir\n");
    scanf("%d", & opc);

    switch (opc) {
    case 1:
      printf("\nTeclea el dato entero que vas a colocar en el vector\n");
      scanf("%d", & dato);
      insertar(vector, dato);
      break;
    case 2:
      mostrar(vector);
      break;
    case 3:
      printf("\nTeclea el dato entero que vas a eliminar del vector\n");
      scanf("%d", & dato);
      eliminar(vector, dato);
      break;
    case 4:
      printf("\nTeclea el dato entero que vas a buscar en el vector\n");
      scanf("%d", & dato);
      encontrar = buscar(vector, dato);
      if (encontrar == -1)
        printf("\nNo esxiste el dato en el vector");
      else
        printf("\nEl dato esta en la posicion %d del vector", encontrar + 1);
      break;
    case 5:
      printf("\nEjecucion terminada");
      break;
    default:
      printf("Teclea un numero valido");
    }
  }
  while (opc != 5);

  return 0;
}
