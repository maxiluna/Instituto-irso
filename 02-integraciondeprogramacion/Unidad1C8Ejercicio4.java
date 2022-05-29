/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 8             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase8;

import java.util.Scanner;

public class Unidad1C8Ejercicio4 {
	/* Enunciado Ejercicio 4:
	Dado un vector B de estructuras / registros de alumnos cuyos 
	campos son: nombre (cadena de caracteres [10]) y nota (entero); 
	realizar mediante un programa la impresión de los nombres de 
	los alumnos cuyas notas superen el valor 7.
	 */
	public static void main(String[]args) {
		
		Scanner leer = new Scanner(System.in);
		DataU1C8E4 vectorB[] = new DataU1C8E4[10];

		String nombre = "";
		int nota = 0;
		
		for (int x=0; x<vectorB.length; x++) {
			System.out.println("Datos Vector B: " + (x+1));
			System.out.print(" Ingresa nombre : ");
			nombre = leer.nextLine();
			System.out.print(" Ingresa nota : ");
			nota = leer.nextInt();
			System.out.println(" ");
			leer.nextLine();
			vectorB[x] = new DataU1C8E4(nombre, nota);
		}
	
		for (int x=0; x<vectorB.length; x++) {
			if(vectorB[x].getNota() > 7) {
				System.out.println(
						"VectorB ["+ (x+1) + "]" +
						" - Nombre:" + vectorB[x].getNombre()
						+" "+
						" - Nota:" + vectorB[x].getNota()
				);
			}
		}
	}
}
