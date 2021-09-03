/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: ESTRUCTURAS                  */
/*              DE DATOS.                    */
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
#include <string.h>

main(){
	/* 
	1 - División de enteros se realice en coma flotante
	*/
	
	int x1=5,y1=2;
	float f1;
	printf("%d %d", x1, y1);
	f1 = (float)x1/y1;
	printf("\n%f", f1);
	printf("\n------------------ 1 ------------------");

	/* 
	2 - Flotante se convierte a entero
	*/

	float a2 = 5.25;
	int b2;
	b2 = (int)a2; /*En este caso, la variable b queda cargada con el valor 5*/
	printf("\n%d", b2);
	printf("\n%f", b2);
	printf("\n------------------ 2 ------------------");
	
	/* 
	3 - División de enteros se realice en coma flotante
	*/
	
	int x3=7, y3=5 ;
	float z3;
	z3 = (float)x3/(float)y3; /*En muchos compiladores, z queda cargada con el valor 1*/
	printf("\n%f", z3);
	printf("\n------------------ 3 ------------------");

	/* 
	4 - Tipos definidos por el programador
		Enumeración
	*/
	
	enum disco { diskette, duro, cd=250, dvd, cinta };
	printf("\n%d \n", cd);
	
	enum disco2 { diskette2=0, duro2=1, cd2=250, dvd2=251, cinta2=252 };
	printf("%d %d %d %d %d \n", diskette2, duro2, cd2, dvd2, cinta2);
	printf("\n------------------ 4 ------------------");

	/* 
	5 - Tipos definidos por el programador
		TIPO STRING (Cadena de caracteres)
	*/
	
	char hola51 [5] = { 'm', 'a', 'x', 'i', 0 };

	printf ( "\nHola %s", hola51 );
	
	char hola52 [5] = "maxi";

	printf ( "\nHola %s", hola52 );

	char hola53 [5];
	hola53[0] = 'm';
	hola53[1] = 'a';
	hola53[2] = 'x';
	hola53[3] = 'i';
	hola53[4] = 0;
	
	printf ( "\nHola %s", hola53 );
	printf("\n------------------ 5 ------------------");
	

	/* 
	6 - Tipos definidos por el programador
		TIPO STRING (Cadena de caracteres)
	*/
	

	/* 
	PAGINA 91
	*/
	return 0;
}
