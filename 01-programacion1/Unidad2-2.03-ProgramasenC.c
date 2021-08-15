/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: INTRUCCIONES                 */
/*              BASICAS EN C.                */
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

int x;

main(){
	
	/*
		SCANF y su impresion por decision.
	*/
	printf ("Ingrese un valor\n");
	scanf ("%d", &x);
	if (x==1){
		printf ("uno \n\n");
	}else{
		printf ("Valor ingresado diferente de 1 %d \n\n", &x);
	}
	
	/*
		FOR
	*/
	int x1;
	// Desde 3 hasta cero (no inclusive).
	for(x1=3; x1>0; x1--){
		printf("x1=%d\n",x1);
	}
	
	// Desde 3 hasta cero (no inclusive).
	for(x1=1; x1<5; x1++){
		printf("Hoy\n");
	}
	
	
	int x2;
	for(x2 = 0 ; x2 < 6 ; x2 = x2 + 1){
		printf ( "El valor de x2 es %d\n", x2);
	}
	
	
	/*
		HASTA PAGINA 72.
	*/
	return 0;
}
