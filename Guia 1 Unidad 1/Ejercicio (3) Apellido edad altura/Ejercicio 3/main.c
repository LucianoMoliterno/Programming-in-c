#include <stdio.h>
#include <stdlib.h>

// Nombre Apellido Edad Genero Altura

int main()
{
    char nombre[30];
    char apellido [30];
    char genero;
    int edad;
    float altura;

    //peticion de datos

    fflush(stdin);

    printf("Ingrese su nombre\n");
    scanf("%s", nombre);

    fflush(stdin);
    printf("Ingrese su apellido\n");
    scanf("%s", apellido);

   fflush(stdin);
   printf("Ingrese su nombre MoF \n");
   scanf("%c",&genero);

    fflush(stdin);
    printf("Ingrese su edad\n");
    scanf("%d",&edad);

    fflush(stdin);
    printf("Ingrese su altura\n");
    scanf("%f",&altura);

  printf("\n");
  printf(" Su nombre es %s su apellido %s su genero %c edad %d y altura %.2f ", nombre,apellido , genero, edad, altura);

  //printf ("su nombre es %s", nombre);

   return 0;
}
