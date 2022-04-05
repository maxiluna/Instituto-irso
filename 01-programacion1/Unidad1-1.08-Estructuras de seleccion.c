/*********************************************/
/* Materia: Programacion 1	                 */
/*                                           */
/* Descripción: ESTRUCTURAS DE               */
/*              DE SELECCIÓN                 */
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
	int x, y, z;
	
	/* 
		Simple:
		La verificacion de datos es unica 
		para cuando el valor es mayor a cero.
	*/
	
	printf("\nIngrese un numero, a este se adicionara un valor de 10\n");
	scanf("%i", &x);
	if (x>0){
		x += 10;
		printf("El numero final es: %d", x);
	}
	/* 
		Doble:
		La verificacion de datos es dual.
	*/
	printf("\n\nIngrese un numero, se verificara si es menor o mayor igual a 10\n");
	scanf("%i", &y);
	if (y>=10){
		printf("El numero %d es mayor o igual a 10", y);
	} else {
		printf("El numero %d es menor a 10", y);
	}
	
	/* 
		Multiple:
	*/
	
	printf("\n\nIndique que nota obtuvo...\n");
	scanf("%i",&z);

	switch(z) {
		case 1:
			printf("En suspenso, a reevaluar");
			break;
		case 2:
			printf("En suspenso, a reevaluar");
			break;
		case 3:
			printf("En suspenso, a reevaluar");
			break;
		case 4:
			printf("En suspenso, a reevaluar");
			break;
		case 5:
			printf("Aprobado");
			break;
		case 6:
			printf("Aprobado");
			break;
		case 7:
			printf("Notable");
			break;
		case 8:
			printf("Notable");
			break;
		case 9:
			printf("Superior");
			break;
		case 10:
			printf("Sobresaliente");
			break;
		default:
			printf("No es una nota valida");
			break;
	}
	return 0;
}
