/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: RECURSIVIDAD                 */
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
 
void count_dn(int count) {
	// El valor index=count decrece 1.
	count -- ;
	// Imprime el valor de count.
	printf ( "El valor de la cuenta es %d\n", count ) ;
	// Si count es mayor a cero ingresa en la recursion
	if (count > 0)
		// Llama a la misma funcion con el valor count-1
		// Este llamado se realiza hasta que el valor de index es cero.
		count_dn(count) ,
		// Una vez que count llega a cero cada una de las recursiones continuan su ejecucion.
		// Continua desde la ultima que fue 1 y hasta la primer ejecucion que ingreso con index-1
	printf ( "Ahora la cuenta es %d\n", count ) ;
}

int main(){
	
	int index ;
	index = 8 ;
	// Llama a la funcion count_dn con el valor index
	count_dn(index) ;
	return 0;
}

