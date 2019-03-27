#include <stdio.h>
#include <stdlib.h>
#define N 4
#define M 5
// OPCION NUMERO 2, BRANCH OPCION_2//
int main(){
	int f,c,i;
	double matriz[N][M];
	double *puntero = &matriz[0][0];

	for(f = 0;f<N; f++){
		for(c = 0;c<N; c++){
			*puntero=rand()%10;
			printf(" %.2lf ", *(puntero++));
		}
		printf("\n");
	}
	return 0;
}