/*
Genere un programa que permita cargar los valores (enteros) de una matriz de 5x3
posiciones a un archivo.
*/
#include <stdio.h>

int main(){
	int matriz[5][3], x, y;
	// Ingreso por teclado elementos
	for(x=0; x<5; x++) {
		for(y=0; y<3; y++){
			printf("Ingrese un valor para Matriz[%i][%i]: ", x, y);
			scanf("%i", &matriz[x][y]);
			}
	}
	// Sumo posiciones
	for(x=0; x<5; ++x) {
		for(y=0; y<3; ++y){
				FILE* fp;
				fp = fopen("EjemploFinal09.txt", "w");
				fprintf(fp, "%d\n", matriz[x][y]);
				fclose(fp);
			}
	}
	return 0;
}
