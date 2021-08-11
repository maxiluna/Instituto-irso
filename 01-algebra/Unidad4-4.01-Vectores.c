#include<stdio.h>
 
int main(){
	
	float dimensiones;
	float vectx, vecty, vectresultadox, vectresultadoy, vectresultado;
	int i;
	vectresultadox = 0;
	vectresultadoy = 0;
	dimensiones = 0;
	
	printf("Sumamos dos vector, indique si tiene 2 o 3 dimensiones:\n");
	scanf("%f", &dimensiones);
	
	
	for(i=0;i<dimensiones-1;i++){
		printf("Ingresamos las coordenadas del punto\n %f",&i);
		
		printf("Ingrese punto x:\n");
		scanf("%f", &vectx);
		printf("Ingrese punto y:\n");
		scanf("%f", &vecty);
		vectresultadox = vectx + vectresultadox;
		vectresultadoy = vecty + vectresultadoy;

		printf("%f%f", vectresultadox, vectresultadoy);
	}
/*
	if dimensiones==2{
		printf("introduce el valor de x para el vector A\n");
		scanf("%f",&vect1x);
		
		printf("posicion x %2.0f y %2.0f\n", vectresultadox, vectresultadoy);

	} 
*/

	return 0;
}
