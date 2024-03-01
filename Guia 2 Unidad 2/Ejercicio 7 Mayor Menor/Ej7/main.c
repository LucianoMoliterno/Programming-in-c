#include <stdio.h>
#include <stdlib.h>

// Ejercicio 7: Pedir dos números, mostrar por pantalla el mayor de ellos



int main()
{


    int n1=0;
    int n2=0;

    printf("Inicio de programa \n");

    printf("Inngrese N1 \n");
    scanf("%d", &n1);
    printf("Ingrese N2\n");
    scanf("%d", &n2);

    if (n1>n2)
    {
        printf("%d es el numero mayor",n1);
    }

    else
     printf("%d es el numero mayor",n2);


return 0;
}
