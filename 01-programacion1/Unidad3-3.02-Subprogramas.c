/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: UTILIZACIÓN DE               */
/*              SUBPROGRAMAS.                */
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

float encontprom(int num1, int num2) {
	float promedio;
	promedio = (num1 + num2) / 2.0;
	return(promedio);
}


void cuadrados() {
	int contador;
	for( contador=1; contador<10; contador++)
		printf("%d\n",contador*contador);
}

void imp_rev(char s[]) {
	int t;
	for( t=strlen(s)-1; t>=0; t--)
	printf("%c",s[t]);
}

float enconprom(int tam, float lista[]) {
	int i;
	float suma = 0.0;
	for ( i=0; i<tam; i++)
	suma += lista[i];
	return(suma/tam);
}

typedef struct {
	int maxpasajeros;
} jet;

typedef struct {
	int capac_elev;
} helicoptero;

typedef struct {
	int maxcarga;
} avioncarga;

typedef union {
	jet jetu;
	helicoptero helicopterou;
	avioncarga avioncargau;
} transporteaereo;

typedef struct {
	int tipo;
	int velocidad;
	transporteaereo descripcion;
} un_transporteaereo;

int main() {
	
	/* 
		FUNCION:
	*/		
	int a=7, b=10;
	float resultado;
	resultado = encontprom(a, b);
	printf("Promedio=%f\n",resultado);

	printf("\n------------------ 1 ------------------\n");

	/* 
		FUNCION VOID:
	*/
	cuadrados();	
	
	printf("\n------------------ 2 ------------------\n");

	/* 
		FUNCIONES Y ARREGLOS:
	*/

	/* Impresion reversa de variable */
	char nombre[]="Facultad";
	imp_rev(nombre);

	/* Impresion reversa de variable */
	float numeros[]={2.3, 8.0, 15.0, 20.2, 44.01, -3.0, -2.9};
	printf("\nEl promedio de la lista es %f\n", enconprom(7,numeros) );	
	printf("\n------------------ 3 ------------------\n");

	/* 
		PROTOTIPOS DE FUNCIONES:
		
	Para declarar un prototipo de una función se indicará el tipo de dato que
	regresará la función, el nombre de la función y entre paréntesis la lista del tipo
	de los parámetros de acuerdo al orden que aparecen en la definición de la
	función. Por ejemplo:
	
	int longcad(char []);
	*/

	/* 
		UNIONES:
	
	Una unión es una variable la cual podría guardar (en momentos diferentes)
	objetos de diferentes tamaños y tipos
	*/
	
		/*
		typedef struct {
			int maxpasajeros;
		} jet;
		
		typedef struct {
			int capac_elev;
		} helicoptero;
		
		typedef struct {
			int maxcarga;
		} avioncarga;
		
		typedef union {
			jet jetu;
			helicoptero helicopterou;
			avioncarga avioncargau;
		} transporteaereo;
		
		typedef struct {
			int tipo;
			int velocidad;
			transporteaereo descripcion;
		} un_transporteaereo;
		
		*/

				
	/*PAGINA 130*/
	return 0;
}

