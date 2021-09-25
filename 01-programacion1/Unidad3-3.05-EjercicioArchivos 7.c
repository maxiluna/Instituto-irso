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
#include <stdlib.h>
#include <string.h>

/*
	Ejercicio 7: 
	Realizar un procedimiento en el que dado un archivo de registros
	de dos campos (código: cadena de tres caracteres y cantidad: entero), 
	permita eliminar los elementos que cumplan alguna de estas condiciones: 
	el código empieza con ‘H’, ‘T’ o ‘ZA’ o la cantidad es menor a 92.
*/

#define MAX_LEN 256

struct {
	char codigo[3];
	int cantidad;
} archivoA[20], archivoB[20];

char buffer[MAX_LEN];    

void imprimoarchivoA()
{
	int i;
	char palabraH[] = "H";
	char palabraT[] = "T";
	char palabraZA[] = "ZA";
	
	char validaH[1];
	char validaT[1];
	char validaZA[2];
	
	int validoletraH, validoletraT, validoletraZA;
	
	for(i=0;i<20;i++)
	    {
	    	case strcpy(validaH, archivoA[i].codigo);
	    	strcpy(validaT, archivoA[i].codigo);
	    	strcpy(validaZA, archivoA[i].codigo);
	   	    //validaH2[0] = toupper(validaH[0]);
	    	//printf(" %s\n", validaH2);
	    	//printf(" %s\n", palabraH);
			validoletraH = strncmp(palabraH, validaH, 1);
			validoletraT = strncmp(palabraT, validaT, 1);
			validoletraZA = strncmp(palabraZA, validaZA, 2);
	    	//printf(" %d\n", validoletra);
	    	if(validoletraH==0 || validoletraT==0 || validoletraZA==0){
	    		printf("Codigo: %s, Cantidad: %d\n",
				archivoA[i].codigo,
				archivoA[i].cantidad);
			}
		}
}


int main(void)
{
    FILE* fp;
    fp = fopen("Unidad3-3.05-EjercicioArchivos 7.txt", "r");
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
		    		strcpy(archivoA[l].codigo, newString[i]);
		    	} else if (i==1){
		    		int numero=atoi(newString[i]);
					archivoA[l].cantidad = numero;
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
