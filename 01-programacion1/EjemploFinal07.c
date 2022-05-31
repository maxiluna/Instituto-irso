/*
Generar un programa que permita cargar valores enteros (int) de teclado y cargarlos
en un archivo. La carga finaliza cuando se lee un valor 13(trece) o 15(quince).
*/

#include <stdio.h>

int main(){
	int x, y;
	FILE* fp;

	for (y=0; y<2; y++){
		if(x == 13 || x ==15){
			break;
		} else {
			printf("\n Ingrese un numero: ");
			scanf("%i", &x);
			fp = fopen("EjemploFinal07.txt", "w");
			fprintf(fp, "%d\n", x);
			y--;
		}
	}
	fclose(fp);
	printf("\nFin");
	return 0;
}
