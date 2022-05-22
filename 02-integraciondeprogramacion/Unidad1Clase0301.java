/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1                                  */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1;

public class Unidad1Clase0301 {
	/*
	Desarrollar el código para lograr incrementar una variable desde el 1 hasta
	al 199 con lo visto en la clase anterior. Durante cada ciclo, multiplicar el
	valor del índice por sí mismo e imprimir el resultado total en pantalla al
	finalizar. Utilizar variables enteras.
	 */
	public static void main(String[] args) {

		
		int variablenumerica = 1, resultado;
		
		while(variablenumerica<200) {
			resultado = variablenumerica * variablenumerica;
			System.out.println("El Indice es : " + variablenumerica);
			System.out.println("El resultado es : " + resultado);
			variablenumerica++;
		}
	}

}
