/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
/*              ARCHIVOS                     */
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

/*
	Ejercicio 2: 
	Realizar un procedimiento al que dado un archivo de reales, 
	devuelva la suma de todos los elementos del mismo. 
	El resultado de la operación debe devolverse en una variable.
*/

#define MAX_LEN 256
char buffer[MAX_LEN];
float sumaelemento;

sumoelemento(float resultado, float elemento)
{
	sumaelemento = resultado + elemento;
	printf("- Sumo %.2f + %.2f \n", resultado, elemento);
   	printf("-- Subtotal: %.2f\n", sumaelemento);
	return sumaelemento;
}

int main(void)
{
    FILE* fp;
    fp = fopen("Unidad3-3.05-EjercicioArchivos 2.txt", "r");
    if (fp == NULL) {
      perror("Error: ");
      return 1;
    }
	printf("----------- Imprimo datos de archivo TXT -------- \n");
	int numerodelinea = 0;
    while (fgets(buffer, MAX_LEN - 1, fp))
    {
	        // Pasa a proxima linea
	        buffer[strcspn(buffer, "\n")] = 0;
	        numerodelinea +=1;
	        printf("Valor Linea de archivo %i : %s\n", numerodelinea, buffer);
	        // Convierto String -> atoi (Int) - atof (Float)
    		float numero=atof(buffer);
    		sumoelemento(sumaelemento, numero);
	 	}
    fclose(fp);
    printf("\n");
    printf("----------- Imprimo Suma Final -------- \n");
    printf("Total: %.2f", sumaelemento);
    return 0;
}
