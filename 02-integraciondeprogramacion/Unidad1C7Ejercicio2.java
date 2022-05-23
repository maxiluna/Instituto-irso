/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 7             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase7;

import java.util.Scanner;

public class Unidad1C7Ejercicio2 {
	/* Enunciado Ejercicio 2:
	Realizar un programa que permita obtener e imprimir el resultado 
	de la suma de los elementos de un vector Z de longitud k, donde 
	los elementos del vector son reales (considerar k=5).
	 */	
	public static void main(String[] args) {
		float Z[], resultado=0;
		int k=5;
		Z = new float[k];
		// Carga datos por teclado
		for (int x=0; x<Z.length; x++) {
			System.out.print("Ingrese valor para Z["+x+"] : ");
			Scanner leer = new Scanner(System.in);
			Z[x] = leer.nextFloat();
		}
		// Sumo elementos
		for (int x=0; x<Z.length; x++) {
			resultado = resultado + Z[x];
		}
		System.out.println("El resultado es : "+ resultado);
	}
}
