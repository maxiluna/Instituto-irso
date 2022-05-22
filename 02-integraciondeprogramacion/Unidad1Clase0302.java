/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1                                  */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1;

import java.util.Scanner;

public class Unidad1Clase0302 {
	/*
	Desarrollar el código para leer desde teclado tres variables del tipo
	flotantes, luego realizar el siguiente cálculo e imprimir el resultado por
	pantalla. resultado = (primeraVariable * segundaVariable) /
	terceraVariable
	 */
	public static void main(String[] args) {

		float primeraVariable, segundaVariable, terceraVariable, resultado;
		
		Scanner leer = new Scanner(System.in);
		
		System.out.println("Introduce el primer número:");
		primeraVariable = leer.nextFloat();
		System.out.println("Introduce el segundo  número:");
		segundaVariable = leer.nextFloat();
		System.out.println("Introduce el tercer número:");
		terceraVariable = leer.nextFloat();
		
		// Multiplicamos
		System.out.println("Resultado Parcial = primeraVariable : " + primeraVariable + " * SegundaVariable : " + segundaVariable);
		resultado = primeraVariable * segundaVariable;
		System.out.println("Resultado Parcial = " + resultado);
		
		// Dividimos
		System.out.println("Resultado Final = Resultado Parcial : " + resultado + " / terceraVariable : " + terceraVariable);
		resultado = resultado / terceraVariable;
		System.out.println("Resultado Parcial = " + resultado);

		leer.close();
		
	}

}
