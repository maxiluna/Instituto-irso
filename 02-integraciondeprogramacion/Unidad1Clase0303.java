/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1                                  */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1;

import java.util.Scanner;

public class Unidad1Clase0303 {
	/*
	Desarrollar el código para poder leer dos String desde el teclado,
	concatenarlo (unirlos) y luego imprimirlo por pantalla. 
	 */
	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		System.out.println("Ingrese primer palabra : ");
		String palabra1 = scanner.next();
		System.out.println("Ingrese segunda palabra : ");
		String palabra2 = scanner.next();
		System.out.println("El resutlado de Los String concatenados es : ");
		System.out.println(palabra1+palabra2);
		scanner.close();
		
	}

}
