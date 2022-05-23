/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 7             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase7;

import java.util.Scanner;

public class Unidad1C7Ejercicio6 {
	/* Enunciado Ejercicio 6:
	Realizar un programa que permita obtener la suma de dos 
	matrices X y J de dimensión axb (a=3 y b=4). Los elementos 
	de la matriz son reales. El resultado debe ser impreso. 
	Realizar la suma componente a componente.
	 */	
	public static void main(String[] args) {
		float X[][], J[][];
		int a=3, b=4;
		X = new float[a][b];
		J = new float[a][b];
		
		// Carga datos por teclado
		for (int x=0; x<a; x++) {
			for (int y=0; y<b; y++) {
				Scanner leer = new Scanner(System.in);
				System.out.print("Ingrese valor para X["+x+"]["+y+"] :");
				X[x][y] = leer.nextFloat();
			}
		}
		for (int x=0; x<a; x++) {
			for (int y=0; y<b; y++) {
				Scanner leer = new Scanner(System.in);
				System.out.print("Ingrese valor para J["+x+"]["+y+"] :");
				J[x][y] = leer.nextFloat();
			}
		}

		// Suma matrices X y J e imprime
		System.out.println("    [0]    [1]    [2]    [3]");
		for (int x=0; x<a; x++) {
			System.out.print("["+x+"]");
			for (int y=0; y<b; y++) {
				System.out.print(" "+(X[x][y]+J[x][y]) + "  ");
			}
			System.out.println();
		}
	}
}
