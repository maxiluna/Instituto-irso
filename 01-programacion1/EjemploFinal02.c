/* EJERCICIO 2
Realizar un programa que permita cargar un vector de enteros de 15
posiciones, donde los índices también son enteros. Luego, indicar cuántos
números pares e impares hay en el vector.
*/

#include <stdio.h>

int main(){

	int vector[15], contarpares=0, contarimpares, x, numeroenvector;
	// Cargo por teclado los numeros del vector
	for (x=0;x<15;x++){
		printf("\n Ingrese un numero para Vector posicion '%d': ", x);
		scanf("%i", &numeroenvector);
		vector[x] = numeroenvector;
	}
	for (x=0;x<15;x++){
		printf("\n Posicion %d tiene el numero %d: ", x, vector[x]);
		if (vector[x]%2==0){
			printf("\n El numero es par");
			contarpares += 1;
		} else {
			printf("\n El numero es impar");
		}
	}
	contarimpares = 15 - contarpares;
	printf("\n El vector tiene %d numeros pares y %d numeros impares", contarpares, contarimpares);
	return 0;
}
