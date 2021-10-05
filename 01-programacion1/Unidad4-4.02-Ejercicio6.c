/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
/*              RECURSIVIDAD                 */
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

/*
	Ejercicio 6: 
	Realizar un subprograma que permita determinar cuántas 
	letras ‘A’ o ‘a’ hay en un string de n caracteres.
*/

char string[40] = "";
char letraenposicion[1] = "";

int contador=0;
int validoletra=1;
int n;

void cuentoletras(n) {
	// Copio posicion de string en letra a validar
	letraenposicion[0] = string[n];
	//printf("Imprimo letraenposicion [%c]\n ", string[n]);
	// Valido letra en posicion contra A - a
	if((validoletra=strcmp(letraenposicion, "A"))==0){
	    sumoconteo();
	} else if ((validoletra=strcmp(letraenposicion, "a"))==0){
		sumoconteo();
	}
	// Verifico el largo del string e ingreso en recursion.
	if (n < strlen(string))
		printf("Imprimo posicion [%c]\n ", string[n]),
		n++,
		// Llama a la misma funcion con valorn n+1
		cuentoletras(n);
}

sumoconteo() {
	// Adiciono uno a el contador de letras A / a
	contador++;
}

int main()  
{
	printf("Ingrese palabra: ");
	scanf("%s", &string);
	// Llama a la funcion cuentoletras
	cuentoletras(0);
	printf("------------------------------------\n");
	printf("String: %s\n", string);
	printf("El numero de letras a / A es = %d\n", contador);

    return 0;
} 
