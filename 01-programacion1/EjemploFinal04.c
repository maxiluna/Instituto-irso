/*
Generar un programa que permita realizar el siguiente cálculo:
a+147*b+253, donde:
a y b son números reales que se ingresan por teclado
Considerar que a y b deben ser pares, ésa es la única restricción. En el caso de que alguno no
sea par, se debe devolver un mensaje indicando “No se puede realizar el cálculo porque alguno
de los números ingresados es par”.
*/
#include <stdio.h>

int main(){
	float a, b, resultado;
	// Ingreso por teclado x, y
	printf(" Ingrese un numero para 'a': ");
	scanf("%f", &a);
	printf("\n Ingrese un numero para 'b': ");
	scanf("%f", &b);
	if ((int)a%2==0) {
		resultado = a+147*b+253;
		printf("\n El resultado de a+147*b+253 es: %f ", resultado);
	} else {
		printf("No se puede realizar el calculo porque alguno de los numeros ingresados es par");
	}
	return 0;
}
