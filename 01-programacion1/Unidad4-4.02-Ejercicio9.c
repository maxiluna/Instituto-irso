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

char palabra[] = "Capullo-Calidad1";

void calculopromedio() {
	// https://www.geeksforgeeks.org/rand-and-srand-in-ccpp/
	// Copio posicion de string en letra a validar
	printf("Ingrese numero a: ");
	scanf("%f", &a);
	printf("Ingrese numero b: ");
	scanf("%f", &b);
	// Verifico a menor a cero y b mayor a 0.
	// 
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

int main()  
{

	// Llama a la funcion calculopotencia
	calculopromedio();
	// printf("El producto de a*n es = %.f\n", resultado);
    return 0;
} 
