#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "persona.h"


struct estructura_persona{
    char nombre[30];
    int edad;
};
Persona CrearPersona(char nombre[],int edad){
    Persona p = malloc(sizeof(struct estructura_persona));
    p->edad = edad;
    strcpy(p->nombre,nombre);
    return p;
}
Persona CrearPersonaPorTeclado(){
    int edad;
    char nombre[30];
    printf("Ingresar nombre: ");
    fflush(stdin);
    gets(nombre);
    printf("Ingresar edad: ");
    scanf("%d",&edad);
    return CrearPersona(nombre,edad);
}
int getEdadPersona(Persona p){
    return p->edad;
}
char* getNombrePersona(Persona p){
    return p->nombre;
}
void setNombrePersona(Persona p,char nombre[]){
    strcpy(p->nombre,nombre);
}
void setEdadPersona(Persona p,int edad){
    p->edad = edad;
}
void mostrarPersona(Persona p){
    printf("Nombre: %s\n",p->nombre);
    printf("Edad: %d\n",p->edad);
}
void destruirPersona(Persona p){
    free(p);
}
