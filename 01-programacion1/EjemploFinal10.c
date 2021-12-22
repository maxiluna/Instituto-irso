/*
Genere un procedimiento que imprima en pantalla los valores de un vector de reales
que tiene 140 posiciones. Debe realizarse en forma recursiva. Realizar la invocacion
desde el programa principal.
*/
#include <stdio.h>

int x;
float vector[140];

void generardatos(){
	for(x=0; x<140; x++){
		vector[x] = x+10;
	}
}

void imprimirdatos(int posicion){
	x = posicion;
	if (x<140){
		printf("\n El valor de la posicion vector[%d] es: %f", x, vector[x]);
		imprimirdatos(x+1);
	}
}

int main(){
	// Procedimientos
	generardatos();
	imprimirdatos(0);
	return 0;
}
