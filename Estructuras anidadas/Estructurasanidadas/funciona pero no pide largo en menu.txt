#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum menu {cantidad=1,cargar=2,ver=3,ordenarp=4,salir=5};

struct fecha {int dia; int mes; int anio;};
struct vehiculo {char modelo [20]; char patente [20];};

struct persona {
    char nombre [20];
    char apellido [20];
    int dni;
    struct vehiculo vehiculo;
    struct fecha fecha;
};


void cargarestructura (struct persona personas[], int cantidad);
void imprimir (struct persona personas[], int cantidad);



int main()
{

   int opcion=0; //opcion para el menu
   int num;      // largo de la estructura, ingreso de datos por usuario


          printf ("Cuantas personas cargamos?\n");
          scanf("%d",&num);
          struct persona personas [num];






//        printf ("Cuantas personas cargamos?\n");
//                scanf("%d",&num);
//                struct persona personas [num];



   while (opcion !=5)
   {  printf("\n**********************") ;
      printf("\nMenu principal\n") ;
      printf("\n 1 Cantidad de personas. \n 2 Cargar estructura  \n 3 Ver estructura  \n 4 Ordenar estructura \n 5 Salir\n  \n**********************\n ");
      scanf("%d",&opcion);



      //////////////DESARROLLO DEL MENU//////
      switch (opcion)

      {
        case cantidad: printf("\nCANTIDAD\n");





                break;



          case cargar  : printf("\nCARGAR\n");
                         cargarestructura(personas,num);

              break;


          case ver     : printf("\nVER\n");
                        imprimir(personas,num);


              break;


          case ordenarp: printf("\nORDENAR\n ");
              break;


          case salir   : printf("\n****Saliendo...Gracias vuelva prontos****\n");

      }





      printf("\n**********************\n") ;



   }





    return 0;
}





///////////DESARROLLO FUNCIONES

void cargarestructura (struct persona personas[], int cantidad)

{

    int i;
    char aux[20];


    printf("\nCargar estructura, ingrese los siguientes datos \n");
    for (i=0;i<cantidad;i++)

    {  printf("\n**********Ingreso Datos N %d **********\n",i+1);

        //Estructura Fecha
        printf("\nIngrese Dia: ");
        scanf("%d",&personas[i].fecha.dia);
        fflush(stdin);

        printf("\nIngrese Mes: ");
        scanf("%d",&personas[i].fecha.mes);
        fflush(stdin);

        printf("\nIngrese Anio: ");
        scanf("%d",&personas[i].fecha.anio);
        fflush(stdin);


        ////Estructura Persona
        printf("\nIngrese Nombre: ");
        gets (aux);
        strcpy (personas[i].nombre,aux);
        fflush(stdin);



        printf("\nIngrese Apellido: ");
        gets (aux);
        strcpy (personas[i].apellido,aux);
        fflush(stdin);

        printf("\nIngrese Dni: ");
        scanf("%d",&personas[i].dni);
        fflush(stdin);

        ////Estructura Auto
        printf("\nIngrese Modelo: ");
        gets (aux);
        strcpy (personas[i].vehiculo.modelo,aux);
        fflush(stdin);


        printf("\nIngrese patente: ");
        gets (aux);
        strcpy (personas[i].vehiculo.patente,aux);
        fflush(stdin);

        printf("\n**********Fin  Ingreso Datos N %d **********\n",i+1);


    }

      printf("\n Imprimiendo La Estructura \n ");



}




void imprimir (struct persona personas[], int cantidad)
{
    int i;
    for (i=0;i<cantidad;i++)
{   printf("\n***************Datos N: %d  ***************\n" ,i+1);
    printf(" \n *Fecha: \n  ANIO: %d MES: %d DIA: %d \n ",personas[i].fecha.anio,personas[i].fecha.mes,personas[i].fecha.dia);

    printf("\n *Persona: \n  Apellido: %s Nombre: %s  Dni: %d \n",personas[i].apellido,personas[i].nombre,personas[i].dni);

    printf("\n *Auto: \n  Modelo: %s Patente: %s \n ",personas[i].vehiculo.modelo,personas[i].vehiculo.patente);
    printf("\n***************Fin Datos N: %d  ***************\n" ,i+1);

}
}


