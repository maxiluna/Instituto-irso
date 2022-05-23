/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 7             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase7;

import java.util.Scanner;

public class Unidad1C7Ejercicio1 {
	/* Enunciado Ejercicio 1:
	Realizar un programa que permita hacer nulos (cargarles valor 0) 
	los elementos de un vector Q de enteros, con n componentes 
	(donde n es una constante que vale 10). O sea, al hacer un barrido 
	de lectura por un vector buscando el valor 10, el encontrarlo 
	reemplazarlo por el valor0 (nulo).
	 */	
	public static void main(String[] args) {
		int Q[], n=10;
		Q = new int [n];
		// Carga datos por teclado
		for (int x=0; x<Q.length; x++) {
			System.out.println("Ingrese valor para Q["+x+"]");
			Scanner leer = new Scanner(System.in);
			Q[x] = leer.nextInt();
		}
		// Valida valor de posicion e imprime
		for (int x=0; x<Q.length; x++) {
			if (Q[x]==10) {
				Q[x]=0;
				System.out.println("El valor reemplazado para Q["+x+"] es : "+Q[x]);
			} else {
				System.out.println("El valor ingresado para Q["+x+"] es : "+Q[x]);	
			}
		}
	}
}