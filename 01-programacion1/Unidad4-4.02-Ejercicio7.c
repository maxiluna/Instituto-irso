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
	Ejercicio 7: 
	Calcular la potencia n de un número a (a^n), con n entero
*/

double a, n;
double resultado;

calculopotencia() {
	// Copio posicion de string en letra a validar
	printf("Ingrese numero a: ");
	scanf("%lf", &a);
	printf("Ingrese numero n: ");
	scanf("%lf", &n);
	// Verifico el largo del string e ingreso en recursion.
	if (a <= 0 || n <= 0){
		printf("Error, ingrese nuevamente...\n\n");
		// Llama a la misma funcion
		calculopotencia();
	} else {
	// Exponente por unica vez - a^n (pow(valora, valorn))
	printf ( "Calculo = 'a': %.f exponente 'n': %.f\n", a, n );
	resultado = pow(a, n);
	}
}

int main()  
{

	// Llama a la funcion calculopotencia
	calculopotencia();
	printf("La potencia de a^n es = %.f\n", resultado);
    return 0;
} 
