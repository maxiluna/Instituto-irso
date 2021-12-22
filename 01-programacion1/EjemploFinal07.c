/*
Generar un programa que permita cargar valores enteros (int) de teclado y cargarlos
en un archivo. La carga finaliza cuando se lee un valor 13(trece) o 15(quince).
*/

#include <stdio.h>

int main(){
	int x;
	do {
		printf("\n Ingrese un numero: ");
		scanf("%i", &x);
		FILE* fp;
		fp = fopen("EjemploFinal07.txt", "w");
		fprintf(fp, "\n%d\n", x);
		fclose(fp);
	} while ((x!=13)||(x!=15));
	printf("\nFin");
	return 0;
}
