#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //Estructura
    struct EstructuraMonedas
    {
        char nombre[10];
        float valor;
    };

    //Constructor
    struct EstructuraMonedas monedas[4];

    //Lectura de Archivo
    FILE * fileMonedas;
    fileMonedas = fopen("moneda.txt","r");
    int contador=0;
    while(!feof(fileMonedas))
    {
        //Formato de linea
        fscanf(fileMonedas," %[^+] %f\n",monedas[contador].nombre,&monedas[contador].valor);
        contador=contador+1;
    }
    fclose(fileMonedas);

    //Salida
    int i;
    printf("\n  Valores Desordenados\n");
    for(i=0;i<4;i++)
    {
        printf("\n  %d Nombre: %s Valor: %.2f\n",i+1,monedas[i].nombre,monedas[i].valor);
    }





int j,k;
struct EstructuraMonedas aux;

 for (j = 0; j < 4; j++)
	{
		for (k = 0; k < 4-1; k++)
		{
			if (monedas[k].valor > monedas[k+1].valor)
			{
			    aux=monedas[k];
			    monedas[k]=monedas[k+1];
			    monedas[k+1]=aux;
			}
		}
	}


	//Salida Ordenada
    printf("\n  Valores Ordenados \n");
    for(i=0;i<4;i++)
    {
        printf("\n  %d Nombre: %-8sValor: %.2f\n",i+1,monedas[i].nombre,monedas[i].valor);
    }

    return 0;
}
