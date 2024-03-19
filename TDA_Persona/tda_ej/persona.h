#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED
struct estructura_persona;
typedef struct estructura_persona *Persona;

Persona CrearPersona(char nombre[],int edad);
Persona CrearPersonaPorTeclado();
char* getNombrePersona(Persona p);
int getEdadPersona(Persona p);
void setNombrePersona(Persona p,char nombre[]);
void setEdadPersona(Persona p,int edad);
void mostrarPersona(Persona p);
void destruirPersona(Persona p);

#endif // PERSONA_H_INCLUDED
