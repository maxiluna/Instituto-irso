/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripci�n: EJERCICIOS                   */
/*              ESTRUCTURAS                  */
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
#include <string.h>

/*
	Ejercicio 4: 
	Dado un vector B de estructuras/registros de alumnos cuyos
	campos son: nombre (cadena de caracteres [10]) y nota (entero); 
	realizar mediante un programa la impresi�n de los nombres 
	de los alumnos cuyas notas superan el valor 7.
*/

struct
{
	char nombre[10];
	int nota;
} vectorB[5];


int main() {
	
	/* Ingreso de datos */
	int indice;
	for (indice=0; indice<5; indice++)	{ 
		printf("\nIngreso %i -", indice+1);
		gets(vectorB[indice].nombre);
		printf("\nIngrese nota (numero entero):");
		scanf("%i", &vectorB[indice].nota);
	}

	/* Impresion de datos */
	for (indice=0; indice<5; indice++)
	printf(
		"%s tiene una calificaci�n de %d\n", 
		vectorB[indice].nombre, 
		vectorB[indice].nota);

	return 0;
}

