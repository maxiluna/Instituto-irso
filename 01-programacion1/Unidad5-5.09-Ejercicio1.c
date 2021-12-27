/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
/*              PUNTEROS                     */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

/*
Ejercicio 1: 
Realizar la declaración de una variable de tipo struct de tres campos 
(código de producto de tipo entero, descripción de tipo string de 20
caracteres y precio de tipo float). 
Luego, declarar una variable puntero a esa estructura e imprimir los 
contenidos de la variable usando el puntero.
*/
#include <stdio.h>
#include <string.h>

// Declaro variables globales
struct
{
	int codigodeproducto; /* Codigo de producto de tipo entero */
	char descripcion[20]	; /* Descripcion de tipo string de 20 caracteres */
	float precio; /* Precio de tipo float */
} variable;

struct
{
	int codigodeproducto; /* Codigo de producto de tipo entero */
	char descripcion[20]	; /* Descripcion de tipo string de 20 caracteres */
	float precio; /* Precio de tipo float */
} *puntero;

int main(void) {
	// Cargo datos
	variable.codigodeproducto=99;
	printf("\nIngrese Descripcion: ");
	gets(variable.descripcion);
	variable.precio=190.05;

	printf ( "\nValor variable.codigodeproducto: %d\n", variable.codigodeproducto);
	printf ( "Valor variable.descripcion: %s\n", variable.descripcion);
	printf ( "Valor variable.precio: %f\n", variable.precio);

	//printf ( "Direccion de Variable VAR1: %p\n", &var1);
	//printf ( "Direccion original de puntero: %p\n", &puntero);
	//printf ( "Valor de puntero: %p\n", puntero);
	//printf ( "\nValor de lo que apunta el puntero: %d\n", *ptr);


	
	// Asigno Variable a Puntero
	puntero = &variable;
	
	printf ( "\nValor puntero.codigodeproducto: %d\n", *puntero);
	printf ( "Valor puntero.descripcion: %s\n", *puntero);
	printf ( "Valor puntero.precio: %f\n", *puntero);
	
	return 0;
}
