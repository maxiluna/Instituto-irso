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
	Ejercicio 5: Realizar un programa que permita asignar la identidad a una
	matriz R de dimensión mxm (considerar m=4). Los índices y las componentes
	son enteros. La matriz identidad es la que tiene valor 1 en la diagonal principal
	y 0 en el resto. 
	1 0 0 0
	0 1 0 0
	0 0 1 0
	0 0 0 1
	
	Nota: Los valores de las matrices y los vectores deben ser cargados desde
	teclado y siempre impresos sobre la pantalla.
	
	*/
	
	int x, y;
	int matrizR[4][4];

	for(x=0; x<4; ++x) {
		for(y=0; y<4; ++y)
			if(matrizR[x]==matrizR[y]){
				matrizR[x][y]=1;
			}else{
				matrizR[x][y]=0;
			}
			
	}	
	
	printf("\nMatriz identidad\n\n");
	
	for (x=0; x<4; x++) {
		for (y=0; y<4; y++)
		printf("%2d ", matrizR[x][y]);
		printf("\n");
	}
	
	printf("\n------------------ 5 ------------------");

	/*PAGINA 112*/
	return 0;
}
