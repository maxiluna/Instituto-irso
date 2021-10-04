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
#include <string.h>  

/*
	Ejercicio 6: 
	Realizar un subprograma que permita determinar cuántas 
	letras ‘A’ o ‘a’ hay en un string de n caracteres.
*/

char string[] = "";
char letra1[] = "A";
char letra2[] = "a";


int contador=0;
int validoletra;


cuentoletras(int n, int contador) {
	// Si n es menor al largo del vector ingresa en la recursion
	if (n <= strlen(string))
		printf("Imprimo posicion [%c]\n ", string[n]),
		n++,
		contador++,
		// Llama a la misma funcion con valorn-1
		cuentoletras(n, contador),
		printf("String: %d\n", contador);
		return contador;
}

int main()  
{
	
	printf("Ingrese palabra: ");
	scanf("%s", &string);
	// Llama a la funcion cuentoletras
	contador = cuentoletras(0, 0);
	printf("------------------------------------\n");
	printf("String: %s\n", string);

	printf("String: %d\n", contador);

    return 0;
} 
