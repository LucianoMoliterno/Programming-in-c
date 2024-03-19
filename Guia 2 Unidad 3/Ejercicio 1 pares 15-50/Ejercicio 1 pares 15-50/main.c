#include <stdio.h>
#include <stdlib.h>

int main()
{


printf("Mostrar todos los numeros pares entre 15 y 50\n");


int i=0;

for (i=15;i<=50;i++)
{
  if (i%2==0)
  {printf("%d\n",i);}
}

    return 0;
}
