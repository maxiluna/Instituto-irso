/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1                                  */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1;

import java.util.Scanner;

public class Unidad1Clase0401 {
	/*
	Realizar un programa que lea por teclado 20 valores. Que sólo tome
	valores entre 2 y 97, y que si es mayor o igual de 50 los vaya sumando, y
	en caso que sea menor los vaya restando cargando el resultado dentro de
	una variable llamada “resultado”.
	 */
	public static void main(String[] args) {
		int valor, cantidad, resultado = 0;
		for (cantidad = 1; cantidad <= 20; cantidad++) {
			Scanner leer = new Scanner(System.in);
			System.out.println(" - Posicion : " + cantidad + " - Ingrese un valor entre 2 y 97");
			valor = leer.nextInt();
			// Valido si valor suma o resta
			if ((valor >= 2 && valor <= 97) && valor >= 50) {
				resultado = resultado + valor;
				System.out.println(" -- Valor mayor a 50, Suma\nResultado parcial : " + resultado);
			} else if ((valor >= 2 && valor <= 97) && valor < 50){
				resultado = resultado - valor;
				System.out.println(" -- Valor menor a 50, Resta\nResultado parcial : " + resultado);
			} else {
				System.out.println(" -- Valor no comprendido en rango, descartado");
			}
		}
		// Resultado final
		System.out.println("Resultado final: " + resultado);
	}
}
