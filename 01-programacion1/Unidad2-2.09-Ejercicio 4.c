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


main(){
	/* 
	Ejercicio 4: Realizar un programa que permita obtener el producto de dos
	vectores A y B componente a componente, guardando el resultado en un nuevo
	vector C. Los vectores tienen longitud 6, y los índices son enteros. Los
	elementos del vector también son enteros. Imprimir el resultado. 

	Nota: Los valores de las matrices y los vectores deben ser cargados desde
	teclado y siempre impresos sobre la pantalla.
	*/
	
	const l = 6;
	int x, vectorA[l], vectorB[l], vectorC[l];
	
	/* Obtengo datos para vectorA y vectorB */
	for(x=0; x<l; ++x){
		printf("Ingrese un valor para la posicion VectorA[%i]: ", x);
		scanf("%i", &vectorA[x]);
		printf("Ingrese un valor para la posicion VectorB[%i]: ", x);
		scanf("%i", &vectorB[x]);
	}		

	/* Imprimo vectorA y vectorB */
	printf("\nDatos de vectorA: ");
	for(x=0; x<l; ++x){
		if (x<l-1){
			printf(" %i,", vectorA[x]);
		} else {
			printf(" %i", vectorA[x]);
		}
	}
	printf("\nDatos de vectorB: ");
	for(x=0; x<l; ++x){
		if (x<l-1){
			printf(" %i,", vectorB[x]);
		} else {
			printf(" %i", vectorB[x]);
		}
	}
	printf("\n");
	/* Calculo el producto e imprimo vectorC */
	for(x=0; x<l; ++x) {
		vectorC[x] = vectorA[x] * vectorB[x];
		printf("\nEl valor de la posicion vectorC[%i] es: %i", x, vectorC[x]);
	}

	printf("\n------------------ 4 ------------------");

	/*PAGINA 112*/
	return 0;
}
