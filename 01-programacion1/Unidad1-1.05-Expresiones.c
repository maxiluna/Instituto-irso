/*********************************************/
/* Materia: Programacion 1	             */
/*                                           */
/* Descripción: EXPRESIONES		     */
/*              TIPOS Y OPERADORES.          */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

#include <math.h>
#include <stdio.h>

int main()
{
	int numero1=1;
	int numero2=2;
	int numero3=3;
	int numero4=4;
	int numero5=5;
	int numero6=6;
	int numero7=7;
	int numero8=8;
	int numero9=9;	
	int numero10=10;
	int suma, resta, multiplicacion, division, num1, num2, num3, num4;
	
	/* Operadores aritmeticos: 
   		+ , - , * , / , ^
   */
   
	num1 = numero1;
	num2 = numero2;
	suma = num1 + num2;
	printf( "\n   La sumatoria de %d mas %d es: ", num1, num2 );
	printf("%d", suma);

	num1 = numero8;
	num2 = numero4;
	resta = num1 + num2;
	printf( "\n   La resta de %d menos %d es: ", num1, num2 );
	printf("%d", resta);

	num1 = numero7;
	num2 = numero3;
	multiplicacion = num1 * num2;
	printf( "\n   La multiplicacion de %d por %d es: ", num1, num2 );
	printf("%d", multiplicacion);

	num1 = numero10;
	num2 = numero2;
	division = num1 / num2;
	printf( "\n   La division de %d sobre %d es: ", num1, num2 );
	printf("%d", division);

   /* Operadores relacionales: 
   		< , > , == , >= , <= 
   */

	num1 = numero10;
	num2 = numero2;
    if(num1<num2){
        printf("\n\n   La relacion: %d < %d , es VERDADERA", num1, num2);
    }else{
        printf("\n\n   La relacion: %d < %d , es FALSA", num1, num2);
	}

	num1 = numero10;
	num2 = numero2;
    if(num1>num2){
        printf("\n   La relacion: %d > %d , es VERDADERA", num1, num2);
    }else{
        printf("\n   La relacion: %d > %d , es FALSA", num1, num2);
	}

	num1 = numero7;
	num2 = numero7;
    if(num1==num2){
        printf("\n   La relacion: %d == %d , es VERDADERA", num1, num2);
    }else{
        printf("\n   La relacion: %d == %d , es FALSA", num1, num2);
	}

	num1 = numero9;
	num2 = numero3;
    if(num1>=num2){
        printf("\n   La relacion: %d >= %d , es VERDADERA", num1, num2);
    }else{
        printf("\n   La relacion: %d >= %d , es FALSA", num1, num2);
	}

	num1 = numero4;
	num2 = numero4;
    if(num1<=num2){
        printf("\n   La relacion: %d <= %d , es VERDADERA", num1, num2);
    }else{
        printf("\n   La relacion: %d <= %d , es FALSA", num1, num2);
	}

   /* Operadores lógicos: 
		Y (and), O (or), NO (not).
		VERDADERO == 1 y FALSO == 0
   */

    int operando1, operando2;
    int op1AND, op1OR, op2AND, op2OR, op3AND, op3OR, op4AND, op4OR;
    
	printf("\n\n   Operando 1   Operando 2   AND   OR");

    operando1 = 1; 		/* VERDADERO */
  	operando2 = 1; 		/* VERDADERO */
    if ((operando1 == 1 ) && (operando2 == 1)) {
        op1AND = 1;
    } else {
    	op1AND = 0;
	}
    if ((operando1 == 1 ) || (operando2 == 1)) {
        op1OR = 1;
    } else {
    	op1OR = 0;
	}
    printf("\n       V            V         %d    %d", op1AND, op1OR);

    operando1 = 1; 		/* VERDADERO */
  	operando2 = 0; 		/* FALSO */
    if ((operando1 == 1 ) && (operando2 == 1)) {
        op1AND = 1;
    } else {
    	op1AND = 0;
	}
    if ((operando1 == 1 ) || (operando2 == 1)) {
        op1OR = 1;
    } else {
    	op1OR = 0;
	}
    printf("\n       V            F         %d    %d", op1AND, op1OR);


    operando1 = 0; 		/* FALSO */
  	operando2 = 1; 		/* VERDADERO */
    if ((operando1 == 1 ) && (operando2 == 1)) {
        op1AND = 1;
    } else {
    	op1AND = 0;
	}
    if ((operando1 == 1 ) || (operando2 == 1)) {
        op1OR = 1;
    } else {
    	op1OR = 0;
	}
    printf("\n       F            V         %d    %d", op1AND, op1OR);

    operando1 = 0; 		/* FALSO */
  	operando2 = 0; 		/* FALSO */
    if ((operando1 == 1 ) && (operando2 == 1)) {
        op1AND = 1;
    } else {
    	op1AND = 0;
	}
    if ((operando1 == 1 ) || (operando2 == 1)) {
        op1OR = 1;
    } else {
    	op1OR = 0;
	}
    printf("\n       F            F         %d    %d", op1AND, op1OR);
    printf("\n   Siendo 0 (FALSO) y 1 (VERDADERO) ");

   return 0;
}
