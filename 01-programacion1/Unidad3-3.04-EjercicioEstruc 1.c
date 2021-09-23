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
#include <string.h>

/*
	Ejercicio 1: 
	Realizar un programa que permita leer de teclado y luego imprimir
	los contenidos de una variable tipo struct cuyos campos son: nombre (cadena
	de caracteres [10]), legajo (entero), dependencia de trabajo (entero), horas
	trabajadas (real).
*/

struct
{
	char nombre[10];
	int legajo;
	int dependencia;
	float horastrabajadas;
} persona;

void personanombre() {
	int contador;
	contador = 0;
	do {
		if (contador==0){
			contador += 1;
			printf("\nEscriba un nombre: ");
			gets(persona.nombre);
		} else {
			printf("\nNombre muy largo, vuelva a ingresarlo: ");
			gets(persona.nombre);
		}
	} while (strlen(persona.nombre) > 10);
}

int main() {
	
	personanombre();
	printf("Ingrese legajo (numero):");
	scanf("%i", &persona.legajo);
	printf("Ingrese dependencia (numero):");
	scanf("%i", &persona.dependencia);
	printf("Ingrese horas trabajadas:");
	scanf("%f", &persona.horastrabajadas);
	
	printf("\nEl Nombre ingresado es: %s\n", persona.nombre);
	printf("--> Legajo: %d\n", persona.legajo);
	printf("--> Dependencia: %d\n", persona.dependencia);
	printf("--> Horas trabajadas: %f\n", persona.horastrabajadas);

	return 0;
}

