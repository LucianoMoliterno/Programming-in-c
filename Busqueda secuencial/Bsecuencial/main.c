#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Busqueda secuencial\n");

        int i=0;

    int a [10]={10,7,31,16,8,11,29,64,14,15};

    for(i=0;i<10;i++)

    {
        printf("- %d -", a[i]);
    }


    int dato;
    int existe=0;
    int pos=0;

    printf ("\n dato a buscar:");
    scanf("%d",&dato);



    for(i=0;i<10;i++)

    {
        if(a[i]==dato)
        {
            existe=1;
            pos=i;
        }
    }

    if (existe==1)
    {
        printf("el dato %d , se encontro el la posicion %d",dato,pos);
    }

    else { printf ("el dato no existe, sorry bro");}

    return 0;
}
