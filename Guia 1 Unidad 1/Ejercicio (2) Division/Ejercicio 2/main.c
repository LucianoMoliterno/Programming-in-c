#include <stdio.h>
#include <stdlib.h>

//Division

int main()
{
 /*las variables enteras en una operacion  devuelven numeros enteros aunque esten en un float*/


    float n1=0;
    float n2=0;
    float total=0;


    printf ("ingrese un numero")  ;
    scanf("%f", &n1);
     printf ("ingrese un segundo numero")  ;
    scanf("%f", &n2);
    total= n1/n2;

    printf ("el resultado de %.2f y %.2f es %.2f", n1,n2,total);



    return 0;
}
