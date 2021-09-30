/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
/*              RECURSIVIDAD                 */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

#include <stdio.h>

/*
	Ejercicio 11: 
	Realizar un subprograma recursivo que permita imprimir 40
	líneas en blanco en pantalla.
*/

void imprimir(int n) {
	// Si n es menor al largo del vector continuo sumando
	if (n > 0)
		//printf("%d - \n", n),
		printf("\n"),
		n--,
		// Llama a la misma funcion con valorn-1
		imprimir(n);
}

int main(){
	// Llama a la funcion imprimir
	printf("---------------- INICIO --------------------\n");
	imprimir(40);
	printf("---------------- FIN --------------------\n");
	return 0;
}
