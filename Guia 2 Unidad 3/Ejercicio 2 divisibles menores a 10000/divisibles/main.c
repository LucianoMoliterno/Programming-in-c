#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Mostrar todos los números divisibles por 2, por 6 y por 7 que no sean divisibles por 4 y sean menores a 10000. \n");
    int i=0;
    for (i=0; i<=1000; i++)
    {
        if(i%2==0 && i%6==0 && i%7==0 && i%4!=0)
        {
            printf("* %d \n",i);
        }
    }





    return 0;
}
