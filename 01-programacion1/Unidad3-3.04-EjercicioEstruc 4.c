/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
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

/*
	Ejercicio 4: 
	Dado un vector B de estructuras/registros de alumnos cuyos
	campos son: nombre (cadena de caracteres [10]) y nota (entero); 
	realizar mediante un programa la impresión de los nombres 
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
		printf("\nIngrese nombre %i - :", indice+1);
		fflush(stdin); /* Limpia variable de ingreso */
		gets(vectorB[indice].nombre);
		printf("Ingrese nota (numero entero): ");
		scanf("%i", &vectorB[indice].nota);
	}

	/* Impresion de datos */
	printf("\n Se listan las notas superiores a 7:\n");

	for (indice=0; indice<5; indice++)
	if (vectorB[indice].nota>7){
		printf(
			" - %s tiene una nota de %d\n", 
			vectorB[indice].nombre, 
			vectorB[indice].nota);
	}
	return 0;
}
