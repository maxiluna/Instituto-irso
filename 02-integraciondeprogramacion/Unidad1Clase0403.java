/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1                                  */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1;

import java.util.Scanner;

public class Unidad1Clase0403 {
	/*
	Realizar un programa que lea de teclado valores entre 32 y 120, y los vaya
	sumando uno a uno dentro de la variable “sumatoria”. En el caso que sea
	fuera de ese rango que no realice ninguna operación. Y en caso que
	ingrese el valor cero “0”, debe finalizar el programa.
	 */
	public static void main(String[] args) {
		int valor=0, sumatoria=0, resultado=0;
		resultado = validador(valor, sumatoria);
		salida(resultado);
	}
	
	public static int validador(int valor, int sumatoria) {
		do {
			// 
			System.out.println("Ingrese un valor entre 32 y 120");
			Scanner leer = new Scanner(System.in);
			valor = leer.nextInt();
			// 
			if ((valor >= 32) && (valor <= 120)) {
				sumatoria = sumatoria + valor;
				System.out.println("Sumatoria = " + sumatoria);
			} else {
				System.out.println("Valor no cumple requerimiento");
			}
		} 
		while (valor != 0);
		return(sumatoria);
		
	}
	public static void salida(int resultado) {
		System.out.println("Sumatoria Final : " + resultado);
		System.out.println("Fin de ejecucion");
	}
	
	
}
