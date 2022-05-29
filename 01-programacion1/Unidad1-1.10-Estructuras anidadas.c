/*********************************************/
/* Materia: Programacion 1	                 */
/*                                           */
/* Descripción: ESTRUCTURAS                  */
/*              ANIDADAS                     */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

#include <stdio.h>

int main()
{
	int x, y, z, j;
	
	/* 
		IF anidado
		Verifico que sea divisible por 2
		Si es divisible por 2, verifico si es mayor a 10
	*/
	printf("\nWHILE: Ingrese un numero\n");
	scanf("%i", &x);
	if (x % 2 == 0) {
			printf("\nIF ANIDADO: El numero %d es divisible por 2\n", x);
			if (x > 10){
				printf("\nIF ANIDADO: El numero %d es mayor a 10\n", x);
				}
		} else {
			printf("\nIF ANIDADO: El numero %d NO es divisible por 2\n", x);
		}
	
	/* 
		DO WHILE / IF anidado
	*/

	do {
		printf("\nDO WHILE ANIDADO: Mientras ingrese un menor a 100 seguira solicitandolo\n");
		scanf("%d", &y);
		if (y % 2 == 0){
			printf("\nIF ANIDADO: El numero %d es divisible por 2\n", y);
		} else {
			printf("\nIF ANIDADO: El numero %d NO es divisible por 2\n", y);
		}
	} while (y <= 100);
	printf("\nDO WHILE ANIDADO: Salida del codigo\n");

	/* 
		FOR anidado 
	*/
	printf("\n\nFOR elegir un numero menor a 10...\n");
	scanf("%d",&z);
	for (z=z; z<10; z++) {
		for (j=z; j<10; j++) {
			printf("Se imprime FOR ANIDADO %d\n", j);
		}
		printf("Se imprime FOR %d\n", z);
	}
	return 0;
}
