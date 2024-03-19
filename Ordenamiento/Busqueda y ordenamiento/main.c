#include <stdio.h>
#include <stdlib.h>

loadv( int largo,int vect [largo])

{
printf("cargando funcion");
int i;

    for (i=0;i<largo;i++)

{
    vect[i]=i+2;
   
}


for (i=0;i<largo;i++)

{

    printf("- %d -",vect[i]);
}


}



int main()
{


int l=0; //largo del vector
int vector[l]; //vector

int i;

printf("largo del vector");
scanf("%d",l);

loadv(l,vector); //llamado de funcion


    return 0;
}









