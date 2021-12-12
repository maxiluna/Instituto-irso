/*
Se desea hacer el siguiente cálculo: 11*x/y, donde x e y son enteros, y se
ingresan por teclado. El resultado debe ser entero también e imprimirse en
pantalla. Considerar que y sea distinto de cero, por cuanto está en el
denominador de la división.
*/

#include <stdio.h>

int main(){

	int x, y, resultado;
	// Ingreso por teclado x, y
	printf(" Ingrese un numero para 'x': ");
	scanf("%i", &x);
	printf("\n Ingrese un numero para 'y': ");
	scanf("%i", &y);
	// Ingreso por teclado x, y
	if (y==0){
		printf("El numero de y es igual a cero, imposible continuar");
	} else {
		resultado = 11*x/y;
		// Imprimo resultado en entero
		printf("\n El resultado de 11*x/y es: %d ", resultado);
	}
	return 0;
}
