#include <stdio.h>
#include <stdlib.h>

int main()
{
       printf("Factorial de un numero\n");
    int i=0;
    int numero=0;
    int f=1;
    printf("ingrese un numero\n");
    scanf("%d",&numero);

    for (i=1;i<=numero;i++)
    {f=f*i;}

printf ("El factorial del numero %d es %d",numero,f) ;

    return 0;
}
