/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 7             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase7;

import java.util.Scanner;

public class Unidad1C7Ejercicio4 {
	/* Enunciado Ejercicio 4:
	Realizar un programa que permita obtener el producto de 
	dos vectores A y B componente a componente, guardando 
	el resultado en uno nuevo.
	 */	
	public static void main(String[] args) {
		int longitud=3;
		int A[], B[], C[];
		A = new int[longitud];
		B = new int[longitud];
		C = new int[longitud];
		// Carga datos por teclado
		for (int x=0; x<A.length; x++) {
			System.out.print("Ingrese valor para A["+x+"] : ");
			Scanner leer = new Scanner(System.in);
			A[x] = leer.nextInt();
			System.out.print("Ingrese valor para B["+x+"] : ");
			B[x] = leer.nextInt();
		}
		// Producto de vector A y B
		for (int x=0; x<A.length; x++) {
			C[x] = A[x] * B[x];
		}
		// Imprimo elementos
		for (int x=0; x<A.length; x++) {
			System.out.println("El valor de A["+x+"]="+A[x]+" * B["+x+"]="+B[x]+" = C["+x+"]="+C[x]+"");
		}
	}
}
