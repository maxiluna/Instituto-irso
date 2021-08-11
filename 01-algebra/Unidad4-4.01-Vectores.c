#include<stdio.h>
 
int main(){
	
	float dimensiones;
	float vectx, vecty, vectresultadox, vectresultadoy, vectresultado;
	int i;
	vectresultadox = 0;
	vectresultadoy = 0;
	dimensiones = 0;
	
	printf("Vamos a sumar dos vector, agregaremos los coordenadas\n");
	scanf("cuantas dimensiones tendra? ¿ 2 o 3 ? %f",& dimensiones);
	
	
	for(i=0;i<dimensiones-1;i++){
		printf("Ingresamos las coordenadas del punto\n %f",& i+1);
		
		scanf("Ingrese punto x %f",& vectx);
		scanf("Ingrese punto x %f",& vecty);
		vectresultadox = vectx + vectresultadox;
		vectresultadoy = vecty + vectresultadoy;

		printf("%d %d", vectresultadox, vectresultadoy);
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
