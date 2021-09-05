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
	Ejercicio 2: Realizar un programa que permita obtener e imprimir el resultado
	de la suma de los elementos de un vector Z de longitud k, donde los elementos
	del vector son reales (considerar k=5). 

	Nota: Los valores de las matrices y los vectores deben ser cargados desde
	teclado y siempre impresos sobre la pantalla.
	
	*/
	
	const k = 5;
	int x, vectorsuma, vectorZ[k];
	
	for(x=0; x<k; ++x){
		printf("Ingrese un valor para la posicion %i: ", x);
		scanf("%i", &vectorZ[x]);
	}		
	
	vectorsuma = 0;
	
	for(x=0; x<k; ++x) {
			printf("\nEl valor de la posicion %i es: %i", x, vectorZ[x]);
			vectorsuma += vectorZ[x];
	}
	printf("\nLa suma de los elementos del vector es: %i\n", vectorsuma);
	printf("\n------------------ 2 ------------------");

	/*PAGINA 112*/
	return 0;
}
