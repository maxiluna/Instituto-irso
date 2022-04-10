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
	Ejercicio 4: 
	En una empresa tabacalera, se desea generar un programa que permita 
	realizar el control de la producción de cigarrillos y habanos. 
	Se sabe que los datos se encuentran guardados en un archivo, pero que 
	los mismos deben ser actualizados por cuanto dos de los códigos no 
	serán utilizados en lo sucesivo. 
	Se deberán cambiar 
		‘JCS’ por ‘JCA’ y 
		‘PIP’ por ‘IPE’. 
	El archivo es de registros de tres campos: 
		partida (entero), 
		código (cadena de tres caracteres) y 
		cantidad de paquetes (entero). 
	El nombre del archivo es PRODTAB.
*/

#define MAX_LEN 256

struct {
	int partida;
	char codigo[3];
	int cantidaddepaquetes;
} archivoA[20], archivoB[20];

char buffer[MAX_LEN];    

void imprimoarchivoA()
{
	int i;
	for(i=0;i<20;i++)
	    {
	    	printf("Partida: %d, Codigo: %s, Cantidad de paquetes: %d\n",
				archivoA[i].partida,
				archivoA[i].codigo,
				archivoA[i].cantidaddepaquetes);
		}
}

void imprimoarchivoB()
{
	// nylon de primera era ‘NYA’ y ahora es ‘NY1’
	// tela de avión era ‘AVI’ y ahora es ‘G25’
	int i;
	char palabraJCS[] = "JCS";
	char palabraJCA[] = "JCA";
	char palabraPIP[] = "PIP";
	char palabraIPE[] = "IPE";
	int validopalabra;
	
	for(i=0;i<20;i++)
	    {
	    	// Valido si el valor es NYA
			if((validopalabra=strcmp(archivoA[i].codigo, palabraJCS))==0){
	    		archivoB[i].partida = archivoA[i].partida;
	    		strcpy(archivoB[i].codigo, palabraJCA);
				archivoB[i].cantidaddepaquetes = archivoA[i].cantidaddepaquetes;
			// Valido si el valor es AVI
			} else if ((validopalabra=strcmp(archivoA[i].codigo, palabraPIP))==0){
	    		archivoB[i].partida = archivoA[i].partida;
	    		strcpy(archivoB[i].codigo, palabraIPE);
				archivoB[i].cantidaddepaquetes = archivoA[i].cantidaddepaquetes;
			} else {
				archivoB[i].partida = archivoA[i].partida;
	    		strcpy(archivoB[i].codigo, archivoA[i].codigo);
				archivoB[i].cantidaddepaquetes = archivoA[i].cantidaddepaquetes;
			}
		}
	for(i=0;i<20;i++)
	    {
	    	printf("Partida: %d, Codigo: %s, Cantidad de Paquetes: %d\n",
				archivoB[i].partida,
				archivoB[i].codigo,
				archivoB[i].cantidaddepaquetes);
		}
}

void guardoenarchivo() {
    FILE* fp;
	int i;
	fp = fopen("Unidad3-3.05-EjercicioArchivos 4.txt", "w");
	// Guardo en archivo cada posicion del vector 
	for(i=0;i<20;i++)
	    {
			fprintf(fp, "%d;%s;%2d\n", archivoB[i].partida, archivoB[i].codigo, archivoB[i].cantidaddepaquetes);
		}
    fclose(fp);
    printf("\n*****************************************\n");
    printf("*********** Archivo Actualizado *********\n");
    printf("*****************************************\n");
}


int main(void)
{
    FILE* fp;
    fp = fopen("Unidad3-3.05-EjercicioArchivos 4.txt", "r");
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
					archivoA[l].cantidaddepaquetes = numero;
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
