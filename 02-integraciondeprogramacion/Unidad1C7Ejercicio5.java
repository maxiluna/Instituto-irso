/* Materia: Integración de Programación      */
/* Descripción: Desarrollo en Eclipse        */
/* Unidad 1 - Ejercicios Clase 7             */
/* Autor: Maximiliano Luna                   */
/*                                           */
package irsovirtual.Unidad1Clase7;

public class Unidad1C7Ejercicio5 {
	/* Enunciado Ejercicio 5:
	Realizar un programa que permita asignar la identidad 
	a una matriz R de dimensiones mxm (considerar m=4). 
	Los índices y las componentes son enteros. La matriz 
	identidad es la que tiene valor 1 en la diagonal principal 
	y 0 en el resto.
	 */	
	public static void main(String[] args) {
		int R[][], m=4;
		R = new int[m][m];
		// Carga identidad
		for(int x=0; x<R.length; x++) {
			for(int y=0; y<R.length; y++) {
				if(x==y) {
					R[x][y]=1;
				} else {
					R[x][y]=0;
				}
			}
		}
		// Imprime matriz
		System.out.println("  R[0] [1] [2] [3]");
		for(int x=0; x<R.length; x++) {
			System.out.print("["+x+"]");
			for(int y=0; y<R.length; y++) {
				System.out.print(" "+R[x][y] + "  ");
			}
			System.out.println();
		}
	}
}
