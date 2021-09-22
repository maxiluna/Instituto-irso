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
	return 0;
}
