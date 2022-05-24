/* Materia: Integraci�n de Programaci�n      */
/* Descripci�n: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 7             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase7;

import java.util.Scanner;

public class Unidad1C7Calculadora {
	/* 
	Enunciado Calculadora:
	Desarrollar un programa que cumpla las funciones de una calculadora. 
	O sea, al iniciar deber�n preguntar qu� funci�n desean realizar 
	(suma, resta, multiplicaci�n, divisi�n o salir del programa); 
	Luego deber�n solicitar los valores a calcular; Y por �ltimo, 
	devolver el resultado del c�lculo aritm�tico. Asimismo, cada vez 
	que se termine el c�lculo deber�n ir nuevamente a la primera opci�n 
	de selecci�n, cuesti�n que sea posible seguir realizando c�lculos, 
	o bien salir del programa. 
	*/
	public static void main(String[] args) {
		boolean salir = false;
		
		do {
			int seleccion=0;
			float resultado=0;
			opciones();
			Scanner leer = new Scanner(System.in);
			seleccion = leer.nextInt();
			switch(seleccion) {
			case 1:
				resultado = suma(0);
				break;
			case 2:
				resultado = resta(0);
				break;
			case 3:
				resultado = multiplicacion(0);
				break;
			case 4:
				resultado = division(0);
				break;
			case 5:
				salir = true;
				continue;
			default:
				System.out.println("Opcion no valida");
				continue;
			}
			System.out.println("Resultado: "+resultado);
		} while (salir == false);
		System.out.println("Fin de la ejecucion");
	}

	private static void opciones() {
		System.out.println();
		System.out.println("Que funcion desea realizar ?");
		System.out.println(" 1 - Suma");
		System.out.println(" 2 - Resta");
		System.out.println(" 3 - Multiplicacion");
		System.out.println(" 4 - Division");
		System.out.println(" 5 - SALIR");
		System.out.print("Ingrese su opcion: ");

	}
	
	private static float[] pedirnumeros() {
		float Numero[], ingreso;
		Numero = new float [2];
		for (int x=0; x<2; x++) {
			System.out.print("Ingrese el numero "+ (x+1) +" : ");
			Scanner leer = new Scanner(System.in);
			ingreso = leer.nextFloat();
			Numero[x] = ingreso;
		}
		return Numero;
	}

	private static float suma(float resultado) {
		float Numero[];
		System.out.println(" - Suma - ");		
		Numero = new float [2];
		Numero = pedirnumeros();
		resultado = Numero[0]+Numero[1];
		return resultado;
	}
	
	private static float resta(float resultado) {
		float Numero[];
		System.out.println(" - Resta - ");
		Numero = new float [2];
		Numero = pedirnumeros();
		resultado = Numero[0]-Numero[1];
		return resultado;
	}

	private static float multiplicacion(float resultado) {
		float Numero[];
		System.out.println(" - Multiplicacion - ");
		Numero = new float [2];
		Numero = pedirnumeros();
		resultado = Numero[0]*Numero[1];
		return resultado;
	}

	private static float division(float resultado) {
		float Numero[];
		System.out.println(" - Division - ");
		Numero = new float [2];
		Numero = pedirnumeros();
		resultado = Numero[0]/Numero[1];
		return resultado;
	}
}
