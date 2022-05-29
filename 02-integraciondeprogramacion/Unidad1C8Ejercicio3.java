/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 8             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase8;

import java.util.Scanner;

public class Unidad1C8Ejercicio3 {
	/* Enunciado Ejercicio 3:
	Realizar un programa que permita, dado un vector A de 
	estructuras / registros, cuyos campos son: producto 
	(cadena de caracteres [10]), código (entero) y precio (real); 
	obtener un nuevo vector B de estructuras / registros que 
	contengan sólo el código y el precio del vector A.
	 */
	public static void main(String[]args) {
		
		Scanner leer = new Scanner(System.in);
		DataU1C8E3 vectorA[] = new DataU1C8E3[2];
		DataU1C8E3 vectorB[] = new DataU1C8E3[2];

		String producto = "";
		int codigo = 0;
		float precio = 0;
		
		for (int x=0; x<vectorA.length; x++) {
			System.out.println("Datos Vector A: " + (x+1));
			System.out.print(" Ingresa producto : ");
			producto = leer.nextLine();
			System.out.print(" Ingresa codigo : ");
			codigo = leer.nextInt();
			System.out.print(" Ingresa precio : ");
			precio = leer.nextFloat();
			System.out.println(" ");
			leer.nextLine();
			vectorA[x] = new DataU1C8E3(producto, codigo, precio);
			vectorB[x] = new DataU1C8E3("", 
					Integer.valueOf(vectorA[x].getCodigo()), 
					Float.valueOf(vectorA[x].getPrecio()));
		}
	
		for (int x=0; x<vectorA.length; x++) {
			System.out.println(
					"VectorB ["+ (x+1) + "]" +
					"\n Codigo :" + vectorB[x].getCodigo()
					+" "+
					"\n Precio :" + vectorB[x].getPrecio()
					);
		}
	}
}