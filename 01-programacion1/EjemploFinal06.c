/*
Realizar una funcion que permita calcular la division entre dos valores enteros A y B.
A debe ser mayor que B, y ademas, B debe ser diferente de 0 (cero) para que pueda
realizarse el calculo. Incluir la invocacion de la funcion desde un programa.
A y B se ingresan por teclado.
*/

#include <stdio.h>
//Declado las varias globales
int A, B, division=0;

void invocarfuncion(A, B){
	division = A/B;
	printf("\n El valor de A es: %d", A);
	printf("\n El valor de B es: %d", B);
	printf("\n El valor de A / B es: %d", division);
}

int main(){
	// Ingreso por teclado x, y
	printf(" Ingrese un numero para 'A': ");
	scanf("%i", &A);
	printf("\n Ingrese un numero para 'B': ");
	scanf("%i", &B);
	// Ingreso por teclado x, y
	if ((B!=0)&&(A>B)){
		invocarfuncion(A, B);
	} else {
		printf("B es igual a cero o A es menor a B");
	}
	return 0;
}
