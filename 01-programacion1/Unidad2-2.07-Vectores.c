/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: VECTORES                     */
/*                                           */
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
	Un vector es una estructura donde cada uno de los elementos 
	que la componen son del mismo tipo de datos. 
	Esta estructura tiene un tamaño fijo, es decir, 
	una cantidad finita y determinada de elementos.
	
	tipo nombre_arr [ tamaño ]
	*/
	
	int x=0, y=0;
	int listanum[10];
	
	while (x < 10) {
		listanum[x] = x * 2;
		x += 1;
	}
	
	while (y < 10) {
		printf("\nPosicion %d del vector es igual a: %d", y, listanum[y]);
		y += 1;
	}
	
	

	printf("\n\n------------------ 1 ------------------");


	/*PAGINA 107*/
	return 0;
}
