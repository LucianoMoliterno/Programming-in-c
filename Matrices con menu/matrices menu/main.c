#include <stdio.h>
#include <stdlib.h>

enum menu {cargar=1,mostrar=2,promedios=3, diagonales=4, salir=5}; //creacion de menu

//Creacion De prototipos//

void cargarmatriz (int matriz [3][3]);
void mostrarmatriz (int matriz [3][3]);
void cargarpromedioi (int matriz [3][3],float promi[3]);
void cargarpromedioj (int matriz [3][3],float promj[3]);
void mostrarpromedioi (float promi [3]);
void mostrarpromedioj (float promj [3]);
void sumardiagp  (int matriz [3][3],int diagp,int diags);
//void sumardiags  (int matriz [3][3],int diags);

int main()
{

 int opcion=0;
 int matriza [3][3];
 float promedioi [3];
 float promedioj [3];
 int DiagonalP=0;
 int DiagonalS=0;


    printf("\t \t  ********Programa para cargar una matriz  y mostrarla mediante un menu********\n");

////////////////MENU
   while (opcion !=5) {

     printf (" \n\n \n **********Menu Principal********** \n \n \n 1: Cargar matriz \n 2: Mostrar matriz \n 3: Mostrar Promedios \n 4: Calcular Diagonales \n 5: salir \n\n \n ********************************** \n \n \n ");
     scanf( "%d", &opcion );

 system("cls");
    switch (opcion)
    {

        case cargar: printf ("\n****CARGANDO MATRIZ****\n");
                     cargarmatriz(matriza);
                    break;

        case mostrar: printf ("\n****MOSTRANDO MATRIZ****\n");
                      mostrarmatriz(matriza);
                    break;

        case promedios: printf ("\n****MOSTRANDO PROMEDIOS****\n");

                        cargarpromedioi (matriza,promedioi);
                        cargarpromedioj(matriza,promedioj);
                        mostrarpromedioi(promedioi);
                        mostrarpromedioj(promedioj);
                        break;

         case diagonales:
                        printf ("\n****MOSTRANDO DIAGONALES****\n");
                        sumardiagp(matriza,DiagonalP,DiagonalS);
                        break;




        case salir: printf ("**********Saliendo del programa********** \n \n \n ");
                    break;

    }

//Fin While de menu







    }









    return 0;
}



void cargarmatriz (int matriz [3][3])
{
    int i=0;
    int j=0;
    int num=0;

    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
        {

            num=num+1;
            printf (" introduzca numero para la casilla [%d][%d] = %d \n ", i , j, num);

            matriz [i][j]= num;


        } //for J

    }// For I








} // Fin Cargar Matriz






void mostrarmatriz (int matriz [3][3])

{
    int i=0;
    int j=0;

    for (i=0;i<3;i++)
    {
       for (j=0;j<3;j++)
        {

            printf (" \n I [%d] J[%d] = %d \n  ", i , j, matriz [i][j]);




        } //for J

    }// For I








} // Fin Cargar Matriz



void cargarpromedioi (int matriz [3][3],float promi [3])
{
    int i=0;
    int j=0;
    int suma[3]= {0,0,0};



for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            suma[i]= suma[i]+matriz[i][j];

            //printf ("suma= %d \n \n", suma[i]);
        }
    }
    for(i=0;i<3;i++)
    {
        promi[i]=suma[i]/3;
    }





}







void cargarpromedioj (int matriz [3][3],float promj [3])

{

    int i=0;
    int j=0;
    int sumaj [3]= {0,0,0};


    for (i=0;i<3;i++)
    {

        for (j=0;j<3;j++)
        {
         sumaj[i]=sumaj[i] +matriz[j][i];

//printf ("suma [%d] = %d" ,i, sumaj[i]);
        }

    }


    for (i=0;i<3;i++)
    {
        promj[i]= sumaj[i]/3;
    }




}





void mostrarpromedioi (float promi[3])
{

    int i=0;

    printf ("\n\n\n *******MOSTRANDO PROMEDIO DE I******* \n\n\n");

    for (i=0;i<3; i++)
        {
            printf ("promI[ %d ] = %2.f \n\n\n", i, promi[i]);
        }



}

void mostrarpromedioj (float promj [3])

{

    int i=0;

    printf ("\n\n\n *******MOSTRANDO PROMEDIO DE I******* \n\n\n");

    for (i=0;i<3; i++)
        {
            printf ("promJ[%d] = %2.f \n\n\n", i, promj[i]);
        }



}





void sumardiagp  (int matriz [3][3],int diagp, int diags)
{


int i=0;
int j=0;

printf("\n**********Calculando Diagonal Principal**********\n");

    for (i=0;i<3;i++)
    {

        for (j=0;j<3;j++)
        {

        if(i==j)
        {

           printf(" \n los valores de la diagonal PRINCIPAL son [%d][%d] = %d \n", i,j, matriz [i][j] );
           diagp=diagp+matriz [i][j];
        } //if







        } //ForJ



    } //ForI
printf ("\n**********La suma de la diagonal principal es: %d **********\n",diagp);



printf("\n**********Calculando Diagonal Secundaria**********\n");

    for (i=0;i<3;i++)
    {

        for (j=0;j<3;j++)
        {





    if (i+j==3-1)
        {
        printf(" \n\n los valores de la diagonal SECUNDARIA son [%d][%d] = %d \n\n", i,j, matriz [i][j] );
           diags=diags+matriz [i][j];
        } //else





        } //ForJ

    } //ForI











printf ("\n\n\n**********La suma de la diagonal secundaria es: %d **********\n\n\n",diags);


}

//void sumardiags  (int matriz [3][3],int diags);



