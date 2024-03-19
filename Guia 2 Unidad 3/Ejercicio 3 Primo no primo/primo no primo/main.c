#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("ES PRIMO o NO ES PRIMO\n");
    int i=0;
    int numero=0;
    int cont=0;
    printf("ingrese un numero\n");
    scanf("%d",&numero);

    for (i=1;i<=numero;i++)
    {
        if (numero%i==0)
        {
            cont=cont+1;
        } //cierro if

    } //cierro for




     if(cont<=2)

    {printf("%d es un numero primo", numero );}

    else
       printf ("%d no es numero primo", numero) ;




    return 0;
}
