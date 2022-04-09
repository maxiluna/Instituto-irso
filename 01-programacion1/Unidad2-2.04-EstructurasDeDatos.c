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

	printf ( "\nHola 1 %s", hola51 );
	
	char hola52 [5] = "maxi";

	printf ( "\nHola 2 %s", hola52 );

	char hola53 [5];
	hola53[0] = 'm';
	hola53[1] = 'a';
	hola53[2] = 'x';
	hola53[3] = 'i';
	hola53[4] = 0;
	
	printf ( "\nHola 3 %s", hola53 );
	printf("\n------------------ 5 ------------------");
	

	/* 
	6 - Biblioteca <string.h>
			strcpy ( c1, c2 ); Copia c2 en c1
			strcat ( c1, c2 ); Añade c2 al final de c1 (concatena)
			int strlen ( cadena ); Devuelve la longitud de la cadena
			int strcmp ( c1, c2 ); Devuelve cero si c1 es igual a c2; no-cero en caso contrario
	*/
	
	char completo6 [80];
	char nombre6[32] = "Maximiliano";
	char apellidos6 [32] = "Luna";
	
	strcpy ( completo6, nombre6 ); /* Copia <- "Maximiliano" */
	printf ( "\nEl nombre completo es %s\n", completo6 );
	strcat ( completo6, " "); /* Añade <- Espacio vacio */
	strcat ( completo6, apellidos6 ); /* Añade <- "Luna" */
	printf ( "\nEl nombre completo es %s", completo6 );
	printf("\n------------------ 6 ------------------");


	/* 
	7 - Biblioteca <stdio.h>
			Emplear gets, puts
	*/

	/* Funcion gets */
	char nombre7 [80];
	printf ( "\n¿Cual es su nombre? " );
	gets ( nombre7 );
	printf ( "Parece que su nombre es %s\n", nombre7 );

	/* Funcion puts */
	puts("Esto es un puts");
	puts("ingresado en lenguaje C");
	
	/* Funcion gets y puts */	
	char cadena7[50];
	puts("\nEscriba un texto:");
	gets(cadena7);
	puts("El texto escrito es:");
	puts(cadena7);
	
	/* Funcion fgets putchar */
	
	char cadena_fuente7 [80];
	char cadena_destino7 [80];
	int n7 = 10;
	fgets ( nombre7, n7, stdin );
	printf("\nImprimo FGETS: %s\n", nombre7);

	putchar('S');
	putchar('o');
	putchar('y');
	putchar(32);
	putchar('M');
	putchar('a');
	putchar('x');
	putchar('i');
	putchar('\n');
	
	int c7;
	c7 = getchar(); /* getchar() no devuelve nada hasta que se presiona ENTER */
	putchar(c7);

	printf("\n------------------ 7 ------------------");
		
	/*PAGINA 101*/
	return 0;
}
