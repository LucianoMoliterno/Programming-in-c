#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum menu {cantidad=1,cargar=2,ver=3,ordenarp=4, buscar=5,salir=6};

struct fecha {int dia; int mes; int anio;};

struct vehiculo {char modelo [20]; char patente [20]; struct fecha fecha;};

struct persona {
    char nombre [20];
    char apellido [20];
    int dni;
    struct vehiculo vehiculo;

};


void cargarestructura (struct persona personas[], int cantidad);
void imprimir (struct persona personas[], int cantidad);
void ordenarPorPatente(struct persona personas[], int cantidad);
int busquedaBinariaDNI (struct persona personas[], int cantidad,int dato);
void guardarEnArchivo(struct persona personas[], int cantidad);




int main()
{

   int opcion=0; //opcion para el menu
   int num;      // largo de la estructura, ingreso de datos por usuario
   int datoabuscar;
   int pos;




          struct persona personas [100]; //Declaro un vector de 100, despues el usuario decide cuantos quiere cargar de esos 100






//        printf ("Cuantas personas cargamos?\n");
//                scanf("%d",&num);
//                struct persona personas [num];



   while (opcion !=6)
   {  printf("\n****") ;
      printf("\nMenu principal\n") ;
      printf("\n 1 Cantidad de personas. \n 2 Cargar estructura  \n 3 Ver estructura  \n 4 Ordenar estructura \n 5 Buscar por Dni \n 6 Salir\n  \n****\n ");
      scanf("%d",&opcion);



      //////////////DESARROLLO DEL MENU//////
      switch (opcion)

      {
        case cantidad: printf("\nCANTIDAD\n");
                printf ("Cuantas personas cargamos?\n");
                scanf("%d",&num);
                system("cls");




                break;



          case cargar  : printf("\nCARGAR\n");
                         cargarestructura(personas,num);

              break;


          case ver     : printf("\nVER\n");
                        ordenarPorPatente(personas,num);
                        guardarEnArchivo(personas,num);
                        imprimir(personas,num);


              break;


          case ordenarp: printf("\nORDENAR\n ");
              break;


case buscar: printf("\Buscar por Dni\n ");
        printf("Ingrese el dni a buscar");
        scanf ("%d",&datoabuscar);
       pos=busquedaBinariaDNI (personas,num,datoabuscar);
       printf ("Dni %d , encontrado en la posicion %d" ,datoabuscar, pos) ;
              break;

          case salir   : system ("cls");
              printf("\n**Saliendo...Gracias vuelva prontos**\n");
                        break;

      }





      printf("\n****\n") ;



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

    {  printf("\n**Ingreso Datos N %d **\n",i+1);

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

        printf("\n**Fin  Ingreso Datos N %d **\n",i+1);


    }




}




void imprimir (struct persona personas[], int cantidad)
{
    int i;
    for (i=0;i<cantidad;i++)
{   printf("\n***Datos N: %d  ***\n" ,i+1);
    printf(" \n *Fecha: \n  ANIO: %d MES: %d DIA: %d \n ",personas[i].fecha.anio,personas[i].fecha.mes,personas[i].fecha.dia);

    printf("\n *Persona: \n  Apellido: %s Nombre: %s  Dni: %d \n",personas[i].apellido,personas[i].nombre,personas[i].dni);

    printf("\n *Auto: \n  Modelo: %s Patente: %s \n ",personas[i].vehiculo.modelo,personas[i].vehiculo.patente);
    printf("\n***Fin Datos N: %d  ***\n" ,i+1);

}
}



void ordenarPorPatente(struct persona personas[], int cantidad)
{
    struct persona aux;
    int i;
    int j;



    for (i=0;i<cantidad;i++)
{

    for(j=0;j<cantidad-1;j++)
    {

        if (strcmp(personas[j].vehiculo.patente,personas[j+1].vehiculo.patente)>0)
        {
        aux=personas[j];
        personas[j]=personas[j+1];
        personas[j+1]=aux;

        }


    }




}

}




int busquedaBinariaDNI (struct persona personas[], int cantidad,int dato)


   {
       int i;
       int j;

       struct persona auxpersonas;


       ////////ordenar las estructuras por dni
       for (i=0;i<cantidad;i++)
{

    for(j=0;j<cantidad-1;j++)
    {

        if(personas[j].dni>personas[j+1].dni)
        {
        auxpersonas=personas[j];
        personas[j]=personas[j+1];
        personas[j+1]=auxpersonas;

        }


    }


}

imprimir (personas,cantidad);


 int med;
    int min=0;
    int max=cantidad;
      while (min<=max)
       {
        med=(min+max)/2;
          if (personas[med].dni==dato)
              { return med;}
             else
                  { if (dato>personas[med].dni)
                      {  min=med+1;
                       med=(max+min)/2;}

                     else {
                               max=med-1;
                               med=(max+min)/2;
                      }
              }
       }
return -1;










   } //fin busqueda binaria



   void guardarEnArchivo(struct persona personas[], int cantidad)
{
FILE *reporte =fopen ("reporte.txt","w");

int i;
    for (i=0;i<cantidad;i++)
{   fprintf(reporte,"\n***Datos N: %d  ***\n" ,i+1);



            //Fecha
           fprintf(reporte,"%d+%d+%d+",personas[i].fecha.anio,personas[i].fecha.mes,personas[i].fecha.dia);
           //Persona
           fprintf(reporte,"%s+%s+%d+",personas[i].apellido,personas[i].nombre,personas[i].dni);
           //Vehiculo
           fprintf(reporte,"%s+%s",personas[i].vehiculo.modelo,personas[i].vehiculo.patente);




fclose(reporte);



}



}
