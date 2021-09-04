/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: MATRICES                     */
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
	La matriz es una estructura estática al igual que el vector (esto es, que no varía su tamaño
	durante la ejecución del programa – lo que si varía es el contenido de las posiciones que 
	tiene el vector o la matriz pero no varía la cantidad de elementos que ellos tienen). 
	
	Es decir, que una vez que se define la cantidad de elementos que tiene una matriz, 
	esa cantidad no varía durante el tiempo de corrida del programa. 
	
	Los elementos de la matriz son todos del mismo tipo. 
	Los índices son de un tipo discreto ordinal. 
	
	*/
	
	int t,i,matriz1[3][4];
	
	for(t=0; t<3; ++t){
		for(i=0; i<4; ++i)
			matriz1[t][i]=(t*4)+i*1;
	}		
	
	for(t=0; t<3; ++t) {
		for(i=0; i<4; ++i)
			printf("matriz1[%d][%d]=%d ", t,i,matriz1[t][i]);
		printf("\n");
	}
	printf("\n------------------ 1 ------------------");

	/* 
	2 
	*/
	printf("\n\nImpresion de tabla");

	int j, k;
	int multiplica[11][11];
	for (j = 0 ; j < 11 ; j++)
	for (k = 0 ; k < 11 ; k++)
	multiplica[j][k] = j * k;
	
	printf("\n\n");
	
	for (j = 0 ; j < 11 ; j++)
	{
		for (k = 0 ; k < 11 ; k++)
		printf("%5d ", multiplica[j][k]);
		printf("\n");
	}
	
	printf("\n------------------ 2 ------------------");

	/*PAGINA 112*/
	return 0;
}
