#include <stdio.h>
#include <stdlib.h>

//algoritmo suma

int main()
{
    int n1=0;
    int n2=0;
    int total=0;


    printf ("ingrese un numero")  ;
    scanf("%d", &n1);
     printf ("ingrese un segundo numero")  ;
    scanf("%d", &n2);
    total= n1+n2;

    printf ("el resultado de %d y %d es %d", n1,n2,total);


    return 0;
}
