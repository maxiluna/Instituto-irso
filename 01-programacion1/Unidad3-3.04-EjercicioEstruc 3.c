/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
/*              ESTRUCTURAS                  */
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
	Ejercicio 3: 
	Realizar un programa que permita, dado un vector A de
	estructuras/registros, cuyos campos son: 
		producto (cadena de caracteres [10]), 
		código (entero) y 
		precio (real); 
	obtener un nuevo vector B de
	estructuras/registros que contengan sólo el código y el precio del vector A.
*/

struct
{
	char producto[10];
	int codigo;
	float precio;
} vectorA, vectorB;

void getproducto() {
	int contador;
	contador = 0;
	do {
		if (contador==0){
			contador += 1;
			printf("\nEscriba un Producto: ");
			gets(vectorA.producto);
		} else {
			printf("\nNombre de producto muy largo, vuelva a ingresarlo: ");
			gets(vectorA.producto);
		}
	} while (strlen(vectorA.producto) > 10);
}

int main() {
	
	/* Ingreso de datos */
	getproducto();
	printf("Ingrese codigo (numero entero):");
	scanf("%i", &vectorA.codigo);
	printf("Ingrese precio (numero real):");
	scanf("%f", &vectorA.precio);

	/* Obtengo vectorB en base a vectorA */
	vectorB.codigo = vectorA.codigo;
	vectorB.precio = vectorA.precio;

	/* Impresion de datos */
	printf("\nDatos de VectorA\n");
	printf("- Nombre producto: %s \n", vectorA.producto);
	printf("- Codigo: %d \n", vectorA.codigo);
	printf("- Precio: %f \n", vectorA.precio);

	printf("\n------------------\n");

	printf("\nDatos de VectorB\n");
	printf("- Nombre producto: %s \n", vectorB.producto);
	printf("- Codigo : %d \n", vectorB.codigo);
	printf("- Precio: %f \n", vectorB.precio);

	return 0;
}

