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
	Ejercicio 4: 
	Realizar un subprograma que permita adicionar al campo 
	nota del vector anterior, un punto si el apellido 
	del alumno comienza con la letra L.
*/

int largo_vector=3;
char letraL[] = "L";
int validoletraL;

struct
{
	char alumno[20];
	int legajo;
	int nota;
} vectorA[3]; // Indico largo de vector



void creadatos_vector(int n) {
	// Si n es menor al largo del vector ingresa en la recursion
	if (n < largo_vector)
		printf("\n--- Posicion de vector: %d: ---\n", n+1),
		printf("Ingrese Alumno: "),
		fflush(stdin), /* Limpia variable de ingreso */
		gets(vectorA[n].alumno),
		printf("Ingrese legajo (numero):"),
		scanf("%i", &vectorA[n].legajo),
		printf("Ingrese nota:"),
		scanf("%d", &vectorA[n].nota),
		n++,
		// Llama a la misma funcion con valorn-1
		creadatos_vector(n);
}

void lectura_vector(int n) {
	// Valido letra L	
	validoletraL = strncmp(letraL, vectorA[n].alumno, 1);
	if (validoletraL==0){
		printf(" \n*** Modifico campo nota ***\n");
		vectorA[n].nota = 0;
	}
	// Si n es menor al largo del vector continuo imprimiendo
	if (n < largo_vector)
		printf("\n--- Imprimo Posicion de vector: %d: ---\n", n+1),
		printf("Alumno: %s \n", vectorA[n].alumno),
		printf("Legajo: %i \n", vectorA[n].legajo),

		printf("Nota: %i \n", vectorA[n].nota),
		n++,
		// Llama a la misma funcion con valorn-1
		lectura_vector(n);
}

int main(){

	// Llama a la funcion creadatos_vector
	creadatos_vector(0);
	// Llama a la funcion lectura_vector
	printf("------------------------------------\n");
	lectura_vector(0);
	return 0;
}
