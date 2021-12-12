/*
Generar un programa que permita calcular lo siguiente: 5*x + ¼*y, donde x e
y son valores reales que se ingresan por teclado. El resultado debe imprimirse
en pantalla.
*/

#include <stdio.h>
int main(){
	float x, y, resultado;
	// Ingreso por teclado x, y
	printf(" Ingrese un numero para 'x': ");
	scanf("%f", &x);
	printf("\n Ingrese un numero para 'y': ");
	scanf("%f", &y);
	resultado = 5*x + (1*y)/4;
	// Imprimo resultado en entero
	printf("\n El resultado de 5*x + 1/4*y es: %f ", resultado);
	return 0;
}
