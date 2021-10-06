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
#include <stdlib.h>

/*
	Ejercicio 9: 
	Un parámetro de importancia en la producción algodonera es el
	que permite determinar el promedio de toneladas producidas por quintal cada año. 
	
	Dado un vector constituido por registros de dos campos: 
	  tipo (cadena de 20 caracteres) y 
	  toneladas por quintal (real), 
	se desea hallar el promedio de toneladas por quintal producidos del algodón tipo 
	‘Capullo-Calidad1’. 
	El vector tiene 72 posiciones y el proceso que permita el cálculo debe ser recursivo.
*/

struct
{
	char tipo[20];
	float tpq; //toneladasporquintal
} vectorA[72]; // Indico largo de vector

int n, x=0;

char palabra[] = "Capullo-Calidad1";

void calculopromedio() {
	// https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
	// Verifico a menor a cero y b mayor a 0.
	if (a >= 0 || b < 0){
		printf("Error, ingrese nuevamente...\n\n");
		// Llama a la misma funcion
		calculopotencia();
	} else {
	// Producto de a * b
	printf ( "Calculo = 'a': %.f exponente 'n': %.f\n", a, b );
	resultado = a*b;
	}
}

void generodatosrandom(int maximo, int n) {
	// Copio posicion de string en letra a validar
	n++
	if (n < maximo){
		printf("Error, ingrese nuevamente...\n\n"),
		vectorA[n].tipo=,
		vectorA[n].tpq,
		// Llama a la misma funcion
		generodatosrandom(72, n++);
	}
}

int main()  
{

	// Genero datos aleatorios
	generodatosrandom(72, 0);
	// Funcion Calcula promedio
	calculopromedio();
    return 0;
} 
