/*
Realizar una funcion recursiva que sume los valores de un vector de enteros de 40
posiciones. Realizar la invocacion desde el programa principal.
*/

#include <stdio.h>

int x, vector[40], suma;

void generardatos(){
	for(x=0; x<40; x++){
		vector[x] = x*2;
	}
}

void sumarvalores(int posicion, int suma){
	x = posicion;
	if (x<40){
		suma += vector[x];
		sumarvalores(x+1, suma);
	} else {
		printf("\n La suma del vector es : %d", suma);
	}
}

int main(){
	// Procedimientos
	generardatos();
	sumarvalores(0, 0);
	return 0;
}
