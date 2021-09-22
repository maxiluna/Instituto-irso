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
#include <stdlib.h>

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
	*/

	printf("\n------------------ 4 ------------------\n");

	/* 
		UNIONES:
	*/

	printf("\n------------------ 5 ------------------\n");
				
	/*PAGINA 130*/
	return 0;
}
