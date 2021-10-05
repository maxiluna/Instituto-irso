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
	Ejercicio 8: 
	Calcular el producto a*b con a entero y menor que cero, y b real.
*/

float a, b, resultado;

calculopotencia() {
	// Copio posicion de string en letra a validar
	printf("Ingrese numero a: ");
	scanf("%f", &a);
	printf("Ingrese numero b: ");
	scanf("%f", &b);
	// Verifico a menor a cero y b mayor a 0.
	if (a >= 0 || b < 0){
		printf("Error, ingrese nuevamente...\n\n");
		// Llama a la misma funcion
		calculopotencia();
	} else {
	// Producto de a * b
	printf ( "Calculo = 'a': %.f exponente 'n': %.f\n", a, b );
	resultado = a*b;
	}
}

int main()  
{

	// Llama a la funcion calculopotencia
	calculopotencia();
	printf("El producto de a*n es = %.f\n", resultado);
    return 0;
} 
