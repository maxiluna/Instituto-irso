/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 7             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase7;

import java.util.Scanner;

public class Unidad1C7Ejercicio3 {
	/* Enunciado Ejercicio 3:
	Realizar un programa que permita imprimir las componentes de 
	un vector A de longitud g cuyos elementos son caracteres. 
	La impresión deberá indicar el índice del vector y el valor 
	de la componente. Los índices son enteros y g=8.
	 */	
	public static void main(String[] args) {
		int g=8;
		String A[];
		A = new String[g];
		// Carga datos por teclado
		for (int x=0; x<A.length; x++) {
			System.out.print("Ingrese valor para A["+x+"] : ");
			Scanner leer = new Scanner(System.in);
			A[x] = leer.next();
		}
		// Imprimo elementos
		for (int x=0; x<A.length; x++) {
			System.out.println("El valor para A["+x+"] es : "+ A[x]);
		}
	}
}
