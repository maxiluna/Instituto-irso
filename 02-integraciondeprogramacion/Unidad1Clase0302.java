/* Materia: Integraci�n de Programaci�n      */
/* Descripci�n: Desarrollo en Eclipse        */
/* Unidad 1                                  */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1;

import java.util.Scanner;

public class Unidad1Clase0302 {
	/*
	Desarrollar el c�digo para leer desde teclado tres variables del tipo
	flotantes, luego realizar el siguiente c�lculo e imprimir el resultado por
	pantalla. resultado = (primeraVariable * segundaVariable) /
	terceraVariable
	 */
	public static void main(String[] args) {

		float primeraVariable, segundaVariable, terceraVariable, resultado;
		
		Scanner leer = new Scanner(System.in);
		
		System.out.println("Introduce el primer n�mero:");
		primeraVariable = leer.nextFloat();
		System.out.println("Introduce el segundo  n�mero:");
		segundaVariable = leer.nextFloat();
		System.out.println("Introduce el tercer n�mero:");
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
