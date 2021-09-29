/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
/*              RECURSIVIDAD                 */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

#include <stdio.h>

/*
	Ejercicio 1: 
	Realizar un subprograma que permita calcular la siguiente serie:
	a^n+a^(n-1)+a^(n-2)+...+a^2+a+1
	
	Separo la logica en 2 secciones para cumplir:
	 1 - a^n +
	 2 - a^(n-1)+a^(n-2)+...+a^2+ 
	 3 - a+1
*/

double exponencial, calculofinal;
int valorainicial=0;

void calcula_serie(double valora, double valorn) {
	// El valor "a" sera siempre el mismo.
	if (valorainicial==0)
		// Exponente por unica vez - a^n (pow(valora, valorn))
		valorainicial=1,
		printf ( "Calculo = 'a': %.2f exponente 'n': %.2f\n", valora, valorn ),
		calculofinal = pow(valora, valorn ),
		printf ( "Resultado Parcial 1 = %.2f\n", calculofinal);

	// Si valorn es mayor a cero ingresa en la recursion
	if (valorn > 1)
		// Parte 2 - a^(n-1)+a^(n-2)+...+a^2+
		//   (pow(valora, valorn))
		calculofinal += pow(valora, valorn-1),
		printf ( "Calculo = 'a': %.2f exponente 'n'-1: %.2f\n", valora, valorn-1 ),
		printf ( "Resultado Parcial 2 = %.2f\n", calculofinal),
		// Llama a la misma funcion con valorn-1
		calcula_serie(valora, valorn-1),
	// Una vez que count llega a cero cada una de las recursiones continuan su ejecucion.
	// Continua desde la ultima que fue 1 y hasta la primer ejecucion que ingreso con index-1
	printf ( "Calculo = 'a': %.2f exponente 'n': %.2f\n", valora, valorn ),
	calculofinal += pow(valora, valorn),
	printf ( "Resultado Parcial 2 = %.2f\n", calculofinal);

	// Sumo unica vez + 1
	if (valorainicial==1)
		valorainicial=0,
		printf ( "Calculo = 'a': %.2f + 1\n", valora),
		calculofinal += 1,
		printf ( "Resultado Parcial 3 = %.2f\n", calculofinal);
}

int main(){
	
	double indexa, indexn ;
	printf("Ingrese un numero 'a': ");
	scanf("%lf", &indexa);
	printf("Ingrese exponencial 'n': ");
	scanf("%lf", &indexn);
	// Llama a la funcion calcula_serie con el valor indexa, indexn
	calcula_serie(indexa, indexn) ;
	return 0;
}
