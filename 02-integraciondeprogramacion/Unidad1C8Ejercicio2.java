/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 8             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase8;

import java.util.Scanner;

public class Unidad1C8Ejercicio2 {
	/* Enunciado Ejercicio 2:
	Realizar un programa que permita, dado un vector de estructuras 
	/ registros cuyos campos son: empresa (cadena de caracteres [30]), 
	domicilio (cadena de caracteres [40]), código postal (cadena de 
	caracteres [10]), localidad (cadena de caracteres [20]), país 
	(cadena de caracteres [15]), imprimir un listado para generar 
	el destinatario de unas cartas. El formato debe ser el correcto.
	 */
	public static void main(String[]args) {
	
		Scanner leer = new Scanner(System.in);
		DataU1C8E2 datos[] = new DataU1C8E2[2];
		
		String empresa = "";
		String domicilio = "";
		String codigopostal = "";
		String localidad = "";
		String pais = "";
		
		for (int x=0; x<datos.length; x++) {
			System.out.println("Destinatario de carta: " + (x+1));
			System.out.print(" Ingresa empresa : ");
			empresa = leer.nextLine();
			System.out.print(" Ingresa domicilio : ");
			domicilio = leer.nextLine();
			System.out.print(" Ingresa codigo postal : ");
			codigopostal = leer.nextLine();
			System.out.print(" Ingresa localidad: ");
			localidad = leer.nextLine();
			System.out.print(" Ingresa Pais: ");
			pais = leer.nextLine();
			System.out.println(" ");
			datos[x] = new DataU1C8E2(empresa, domicilio, codigopostal, localidad, pais);
		}
	
		for (int x=0; x<datos.length; x++) {
			System.out.println(
					"Destinatario de cartas - "+ (x+1) +
					"\n Empresa :" + datos[x].getEmpresa()
					+" "+
					"\n Domicilio :" + datos[x].getDomicilio()
					+" "+
					"\n Codigo Postal :" + datos[x].getCodigopostal()
					+" "+
					"\n Localidad :" + datos[x].getLocalidad()
					+" "+
					"\n Pais :" + datos[x].getPais()
					);
		}
	}
}