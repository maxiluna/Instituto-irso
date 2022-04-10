/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: OPERADORES                   */
/*              ARITMETICOS.                 */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

#include <stdio.h>

main(){
	/* 
	1 - Ooperadores aritméticos
	*/
	
	int x,y,z;
	x=0;
	z=1;
	y=1;
	x = z + y;
	printf("Operacion 1: %d", x);

	x = ++x +1;
	printf("\nOperacion 2: %d", x);
	
	x = --x;
	printf("\nOperacion 3: %d", x);
	
	x = x/3;
	printf("\nOperacion 4: %d", x);
	
	x *= 23;
	printf("\nOperacion 5: %d", x);

	printf("\n------------------ 1 ------------------");

	/* 
	2 - Ooperadores de Comparación
	*/

	int x2=5,y2=10,z2=5;
	
	printf("\nEl valor de x2 es: %d", x2);
	printf("\nEl valor de y2 es: %d", y2);
	printf("\nEl valor de z2 es: %d", z2);
	if(x2<y2){
        printf("\n   La relacion: %d < %d , es VERDADERA", x2, y2);
    }else {
        printf("\n   La relacion: %d < %d , es FALSA", x2, y2);
	}
	
	if(y2>z2){
        printf("\n   La relacion: %d > %d , es VERDADERA", y2, z2);
    }else {
        printf("\n   La relacion: %d > %d , es FALSA", y2, z2);
	}
	

    if (x2 == z2) {
        printf("\n   La relacion: %d == %d , es VERDADERA", x2, z2);
    } else {
        printf("\n   La relacion: %d == %d , es FALSA", x2, z2);
	}

	printf("\n------------------ 2 ------------------");

	/* 
	3 - Operadores lógicos
	*/
	
	int x3=5,y3=10,z3=5;
	
	printf("\nEl valor de x2 es: %d", x3);
	printf("\nEl valor de y2 es: %d", y3);
	printf("\nEl valor de z2 es: %d", z3);
	
	if ((x2 == 5 ) && (x3 == z3)) {
        printf("\n   La relacion: (%d == 5) && (%d == %d), es VERDADERA", x2, x3, z3);
    } else {
        printf("\n   La relacion: (%d == 5) && (%d == %d), es FALSA", x2, x3, z3);
	}
    if ((y3 > x3 ) || (x3 > y3)) {
        printf("\n   La relacion: (%d > %d) || (%d > %d), es VERDADERA", y3, x3, x3, y3);
    } else {
        printf("\n   La relacion: (%d > %d) || (%d > %d), es FALSA", y3, x3, x3, y3);
	}

	printf("\n------------------ 3 ------------------");
	
	/* 
	4 - Orden de precedencia
	
	Es necesario ser cuidadosos con el significado de expresiones tales como 
		a + b * c, 
	dependiendo de lo que se desee hacer
		(a + b) * c
			o
		a + (b * c)
	Todos los operadores tienen una prioridad, los operadores de mayor prioridad
	son evaluados antes que los que tienen menor prioridad. Los operadores que
	tienen la misma prioridad son evaluados de izquierda a derecha, por lo que:
		a - b - c
	es evaluado como
		(a - b) - c
		
	Prioridad Operador(es)
	Más alta 
		( ) [ ] ->
		 ! ~ ++ -- - (tipo) * & sizeof * / %
		  + - << >>
		   < <= > >=
		    == != &
		     ^
		      |
		       &&
		        ||
		         ?= += -= *= /= 
		          ,
	Más baja
	*/
	
	/*PAGINA 105*/
	return 0;
}
