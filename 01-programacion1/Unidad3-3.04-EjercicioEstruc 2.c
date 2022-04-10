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
	Ejercicio 2: 
	Realizar un programa que permita, dado un vector de estructuras/registros 
	cuyos campos son: empresa (cadena de caracteres [30]), 
	domicilio (cadena de caracteres [40]), código postal (cadena de caracteres [10]),
	localidad (cadena de caracteres [20]), país (cadena de caracteres [15]),
	imprimir un listado para generar el destinatario de unas cartas. El formato debe
	ser el correcto.
*/

struct
{
	char empresa[30];
	char domicilio[40];
	char codigopostal[10];
	char localidad[20];
	char pais[15];
} listado;

int main() {
	printf("\nIngrese Empresa: ");
	gets(listado.empresa);
	
	printf("\nIngrese Domicilio: ");
	gets(listado.domicilio);
	
	printf("\nIngrese Codigo Postal: ");
	gets(listado.codigopostal);
	
	printf("\nIngrese Localidad: ");
	gets(listado.localidad);
	
	printf("\nIngrese Pais: ");
	gets(listado.pais);

	/* Impresion de datos */
	printf("\nDestinatario - Datos de Empresa: %s \n", listado.empresa);
	printf("- Domicilio: %s \n", listado.domicilio);
	printf("-- Codigo Postal: %s \n", listado.codigopostal);
	printf("--- Localidad: %s \n", listado.localidad);
	printf("---- Pais: %s \n", listado.pais);

	return 0;
}

