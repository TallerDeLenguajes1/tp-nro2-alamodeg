#include <stdio.h>
#include <stdlib.h>
char tipos[6][10]={"Intel", "AMD", "Celeron", "Athlon", "Dual Core", "Pentium"}; //Arreglo de cadenas

//--ESTRUCTURA--//
typedef struct{
	int velocidad;//entre 1 y 3 Gherz   
	int anio;//entre 2000 y 2017  
	int cantidad;//entre 1 y 4    
	char *tipo_cpu;//valores del arreglo tipos 	
}T_compu;

//--PROTOTIPOS--//
void *ReservaMemoria(int dimension);
T_compu CargaPC(T_compu computadora);
//--MAIN--//
int main(){
	int cant_pc;
	T_compu *equipos;

	puts("Ingrese la cantidad de equipos que quiere ingresar");
	scanf("%d",&cant_pc);
	equipos = (T_compu*)malloc(cant_pc*sizeof(T_compu)); 
}
//--FUNCIONES--//
void *ReservaMemoria(int dimension){
	void *aux;
	aux = malloc(dimension);
	if( aux==NULL ){  //si malloc no encuentra espacio//
		printf("No es posible reservar memoria");
		exit(1);
	}
	return aux;
}
T_compu CargaPC(T_compu computadora){
	computadora.velocidad = 1 + rand() % ((3+1)-1);	//Menor + rand()%((Mayor+1)-Menor);
	computadora.anio = 2000 + rand() % ((2017 +1)-2000);
	computadora.cantidad = 1 + rand()%((4+1)-1);
	tipo_cpu
}