/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: ESTRUCTURAS DE DATOS         */
/*              COMPUESTAS.                  */
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
		ESTRUCTURAS O REGISTROS:
	*/	
struct
{
	char inicial; /* Letra inicial del apellido */
	int edad; /* Edad */
	int calificacion; /* Nota */
} alumno, alumna;

struct
{
	char inicial;
	int edad;
	int calificacion;
} alumnos[12];

int main()
{
	alumno.inicial = 'R';
	alumno.edad = 15;
	alumno.calificacion = 75;
	alumna.edad = alumno.edad - 1; /* Ella es un año menor que él */
	alumna.calificacion = 82;
	alumna.inicial = 'H';
	
	printf("%c tiene %d años y su calificación es de %d\n", alumna.inicial, alumna.edad, alumna.calificacion);
	printf("%c tiene %d años y su calificación es de %d\n", alumno.inicial, alumno.edad, alumno.calificacion);

	printf("\n------------------ 1 ------------------\n");


	/* 
		ESTRUCTURAS O REGISTROS:
	*/

	int indice;
	for (indice = 0; indice < 12; indice++)
	{ 
		alumnos[indice].inicial = 'A' + indice;
		alumnos[indice].edad = 16;
		alumnos[indice].calificacion = 84;
	}
	alumnos[3].edad = alumnos[5].edad = 17;
	alumnos[2].calificacion = alumnos[6].calificacion = 92;
	alumnos[4].calificacion = 57;

	/* Asignación de estructura solo en compiladores ANSI-C */
	alumnos[10] = alumnos[4];

	for (indice = 0; indice < 12; indice++)
	printf(
		"%c tiene %d años y una calificación de %d\n", 
		alumnos[indice].inicial, 
		alumnos[indice].edad, 
		alumnos[indice].calificacion);

	printf("\n------------------ 2 ------------------");
	
	/*PAGINA 122*/
	return 0;
}
