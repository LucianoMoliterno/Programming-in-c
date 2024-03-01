#include <stdio.h>
#include <stdlib.h>
#include "persona.h"
int main()
{
    Persona p1 = CrearPersonaPorTeclado();
    system("cls");
    mostrarPersona(p1);
    destruirPersona(p1);
    return 0;
}
