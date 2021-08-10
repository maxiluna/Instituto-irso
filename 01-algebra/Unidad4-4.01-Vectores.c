#include<stdio.h>
 
 
int main(){
	
	float dimensiones
	
	printf("Vamos a sumar dos vector, agregaremos los coordenadas\n");
	scanf("cuantas dimensiones tendra? ¿ 2 o 3 ? %f",&dimensiones);
	
	float vectx, vecy, vectresultado;
	int i;

/*
	if dimensiones==2{
		printf("introduce el valor de x para el vector A\n");
		scanf("%f",&vect1x);
	
		printf("introduce el valor de y para el vector A\n");
		scanf("%f",&vect1y);
		
		printf("introduce el valor de x para el vector B\n");
		scanf("%f",&vect2x);
	
		printf("introduce el valor de y para el vector B\n");
		scanf("%f",&vect2y);
	} 
	
	if dimensiones==3{
		printf("introduce el valor de x para el vector A\n");
		scanf("%f",&vect1x);
	
		printf("introduce el valor de y para el vector A\n");
		scanf("%f",&vect1y);
		
		printf("introduce el valor de x para el vector B\n");
		scanf("%f",&vect2x);
	
		printf("introduce el valor de y para el vector B\n");
		scanf("%f",&vect2y);
		
		printf("introduce el valor de x para el vector C\n");
		scanf("%f",&vect3x);
	
		printf("introduce el valor de y para el vector C\n");
		scanf("%f",&vect3y);
	} 


*/
	printf("******vector 3 es la suma de los 2 primeros vectores****\n");
	for(i=0;i<dimensiones-1;i++){
		vectresultado[i]=vect1[i]+vect2[i];
		printf("posicion x %d -->%2.0f\n",i,vect3[i]);
	}
	
	return 0;
}
