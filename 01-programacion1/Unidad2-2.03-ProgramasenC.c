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
		DO WHILE
	*/
	int x4;
	x4 = 0;
	
	do {
		printf ( "El valor de i es ahora %d\n", x4 );
		x4 = x4 + 1;
		} while (x4 < 5);
	



	int opc;
	printf("1. Derivadas\n");
	printf("2. Limites\n");
	printf("3. Integrales\n");
	
	do {
		printf(" Teclear una opcion: ");
		scanf("%d", &opc);
		switch(opc)	{
			case 1:
				printf("\tOpcion 1 seleccionada\n\n");
				break;
			case 2:
				printf("\tOpcion 2 seleccionada\n\n");
				break;
			case 3:
				printf("\tOpcion 3 seleccionada\n\n");
				break;
			default:
				printf("\tOpcion no disponible\n\n");
				break;
				}
		} while( opc != 1 && opc != 2 && opc != 3);




	int pato;
	for (pato = 3 ; pato < 13 ; pato = pato + 1) 
		{
		switch (pato) {
			case 3 : printf("pato vale tres\n"); break;
			case 4 : printf("pato vale cuatro\n"); break;
			case 5 :
			case 6 :
			case 7 :
			case 8 :
				printf("El valor de pato está entre 5 y 8\n");
				break;
			case 12 :
				printf("pato vale doce\n");
				break;
			default : printf("Valor indefinido en una instrucción"
				"case\n"); break;
					} /* Fin de la instrucción switch */
		} /* Fin del ciclo */


	/*
		BREAK - CONTINUE
	*/
	
	// Muestra en pantalla los números del 0 al 10
	int t;
	for(t=0; t<100; t++) {
		printf("%d ", t);
		if (t==10) break;
	}
	
	// El siguiente programa visualizará sólo los números pares
	
	int x;
	for( x=0; x<20; x++) {
		if (x%2)
			continue;
		printf("%d ",x);
	}
	
	/* 
	Se leen valores enteros y se procesan de acuerdo a las
	siguientes condiciones: Si el valor que se lee es negativo, se desea imprimir un
	mensaje de error y se abandona el ciclo. Si el valor es mayor a 100, se ignora y
	se continúa leyendo, y si el valor es cero, se desea terminar el ciclo.
	*/
	
	int valor;
	while( scanf("%d", &valor) == 1 && valor != 0) {
		if ( valor<0 ) {
			printf("Valor no valido\n");
			break;
			/* Salir del ciclo */
		}
		if ( valor>100) {
			printf("Valor no valido\n");
			continue;
			/* Pasar al principio del ciclo nuevamente */
		}
		printf("Se garantiza que el valor leído está entre 1 y 100");
	}
	
	// Combinando ambos conceptos
	
	int xx2;
	for(xx2 = 5 ; xx2 < 15 ; xx2 = xx2 + 1) {
		if(xx2 == 8)
		break;
		printf("Este bucle se ejecuta cuando xx es menor de 8,"
				"ahora xx es %d\n", xx2);
		}
	for(xx2 = 5 ; xx2 < 15 ; xx2 = xx2 + 1) {
		if(xx2 == 8)
		continue;
		printf("Ahora xx es diferente de 8, xx tiene el valor de %d\n", xx2);
	}
	
	return 0;
}
