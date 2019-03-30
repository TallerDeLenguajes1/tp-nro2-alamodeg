#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 15

int main(){
	srand(time(NULL));
	int *matriz;
	int columnas = 5 + rand() % ((15+1)-5);
	int cont_pares = 0;
	int pares[FILAS];

	matriz = (int*)malloc(FILAS*sizeof(int));
	for (int i = 0; i < FILAS*columnas; i++){ //Relleno la matriz con filas*columnas
		int aleatorio = 100 + rand() % ((999+1)-100);   //Menor + rand()%(Mayor+1)-Menor);
		*(matriz+i) = aleatorio;
	}
	puts("|-----------MATRIZ CARGADA-----------|\n");
	for(int i=0;i<FILAS;i++){ 
		for(int j=0;j<columnas;j++){
			printf("%d ",*(matriz+((i*columnas)+j)));
		}
		printf("\n");
	}
	printf("\n\n");
	puts("|-----------CANTIDAD DE PARES-----------|");
	for(int i=0;i<FILAS;i++){ 
		for(int j=0;j<columnas;j++){
			if ( *(matriz+((i*columnas)+j))%2==0){
				cont_pares++;

			}
		}
		pares[i] = cont_pares;
		printf("El numero de pares de la fila N%d es %d\n",i+1,cont_pares);
		cont_pares=0;
	}
	printf("\n\n");
	puts("|-----------VECTOR CON CANTIDAD DE PARES POR FILA-----------|");
	for (int i = 0; i < FILAS; i++){
		printf("%d  ",pares[i]);
	}
	return 0;
} 