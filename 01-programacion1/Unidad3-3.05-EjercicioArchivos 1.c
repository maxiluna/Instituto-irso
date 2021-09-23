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
	Ejercicio 1: Dado un archivo de registros de tres campos (legajo: entero;
	sueldo: real; adicional: real), realizar un programa que permita actualizar el
	archivo, de modo que el sueldo sea incrementado en 0.5 veces el adicional. 
	Los sueldos que se deben modificar son aquellos que cumplan con alguna de
	las siguientes condiciones: 
		-Legajo entre 1 y 5454, y el sueldo menor a $350. 
		-Legajo entre 6000 y 9800, y el adicional sea menor a $200. 
		-Legajo mayor a 15300.
*/

#define MAX_LEN 256

int main(void)
{
    FILE* fp;
    fp = fopen("Unidad3-3.05-EjercicioArchivos 1.txt", "r");
    if (fp == NULL) {
      perror("Error: ");
      return 1;
    }

    char buffer[MAX_LEN];    
    // -1 to allow room for NULL terminator for really long string
    while (fgets(buffer, MAX_LEN - 1, fp))
    {
        // Remove trailing newline
        buffer[strcspn(buffer, "\n")] = 0;
        printf("%s\n", buffer);
    }

    fclose(fp);
    return 0;
}
