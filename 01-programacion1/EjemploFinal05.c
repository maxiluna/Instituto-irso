/*
Generar un programa que permita realizar el siguiente cálculo:
Dado un vector de 1040 posiciones donde sus índices son enteros y sus datos
reales (que se leen de teclado), se quiere generar un archivo de reales donde se copian los
datos del vector. Para ello deberá hacer un programa que contenga al menos tres
procedimientos: uno para leer los datos de teclado y cargarlos en el vector, otro para tomar los
elementos del vector y copiarlos en el archivo, y un tercero para imprimir los valores
almacenados en el archivo e imprimirlos en pantalla.
*/
#include <stdio.h>

int x;
float n, vector[10];

void leerdatosdeteclado(){
	for(x=0; x<10; x++){
		printf(" Ingrese un numero vector, posicion %d: ", x);
		scanf(" %f", &n);
		vector[x] = n;
	}
}

void copiarenarchivo(){
	FILE* fp;
	fp = fopen("Ejemplo.txt", "w");
	// Guardo en archivo cada posicion del vector 
	for(x=0;x<10;x++) {
		fprintf(fp, "%f\n", vector[x]);
	}
    fclose(fp);
}

void imprimirarchivo(){
	FILE *fp;
	fp = fopen("Ejemplo.txt", "r");
	if (fp) {
	    while ((n = getc(fp)) != EOF)
	        putchar(n);
	    fclose(fp);
	}
}

int main(){
	// Procedimientos
	leerdatosdeteclado();
	copiarenarchivo();
	imprimirarchivo();
	return 0;
}
