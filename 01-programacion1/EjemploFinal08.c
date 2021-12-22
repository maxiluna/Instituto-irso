/*
Generar un programa que permita realizar la suma de los elementos en las posiciones 
0, 3, 6 y 7 de un vector de 10 posiciones donde cada uno de los valores son enteros.
Cargar los elementos del vector por teclado. Devolver el resultado imprimiendolo en
pantalla y guardandolo en un archivo.
*/

#include <stdio.h>
int main(){
	int vector[10], x, elemento, resultado;
	// Ingreso por teclado elementos
	for(x=0; x<10; x++){
		printf(" Ingrese un numero para elemento 'x': ");
		scanf("%i", &elemento);
		vector[x]=elemento;
	}
	// Sumo posiciones
	resultado = vector[0] + vector[3] + vector[6] + vector[7]; 
	printf("\n El resultado es: %d", resultado);
	FILE* fp;
	fp = fopen("EjemploFinal08.txt", "w");
	fprintf(fp, "%d\n", resultado);
	fclose(fp);
	return 0;
}
