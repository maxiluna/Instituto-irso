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

int largo_vector=5;
char alumno_n[20];

struct
{
	char *alumno;
	int legajo;
	float nota;
} vectorA[3]; // Indico largo de vector



void creadatos_vector(int n, int legajo, int nota) {
	// Si n es menor al largo del vector ingresa en la recursion
	if (n < largo_vector)
		vectorA[n].alumno = "Alumno"+n,
		vectorA[n].legajo = legajo,
		vectorA[n].nota = nota,
		n++,
		legajo += 100,
		nota++,
		// Llama a la misma funcion con valorn-1
		creadatos_vector(n, legajo, nota);
}

void lectura_recursiva(int n) {
	// Si n es menor al largo del vector continuo imprimiendo
	if (n < largo_vector)
		printf("\n--- Imprimo Posicion de vector: %d: ---\n", n+1),
		printf("Alumno: %s \n", vectorA[n].alumno),
		printf("Legajo: %i \n", vectorA[n].legajo),
		printf("Nota: %f \n", vectorA[n].nota),
		n++,
		// Llama a la misma funcion con valorn-1
		lectura_recursiva(n);
}

void lectura_lineal(int n) {
	// Si n es menor al largo del vector continuo imprimiendo
	printf("------------------ EJECUCION LINEAL ------------------\n");
	for (n; n<5; n++) {
		printf("\n--- Imprimo Posicion de vector: %d: ---\n", n+1);
		printf("Alumno: %s \n", vectorA[n].alumno);
		printf("Legajo: %i \n", vectorA[n].legajo);
		printf("Nota: %f \n", vectorA[n].nota);		
	}
}

int main(){
	// Llama a la funcion creadatos_vector y creo datos para el vector
	creadatos_vector(0, 100, 5);

	/*
	Descomentar / Comentar en las siguientes lineas si queremos 
	visualizar la ejecucion de forma recursiva o lineal
	*/
	
	// Llama a la funcion lectura_vector 
	//printf("------------------ EJECUCION RECURSIVA ------------------\n");
	//lectura_recursiva(0); //<- Descomentar para ejecucion recursiva
	// Llama a la funcion lectura_vector 
	lectura_lineal(0); //<- Descomentar para ejecucion lineal
	return 0;
}
