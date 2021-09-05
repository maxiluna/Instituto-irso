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
	Ejercicio 6: Realizar un programa que permita obtener la suma de dos
	matrices X y J de dimensión axb (a=3 y b=4). Los elementos de la matriz son
	reales. El resultado debe ser impreso. Realizar la suma componente a
	componente. 
	
	Nota: Los valores de las matrices y los vectores deben ser cargados desde
	teclado y siempre impresos sobre la pantalla.
	
	*/

	int x, y;
	int matrizX[3][4], matrizJ[3][4];

	for(x=0; x<3; ++x) {
		for(y=0; y<4; ++y){
			printf("Ingrese un valor para MatrizX[%i][%i]: ", x, y);
			scanf("%i", &matrizX[x][y]);
			}
	}

	printf("\n");

	for (x=0; x<3; ++x) {
		for(y=0; y<4; ++y){

			printf("Ingrese un valor para MatrizJ[%i][%i]: ", x, y);
			scanf("%i", &matrizJ[x][y]);
		}
	}	

	printf("\nMatrizX: \n\n");

	for (x=0; x<3; x++) {
		for (y=0; y<4; y++)
		printf("%2d ", matrizX[x][y]);
		printf("\n");
	}

	printf("\nMatrizJ: \n\n");
	
	for (x=0; x<3; x++) {
		for (y=0; y<4; y++)
		printf("%2d ", matrizJ[x][y]);
		printf("\n");
	}

	printf("\nMatrizX + MatrizJ: \n\n");
	
	for (x=0; x<3; x++) {
		for (y=0; y<4; y++)
		printf("%2d ", matrizX[x][y]+matrizJ[x][y]);
		printf("\n");
	}
	
	printf("\n------------------ 6 ------------------");

	/*PAGINA 112*/
	return 0;
}
