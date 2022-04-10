/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
/*              ARCHIVOS                     */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

#include <stdio.h>
#include <string.h>

/*
	Ejercicio 1: Dado un archivo de registros de tres campos (legajo: entero;
	sueldo: real; adicional: real), realizar un programa que permita actualizar el
	archivo, de modo que el sueldo sea incrementado en 0.5 veces el adicional. 
	Los sueldos que se deben modificar son aquellos que cumplan con alguna de
	las siguientes condiciones: 
		-Legajo entre 1 y 5454, y el sueldo menor a $350. 
		-Legajo entre 6000 y 9800, y el adicional sea menor a $200. 
		-Legajo mayor a 15300.
*/

#define MAX_LEN 256

struct {
	int legajo;
	float sueldo;
	float adicional;
} archivoA[10], archivoB[10];

char buffer[MAX_LEN];    

void imprimoarchivoA()
{
	int i;
	for(i=0;i<10;i++)
	    {
	    	printf("Legajo: %d, Sueldo: %f, Adicional: %f\n",
				archivoA[i].legajo,
				archivoA[i].sueldo,
				archivoA[i].adicional);
		}
}

void imprimoarchivoB()
{
	// Adiciona 0.5 veces el adicional si cumple:
	//  -Legajo entre 1 y 5454, y el sueldo menor a $350. 
	//	-Legajo entre 6000 y 9800, y el adicional sea menor a $200. 
	//	-Legajo mayor a 15300.
	int i;
	for(i=0;i<10;i++)
	    {
	    	if(1<=archivoA[i].legajo<=5454 && archivoA[i].sueldo<350){
	    		archivoB[i].legajo = archivoA[i].legajo;
	    		archivoB[i].sueldo = archivoA[i].sueldo + (archivoA[i].adicional/100)*0.5;
				archivoB[i].adicional = archivoA[i].adicional;
			} else if (6000<=archivoA[i].legajo<=9800 && archivoA[i].adicional<200){
				archivoB[i].legajo = archivoA[i].legajo;
				archivoB[i].sueldo = archivoA[i].sueldo + (archivoA[i].adicional/100)*0.5;
				archivoB[i].adicional = archivoA[i].adicional;
			} else if (archivoA[i].legajo>=15300){
				archivoB[i].legajo = archivoA[i].legajo;
				archivoB[i].sueldo = archivoA[i].sueldo + (archivoA[i].adicional/100)*0.5;
				archivoB[i].adicional = archivoA[i].adicional;
			} else {
				archivoB[i].legajo = archivoA[i].legajo;
				archivoB[i].sueldo = archivoA[i].sueldo;
				archivoB[i].adicional = archivoA[i].adicional;
			}
		}
	for(i=0;i<10;i++)
	    {
	    	printf("Legajo: %d, Sueldo: %f, Adicional: %f\n",
				archivoB[i].legajo,
				archivoB[i].sueldo,
				archivoB[i].adicional);
		}
}

void guardoenarchivo() {
    FILE* fp;
	int i;
	fp = fopen("Unidad3-3.05-EjercicioArchivos 1.txt", "w");
	// Guardo en archivo cada posicion del vector 
	for(i=0;i<10;i++)
	    {
			fprintf(fp, "%d;%2f;%2f\n", archivoB[i].legajo, archivoB[i].sueldo, archivoB[i].adicional);
		}
    fclose(fp);
    printf("\n*****************************************\n");
    printf("*********** Archivo Actualizado *********\n");
    printf("*****************************************\n");
}


int main(void)
{
    FILE* fp;
    fp = fopen("Unidad3-3.05-EjercicioArchivos 1.txt", "r");
    if (fp == NULL) {
      perror("Error: ");
      return 1;
    }
	int l=0;
	printf("----------- Imprimo datos de archivo TXT -------- \n");
    while (fgets(buffer, MAX_LEN - 1, fp))
    {
	        // Pasa a proxima linea
	        buffer[strcspn(buffer, "\n")] = 0;
	        printf("%s\n", buffer);
	        // 
	        char str1[100];
	    	char newString[10][10]; 
	   	    int i,j,ctr;
	
	        j=0; ctr=0;
		    for(i=0;i<=(strlen(buffer));i++)
		    {
		        // Si encuentra punto y coma o NULL, asigna NULL dentro de newString[ctr]
		        if(buffer[i]==';' || buffer[i]=='\0')
		        {
		            newString[ctr][j]='\0';
		            ctr++;  //Proxima palabra
		            j=0;    //Para la proxima palabra, index es 0
		        }
		        else
		        {
		            newString[ctr][j]=buffer[i];
		            j++;
		        }
		    }
		    // Guardo cada dato en su respectivo campo de estructura
		    for(i=0;i<ctr;i++)
		    {
		    	// printf("%s\n",newString[i]);
		    	if (i==0){
		    		// Convierto String en Entero
		    		int numero=atoi(newString[i]);
		    		archivoA[l].legajo = numero;
		    	} else if (i==1){ 
		    		// Convierto String en Flotante
		    		float numero=atoi(newString[i]);
					archivoA[l].sueldo = numero;
				} else if (i==2){
					// Convierto String en Flotante
		    		float numero=atoi(newString[i]);
					archivoA[l].adicional = numero;
				}
			}
			// Adiciono una unidad a la posicion del vector
			l+=1;
	 	}
    fclose(fp);
    printf("\n");
    printf("----------- Imprimo datos de archivo Original en estructura A de 10 posiciones -------- \n");
    imprimoarchivoA();
    printf("\n");
    printf("----------- Imprimo datos validados de archivo en estructura B de 10 posiciones -------- \n");
    imprimoarchivoB();
    guardoenarchivo();
    return 0;
}
