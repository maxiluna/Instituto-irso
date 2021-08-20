/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: ESTRUCTURAS                  */
/*              DE DATOS.                    */
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
	1 - División de enteros se realice en coma flotante
	*/
	
	int x1=5,y1=2;
	float f1;
	printf("%d %d", x1, y1);
	f1 = (float)x1/y1;
	printf("\n%f", f1);
	printf("\n------------------ 1 ------------------");

	/* 
	2 - Flotante se convierte a entero
	*/

	float a2 = 5.25;
	int b2;
	b2 = (int)a2; /*En este caso, la variable b queda cargada con el valor 5*/
	printf("\n%d", b2);
	printf("\n%f", b2);
	printf("\n------------------ 2 ------------------");
	
	/* 
	3 - División de enteros se realice en coma flotante
	*/
	
	int x3=7, y3=5 ;
	float z3;
	z3 = (float)x3/(float)y3; /*En muchos compiladores, z queda cargada con el valor 1*/
	printf("\n%f", z3);
	printf("\n------------------ 3 ------------------");



	/* 
	PAGINA 90
	*/
	return 0;
}
