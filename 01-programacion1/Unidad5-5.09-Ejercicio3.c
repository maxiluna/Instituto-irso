/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
/*              PUNTEROS                     */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

/*
Los punteros permiten manipular la memoria del ordenador. 
Todo dato está almacenado a partir de una dirección de memoria. 
Esta dirección puede ser obtenida y manipulada también como un dato más. 
Los punteros son importantes porque nos permiten manipular la memoria directamente.

*/
#include <stdio.h>
 
int main(void) {
 
int var1 = 2;
int *ptr;

printf ( "Valor de Variable VAR1: %d\n", var1);
printf ( "Direccion de Variable VAR1: %p\n", &var1);
printf ( "Direccion original de puntero: %p\n", &ptr);
printf ( "Valor de puntero: %p\n", ptr);
//printf ( "\nValor de lo que apunta el puntero: %d\n", *ptr);

ptr = &var1;

printf ( "\nDespues de realizar la asignacion ptr = &var1\n");
printf ( "Direccion original de puntero: %p\n", &ptr);
printf ( "Valor de puntero: %p\n", ptr);
printf ( "Valor de lo que apunta el puntero: %d\n", *ptr);
 
return 0;
}
