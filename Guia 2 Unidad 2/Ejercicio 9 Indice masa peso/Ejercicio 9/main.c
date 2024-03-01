#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("*Pedir el peso y la altura de una persona, calcular el indice de masa corporal \n\n");
    float altura=0;
    float peso=0;
    float imc=0;
    printf("*Ingrese peso \n");
  scanf("%f",&peso);
      printf("*Ingrese altura \n");
  scanf("%f",&altura);
imc = peso/(altura*altura);
    printf("Peso %.2f Kg, Altura %.2f Mt , Indice de Masa Corporal %.2f \n \n  ", peso,altura, imc );

if (imc<18.5)
    {printf("*Peso inferior al normal\n");}

if ((imc<18.6)||(imc<=24.80))

     {printf("*Peso Normal\n");}

if ((25.0<imc)||(29.9<=imc))
     {printf("*Peso superior al normal\n");}

if (imc>30.0)
     {printf("*Obesidad\n");}




    return 0;
}
