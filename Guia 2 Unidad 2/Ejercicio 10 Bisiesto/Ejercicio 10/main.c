#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Ejercicio 10 Determinar si un anio es bisiesto\n");
    int year=0;

    printf("Ingrese un anio\n");
    scanf ("%d",&year);
if (year%4==0 && year%100!=0 || year%400==0 )
 {printf("%d es anio bisiesto",year);
}
else
 {printf("%d No es anio bisiesto",year);
}
//((year%4=0)&&(year%400!=0)&&(year%100=0)) */



    return 0;
}
