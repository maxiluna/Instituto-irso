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
		printf:
	*/
	printf( "Primera Linea C\n" );
	printf( "Segunda Linea C\n" );
	printf("Tercera Linea\n.Cuarta Linea\n..Quinta Linea\n...Sexta Linea\n\n");

	/* 
		asignacion de variables y tipos:
		printf
			%c caracteres
			%s cadena de caracteres
			%d enteros
			%f flotantes
	*/
	float varfloat1, varfloat2, varfloat3;
	int vara, varb, varc, vard, vare;
	char varletra1, varletra2;
	
	varfloat1 = 1.12;
	printf("%f \n", varfloat1);
	
	varfloat2 = 2.55;
	printf("%f \n", varfloat1+varfloat2);
	
	
	vara = 2;
	printf("%d \n", vara);
	varb = 5;
	printf("%d \n", vara+varb);
	vare = vard = varb;
	printf("%d \n", vare+vard);
	vare = vare+3*9+varb*33;
	printf("%d \n", vare);
	
	varletra1 = 'a';
	printf("%c \n", varletra1);
	
	varletra2 = 't';
	printf("%c %c \n\n", varletra1, varletra2);

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
	// Desde 0 hasta 6 (no inclusive)
	for(x2 = 0 ; x2 < 6 ; x2 = x2 + 1){
		printf ( "El valor de x2 es %d\n", x2);
	}
	
	/*
		WHILE
	*/
	
	int x3=1;
	while ( x3 < 12 ){
		printf("Linea número %d\n", x3);
		x3++;
	}
	
	int contadorwhile1;
	contadorwhile1 = 0;
	while (contadorwhile1 < 6){
		printf ("El valor del contadorwhile1 es %d\n", contadorwhile1);
		contadorwhile1 = contadorwhile1 + 1;
	}
	
	/*
		HASTA PAGINA 74.
	*/
	return 0;
}
