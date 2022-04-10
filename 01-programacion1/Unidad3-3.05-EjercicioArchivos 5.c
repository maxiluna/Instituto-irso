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
	Ejercicio 5: 
	Dado un archivo de accidentes de tránsito, cuyos elementos son registros de tres campos: 
		fecha (cadena de ocho caracteres),
		cantidad de accidentados (entero) y 
		código de zona (entero). 
	El código de zona varía entre 1 y 20. 
	
	Realizar un programa que permita generar un vector donde se vayan 
	acumulando la cantidad de accidentes por cada zona (el índice del vector 
	coincide con el número de zona). 
	Una vez obtenido el vector, imprimirlo.
*/

#define MAX_LEN 256

struct {
	char fecha[8];
	int cantidadaccidentados;
	int codigozona;
} archivoA[20];

struct {
	int cantidadaccidentados;
	int codigozona;
} archivoB[20];

char buffer[MAX_LEN];    

void imprimoarchivoA()
{
	int i;
	for(i=0;i<20;i++)
	    {
	    	printf("Vector %i - Fecha: %s, Cant Accidentados: %d, Cod Zona: %d\n",
	    		i,
				archivoA[i].fecha,
				archivoA[i].cantidadaccidentados,
				archivoA[i].codigozona);
		}
}

void imprimoarchivoB()
{
	int i;
	// Loop en Datos y Sumo
	for(i=0;i<20;i++)
	    {
	    	if (archivoA[i].cantidadaccidentados != 0){
	    		archivoB[archivoA[i].codigozona].cantidadaccidentados += archivoA[i].cantidadaccidentados;
			}
			archivoB[i].codigozona = i;
		}
	// Loop en vector e imprimo
	for(i=0;i<20;i++)
	    {
	    	printf("Vector %i - Cant Accidentados: %d, Cod Zona: %d\n",
				i,
				archivoB[i].cantidadaccidentados,
				archivoB[i].codigozona);
		}
}


int main(void)
{
    FILE* fp;
    fp = fopen("Unidad3-3.05-EjercicioArchivos 5.txt", "r");
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
	    	char newString[20][20]; 
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
		    		// Copio String a estructura
		    		strcpy(archivoA[l].fecha, newString[i]);
		    	} else if (i==1){
		    		// Convierto String en Entero
		    		int numero=atoi(newString[i]);
					archivoA[l].cantidadaccidentados = numero;
				} else if (i==2){
					// Convierto String en Entero
		    		int numero=atoi(newString[i]);
					archivoA[l].codigozona = numero;
				}
			}
			// Adiciono una unidad a la posicion del vector
			l+=1;
	 	}
    fclose(fp);
    printf("\n");
    //printf("----------- Imprimo datos de archivo Original en estructura A de 20 posiciones -------- \n");
    //imprimoarchivoA();
    printf("\n");
    printf("----------- Imprimo datos validados de archivo en estructura B de 20 posiciones -------- \n");
    imprimoarchivoB();
    return 0;
}
