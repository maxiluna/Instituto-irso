/*********************************************/
/* Materia: Programacion 1                   */
/*                                           */
/* Descripción: EJERCICIOS                   */
/*              RECURSIVIDAD                 */
/*                                           */
/* Autor: Maximiliano Luna                   */
/*                                           */
/*********************************************/

/* Compiladores Online
	https://www.onlinegdb.com/online_c_compiler
	https://www.programiz.com/c-programming/online-compiler/
*/

#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#define MAX_LEN 256

/*
	Ejercicio 9: 
	Un parámetro de importancia en la producción algodonera es el
	que permite determinar el promedio de toneladas producidas por quintal cada año. 
	
	Dado un vector constituido por registros de dos campos: 
	  tipo (cadena de 20 caracteres) y 
	  toneladas por quintal (real), 
	se desea hallar el promedio de toneladas por quintal producidos del algodón tipo 
	‘Capullo-Calidad1’. 
	El vector tiene 72 posiciones y el proceso que permita el cálculo debe ser recursivo.
*/

struct
{
	char tipo[20];
	float tpq; //toneladasporquintal
} vectorA[72]; // Indico largo de vector

int i, n, validopalabra, contador_coincidencias, largo_vector=72;
char palabra[] = "Capullo-Calidad1";
char buffer[MAX_LEN];
float acumulado, promedio;


void calculopromedio(int n) {
	// Verifico si el tipo es "Capullo-Calidad1".
	if((validopalabra=strcmp(vectorA[n].tipo, palabra))==0){
		n++,
		acumulado += vectorA[n].tpq,
		printf("Acumulado: %.2f \n", acumulado),
		// Llama a la misma funcion
		calculopromedio(n);
	} else if (((validopalabra=strcmp(vectorA[n].tipo, palabra))!=0) && n<largo_vector){
		n++,
		calculopromedio(n);
	} else if (n=largo_vector){
		printf("\nPomedio de toneladas por quintal - \n"),
		printf("  (Acumulado = %.2f / Cantidad = %d)\n", acumulado, contador_coincidencias),
		printf("producidos del algodon tipo - Capullo-Calidad1: "),
		promedio = acumulado / contador_coincidencias,
		printf("%.2f\n", promedio);
	}	
}


void imprimo_coincidentes(int n)
{
	for(i=n;i<largo_vector;i++)
	    {
	    	if((validopalabra=strcmp(vectorA[i].tipo, palabra))==0){
		    	printf("Posicion: %d - Tipo: %s, TPQ: %f\n",
		    		i,
					vectorA[i].tipo,
					vectorA[i].tpq);
				contador_coincidencias++;
			}
		}
	printf("Cantidad de coincidencias %d \n", contador_coincidencias);
}


int main()
{
	// Creo un archivo txt para cargar los datos de las 72 posiciones
	FILE* fp;
    fp = fopen("Unidad4-4.02-Ejercicio9.txt", "r");
    if (fp == NULL) {
      perror("Error: ");
      return 1;
    }
	int l=0;
	//printf("----------- Imprimo datos de archivo TXT -------- \n");
    while (fgets(buffer, MAX_LEN - 1, fp))
    {
	        // Pasa a proxima linea
	        buffer[strcspn(buffer, "\n")] = 0;
	        // Descomentar proxima linea para dar salida a cada linea
			//printf("%s\n", buffer);
	        // 
	        char str1[100];
	    	char newString[72][72]; 
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
		    		strcpy(vectorA[l].tipo, newString[i]);
		    	} else if (i==1){
					// Convierto String en Flotante
		    		int numero=atof(newString[i]);
					vectorA[l].tpq = numero;
				}
			}
			// Adiciono una unidad a la posicion del vector
			l+=1;
	 	}
    fclose(fp);
    printf("\n");
    printf("----------- Imprimo datos coincidentes de archivo -------- \n");
    // Funcion Imprime coincidentes
    imprimo_coincidentes(0);
    printf("----------- Calculo el promedio de posiciones coincidentes -------- \n");
	// Funcion Calcula promedio
	calculopromedio(0);
    return 0;
} 
