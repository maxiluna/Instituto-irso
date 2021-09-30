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
	Ejercicio 5: 
	Calcular la suma de los elementos de un vector 
	de n componentes reales..
*/

int largo_vector=5;
float vector[5]; // Indico largo de vector
float suma;


void cargo_elementos(int n) {
	// Si n es menor al largo del vector ingresa en la recursion
	if (n < largo_vector)
		printf("Ingrese valor de posicion [%d]: ", n+1),
		scanf("%f", &vector[n]),
		n++,
		// Llama a la misma funcion con valorn-1
		cargo_elementos(n);
}

void sumo_elementos(int n) {
	// Si n es menor al largo del vector continuo sumando
	if (n < largo_vector)
		printf("Sumo %.2f + Valor de Elemento en posicion [%d]: %.2f \n", suma, n+1, vector[n]),
		suma += vector[n],
		printf("Resultado %.2f\n", suma),
		n++,
		// Llama a la misma funcion con valorn-1
		sumo_elementos(n);
}

int main(){

	// Llama a la funcion cargo_elementos
	cargo_elementos(0);
	// Llama a la funcion sumo_elementos
	printf("------------------------------------\n");
	sumo_elementos(0);
	return 0;
}
