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
	Ejercicio 6: 
	Realizar un programa que debe permitir imprimir los nombres de un archivo 
	de registros cuyos campos son: 
		legajo (entero), 
		nombre (cadena de 30 caracteres) y 
		edad (entero). 
	Los nombres a imprimir son aquellos que cumplan las siguientes condiciones: 
		-Número de legajo entre 1 y 10000 sin importar la edad. 
		-Edad mayor a 18 años sin importar el número de legajo.
*/

#define MAX_LEN 256

struct {
	int legajo;
	char nombre[126];
	int edad;
} archivoA[20];

char buffer[MAX_LEN];    

void imprimoarchivoA()
{
	int i;
	for(i=0;i<20;i++)
	    {
	    	if (archivoA[i].edad>18 || (archivoA[i].legajo>0 && archivoA[i].legajo<10001)) {
	    		printf("Legajo: %d, Nombre: %s, Edad: %d\n",
				archivoA[i].legajo,
				archivoA[i].nombre,
				archivoA[i].edad);
			}
		}
}


int main(void)
{
    FILE* fp;
    fp = fopen("Unidad3-3.05-EjercicioArchivos 6.txt", "r");
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
		    		// Convierto String en Entero
		    		int numero=atoi(newString[i]);
					archivoA[l].legajo = numero;
		    	} else if (i==1){
					// Copio String a estructura
		    		strcpy(archivoA[l].nombre, newString[i]);
				} else if (i==2){
					// Convierto String en Entero
		    		int numero=atoi(newString[i]);
					archivoA[l].edad = numero;
				}
			}
			// Adiciono una unidad a la posicion del vector
			l+=1;
	 	}
    fclose(fp);
    printf("\n");
    printf("----------- Imprimo datos que cumplen la validacion -------- \n");
    printf("\n");
    imprimoarchivoA();
    return 0;
}
