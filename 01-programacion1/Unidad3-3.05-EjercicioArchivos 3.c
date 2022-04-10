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
	Ejercicio 3: 
	En una empresa textil se desea generar un programa que permita realizar 
	el control de la producción de telas impermeables para mochilas. 
	Se sabe que los datos se encuentran guardados en un archivo pero que 
	los mismos fueron ingresados por alguien que desconocía una modificación 
	introducida recientemente a los códigos de los distintos tipos de telas. 
	
	Es así, que el código correspondiente al nylon de primera era ‘NYA’ y ahora es ‘NY1’, 
	mientras que el de la tela de avión era ‘AVI’ y ahora es ‘G25’. 
	
	Se desea pues, actualizar el archivo de producción con estos nuevos códigos. 
	El archivo es de registros de tres campos: 
		partida (entero), 
		código (cadena de tres caracteres) y 
		cantidad de macrorrollos (entero). 
	El nombre del archivo es PRODUCC
*/

#define MAX_LEN 256

struct {
	int partida;
	char codigo[3];
	int cantidadmacrorollos;
} archivoA[20], archivoB[20];

char buffer[MAX_LEN];    

void imprimoarchivoA()
{
	int i;
	for(i=0;i<20;i++)
	    {
	    	printf("Partida: %d, Codigo: %s, Cantidad de Macrorrolos: %d\n",
				archivoA[i].partida,
				archivoA[i].codigo,
				archivoA[i].cantidadmacrorollos);
		}
}

void imprimoarchivoB()
{
	// nylon de primera era ‘NYA’ y ahora es ‘NY1’
	// tela de avión era ‘AVI’ y ahora es ‘G25’
	int i;
	char palabraNYA[] = "NYA";
	char palabraNY1[] = "NY1";
	char palabraAVI[] = "AVI";
	char palabraG25[] = "G25";
	int validopalabra;
	
	for(i=0;i<20;i++)
	    {
	    	// Valido si el valor es NYA
			if((validopalabra=strcmp(archivoA[i].codigo, palabraNYA))==0){
	    		archivoB[i].partida = archivoA[i].partida;
	    		strcpy(archivoB[i].codigo, palabraNY1);
				archivoB[i].cantidadmacrorollos = archivoA[i].cantidadmacrorollos;
			// Valido si el valor es AVI
			} else if ((validopalabra=strcmp(archivoA[i].codigo, palabraAVI))==0){
	    		archivoB[i].partida = archivoA[i].partida;
	    		strcpy(archivoB[i].codigo, palabraG25);
				archivoB[i].cantidadmacrorollos = archivoA[i].cantidadmacrorollos;
			} else {
				archivoB[i].partida = archivoA[i].partida;
	    		strcpy(archivoB[i].codigo, archivoA[i].codigo);
				archivoB[i].cantidadmacrorollos = archivoA[i].cantidadmacrorollos;
			}
		}
	for(i=0;i<20;i++)
	    {
	    	printf("Partida: %d, Codigo: %s, Cantidad de Macrorrolos: %d\n",
				archivoB[i].partida,
				archivoB[i].codigo,
				archivoB[i].cantidadmacrorollos);
		}
}

void guardoenarchivo() {
    FILE* fp;
	int i;
	fp = fopen("Unidad3-3.05-EjercicioArchivos 3.txt", "w");
	// Guardo en archivo cada posicion del vector 
	for(i=0;i<20;i++)
	    {
			fprintf(fp, "%d;%s;%2d\n", archivoB[i].partida, archivoB[i].codigo, archivoB[i].cantidadmacrorollos);
		}
    fclose(fp);
    printf("\n*****************************************\n");
    printf("*********** Archivo Actualizado *********\n");
    printf("*****************************************\n");
}


int main(void)
{
    FILE* fp;
    fp = fopen("Unidad3-3.05-EjercicioArchivos 3.txt", "r");
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
		    		archivoA[l].partida = numero;
		    	} else if (i==1){
		    		strcpy(archivoA[l].codigo, newString[i]);
				} else if (i==2){
					// Convierto String en Flotante
		    		int numero=atoi(newString[i]);
					archivoA[l].cantidadmacrorollos = numero;
				}
			}
			// Adiciono una unidad a la posicion del vector
			l+=1;
	 	}
    fclose(fp);
    printf("\n");
    printf("----------- Imprimo datos de archivo Original en estructura A de 20 posiciones -------- \n");
    imprimoarchivoA();
    printf("\n");
    printf("----------- Imprimo datos validados de archivo en estructura B de 20 posiciones -------- \n");
    imprimoarchivoB();
    guardoenarchivo();
    return 0;
}

