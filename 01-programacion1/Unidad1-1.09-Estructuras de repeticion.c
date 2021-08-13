/*********************************************/
/* Materia: Programacion 1	                 */
/*                                           */
/* Descripci�n: ESTRUCTURAS DE               */
/*              REPETICI�N                   */
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

int main()
{
	int x, y, z;
	
	/* 
		Mientras / hacer
	*/
	printf("\nWHILE: Ingrese un numero menor a 20\n");
	scanf("%d", &x);
	while (x < 25) {
		printf("%d\n", x);
		x = x + 1;
	}
	printf("\nSalida de WHILE\n");
	
	/* 
		Repetir / hasta
	*/

	do {
		printf("\nDO WHILE: Mientras ingrese un menor a 10 seguira solicitandolo\n");
		scanf("%d", &y);
	} while (y <= 10);

	/* 
		Desde / hasta
	*/
	printf("\n\nFOR un numero menor a 10...\n");
	scanf("%d",&z);
	for (z=z; z<10; z++) {
		printf("Se imprime FOR %d\n", z);
	}
	return 0;
}
