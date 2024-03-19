#include <stdio.h>
#include <stdlib.h>

loadv( int largo,int vect [])

{
printf("cargando funcion");
int i;

    for (i=0;i<largo;i++)

{
    vect[i]=i;

}


for (i=0;i<largo;i++)

{



    printf("- %d -",vect[i]);
}


}



int main()
{


int l=0; //largo del vector
 //vector

int i;

printf("largo del vector");
scanf("%d",&l);

int vector[l];

loadv(l,vector); //llamado de



printf("\n vector main \n");

for (i=0;i<l;i++)

{

    printf("- %d -",vector[i]);
}



    return 0;
}
