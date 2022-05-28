/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 8             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase8;

import java.util.Scanner;

public class Unidad1C8Ejercicio1 {
	/* Enunciado Ejercicio 1:
	Realizar un programa que permita leer de teclado y 
	luego imprimir los contenidos de una variable tipo struct 
	cuyos campos son: nombre (cadena de caracteres [10]), 
	legajo (entero), dependencia de trabajo (entero), 
	horas trabajadas (real).
	 */
	public static void main(String[]args) {
		
		Scanner leer = new Scanner(System.in);
		DataU1C8E1 datos[] = new DataU1C8E1[2];
		
		String nombre ="";
		int legajo=0;
		int dependencia= ' ';
		float horas = 0;
		
		for (int x=0; x<datos.length; x++) {
			System.out.println("Registro Nº: " + (x+1));
			System.out.print(" Ingresa nombre : ");
			nombre = leer.nextLine();
			System.out.print(" Ingresa Legajo : ");
			legajo= leer.nextInt();
			System.out.print(" Ingresa dependencia : ");
			dependencia= leer.nextInt();
			System.out.print(" Ingresa horas trabajadas : ");
			horas = leer.nextFloat();
			leer.nextLine();
			datos[x] = new DataU1C8E1(nombre, legajo, dependencia, horas);
		}

		for (int x=0; x<datos.length; x++) {
			System.out.println(
					datos[x].getNombre()
					+" "+
					datos[x].getLegajo()
					+" "+
					datos[x].getDependencia()
					+" "+
					datos[x].getHoras()
					);
		}
	}
}
