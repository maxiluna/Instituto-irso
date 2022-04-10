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

main(){
	/* 
	Ejercicio 3: Realizar un programa que permita imprimir las componentes de un
	vector A de longitud g, cuyos elementos son caracteres. La impresión deberá
	indicar el índice del vector y el valor de la componente. Los índices son enteros
	y g=8. 

	Nota: Los valores de las matrices y los vectores deben ser cargados desde
	teclado y siempre impresos sobre la pantalla.
	
	*/
	
	const g = 8;
	char vectorA[g];
	int x = 0;
	
	for(x=0; x<g; ++x){
		printf("\nIngrese un valor para la posicion %i: ", x);
		scanf(" %c", &vectorA[x]);
	}		
	
	for(x=0; x<g; ++x) {
		printf("\nPosicion vectorA[%i] es = %c", x, vectorA);
	}

	printf("\n------------------ 3 ------------------");

	/*PAGINA 112*/
	return 0;
}
