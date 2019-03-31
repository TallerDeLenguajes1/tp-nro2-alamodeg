#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FILAS 15

int main(){
	srand(time(NULL));
	int *matriz;
	int COLUMNAS = 5 + rand() % ((15+1)-5);
	int cont_pares = 0;
	int *punt_pares;

	matriz = (int*)malloc(FILAS*sizeof(int));
	punt_pares = (int*)malloc(FILAS*sizeof(int));
	//--------------CARGA DE MATRIZ
	for (int i = 0; i < FILAS*COLUMNAS; i++){ //Relleno la matriz con filas*COLUMNAS
		int aleatorio = 100 + rand() % ((999+1)-100);   //Menor + rand()%(Mayor+1)-Menor);
		*(matriz+i) = aleatorio;
	}
	/*	puts("|-----------MUESTRA MATRIZ-----------|\n");
	for(int i=0;i<FILAS;i++){ 
		for(int j=0;j<COLUMNAS;j++){
			//printf("%d ",*(matriz+((i*COLUMNAS)+j)));
		}
		printf("\n");
	}	*/
	puts("|-----------MATRIZ CARGADA CON PARES-----------|");
	for(int i=0;i<FILAS;i++){ 
		for(int j=0;j<COLUMNAS;j++){
			printf("%d ",*(matriz+((i*COLUMNAS)+j)));
			if ( *(matriz+((i*COLUMNAS)+j))%2==0){
				cont_pares++;
			}
		}
		*(punt_pares+i) = cont_pares;
		printf("        Pares: %d\n",cont_pares);
		cont_pares=0;
	}
	printf("\n\n");
	puts("|-----------VECTOR CON CANTIDAD DE PARES POR FILA-----------|");
	for (int i = 0; i < FILAS; i++){
		printf("%d - ",*(punt_pares+i));
	}
	free(matriz);
	free(punt_pares);

	return 0;
} 