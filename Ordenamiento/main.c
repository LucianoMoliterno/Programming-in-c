#include <stdio.h>
#include <stdlib.h>





int main()
{


int i;
int j;
int aux;
int v[5]={1,3,-1,-9,5,11};

//Rand init. Ignorar
    srand(time(NULL));
    //



//    for(i=0;i<10;i++)
//    {
//
//            v[i]=rand()%40; //Carga valores random. Hacer printf & scanf para el examen real.
//
//    }


printf("vector sin ordenar \n \n ");
char senial='s';



      for(i=0;i<5;i++)
    {

            printf("- %d -", v[i]);

    }
printf("\n \n ");

printf("vector ordenado \n \n ");



for (i=0;i<5;i++)
{

    for(j=0;j<5;j++)
    {

        if(v[j]>v[j+1])
        {
        aux=v[j];
        v[j]=v[j+1];
        v[j+1]=aux;

        }


    }


}


for (i=0;i<10;i++)
{

    printf("-  %d   --",v[i]);


}


////////////guardar en archivo
FILE *miarchivo;

miarchivo =fopen ("texto.txt","w");


//fprintf(miarchivo,"esta mierda funciona");

for (i=0;i<10;i++)
{

    fprintf(miarchivo,"%d+",v[i]);

}

fclose(miarchivo);



miarchivo =fopen ("texto.txt","r");

int v2[10];

 printf("\n\n\n--imprimiendo archivo guardado-- \n \n \n");

for (i=0;i<10;i++)
{

    fscanf(miarchivo,"%d",&v2[i]);

}







for (i=0;i<10;i++)
{

    printf("--%d--",v2[i]);

}

fclose(miarchivo);

    return 0;
}








