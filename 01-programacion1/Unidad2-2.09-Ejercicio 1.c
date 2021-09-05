/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCITACIÓN                 */
/*              Vectores y matrices          */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

#include <stdio.h>
#include <stdlib.h>


main(void){
	/* 
	Ejercicio 1: Realizar un programa que permita hacer nulos (cargarles valor 0)
	los elementos de un vector Q de enteros, con n componentes (donde n es una
	constante que vale 10). 

	Nota: Los valores de las matrices y los vectores deben ser cargados desde
	teclado y siempre impresos sobre la pantalla.
	
	*/
	
	const n = 10;
	int x, vectorQ[n];
	
	for(x=0; x<n; ++x){
		printf("Ingrese un valor para la posicion %i: ", x);
		scanf("%i", &vectorQ[x]);
	}		
	
	for(x=0; x<n; ++x) {
		printf("\nEl valor de la posicion %i es: %i", x, vectorQ[x]);
	}
	printf("\n------------------ 1 ------------------");

	/*PAGINA 112*/
	return 0;
}
