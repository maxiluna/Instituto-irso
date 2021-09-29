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
	Ejercicio 2: 
	Realizar un subprograma que permita calcular la siguiente serie:
	  1+2+3+4+......+n
*/
int a, resultado=0;

void calcula_serie(int n) {
	// Si valorn es mayor a cero ingresa en la recursion
	if (n > 0)
		printf ("Sumo %d + resultado previo: %d\n", n, resultado),
		resultado += n,
		printf ( "-Resultado = %d\n", resultado),
		n--,
		// Llama a la misma funcion con valorn-1
		calcula_serie(n);
}

int main(){
	
	int indexn;
	printf("Ingrese un numero 'n': ");
	scanf("%i", &indexn);
	// Llama a la funcion calcula_serie con el valor indexn
	calcula_serie(indexn);
	return 0;
}
