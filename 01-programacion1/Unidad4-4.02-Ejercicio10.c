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
	Ejercicio 10: 
	Realizar un subprograma que devuelva el producto de todos los
	elementos diagonales de una matriz de dimensión nxn.
*/

int x, y, acumulado=1;
int matriz[4][4]; // Configuro una matriz de 4x4


void calculo_producto(x, y) {
	// Verifico si no supera dimension de matriz.
	if(x<4){
		printf("  Producto de %d x %d : ", acumulado, matriz[x][y]),
		acumulado = acumulado * matriz[x][y],
		printf("%d\n", acumulado),
		x++,
		y++,
		// Llama a la misma funcion
		calculo_producto(x,y);
	} else if (x=4){
		printf("Producto de elementos diagonales: %d \n", acumulado);
	}	
}


void genero_matriz()
{
	// Cargo todas las posiciones de la matriz
	for(x=0; x<4; ++x) {
		for(y=0; y<4; ++y){
			printf("Ingrese un valor para Matriz[%i][%i]: ", x, y);
			scanf("%i", &matriz[x][y]);
			}
	}
	// Imprimo datos de matriz
	printf("\nDatos de Matriz: \n\n");
	for (x=0; x<4; x++) {
		for (y=0; y<4; y++)
		printf("%2d ", matriz[x][y]);
		printf("\n");
	}
}


int main()
{
    printf("----------- Solicito datos de matriz -------- \n");
    // Funcion Genera Matriz
    genero_matriz();
    printf("----------- Calculo el producto de todos los elementos diagonales -------- \n");
	// Funcion Calcula producto
	calculo_producto(0, 0);
    return 0;
} 
