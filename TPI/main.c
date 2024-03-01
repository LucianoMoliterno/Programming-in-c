#include <stdio.h>  //librerias
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void correoArgentino(); //prototipos de funciones
void correoRegional();
void correoNacional();
void correoOca();
void ocaRegional();
void ocaNacional();
void andreaniEncomienda();
void andreaniRegional();
void andreaniNacional();


int main()
{ //función principal
int opcion; //declaracion de variable tipo entera
//mensajes en pantalla
printf("Bienvenido. A continuacion se calculara el precio de envio de su paquete. Seleccione una empresa\n");
printf("\n\n");
do{
 // abrimos do while
printf("1-CORREO ARGENTINO\n2-OCA\n3-ANDREANI ENCOMIENDA\n0-SALIR\n");
printf("Opcion: ");
scanf("%d",&opcion); //guardamos lo elegido en la variable opcion
if(opcion>=0 || opcion<=3){
 //abro if que se cumple mientras la opcion sea correcta
switch(opcion)
{ //switch que va a calcular el paquete de la emppresa que se haya seleccionado
case 0:
printf("Gracias por usar nuestro servicio. Hasta pronto!");
break;
case 1:
correoArgentino(); //llamo a procedimiento
break;
case 2:
correoOca(); //llamo a procedimiento
break;
case 3:
andreaniEncomienda();//llamo a procedimiento
break;
default:
printf("Vuelva a intentarlo. Seleccione una empresa\n");
}
}
} while(opcion<0 || opcion>3); //en caso de ingresar una opcion correcta
//se ejecutan las instrucciones, caso contrario (default) se vuelven a repetir los mensajes hasta ingresar correctamente
    return 0;//cierra main
}
void correoArgentino(){ //desarrollo de prodecimiento para correo argentino
    int opcion; //declaramos variable
printf("Seleccione la opcion que desee\n");
do{ //abrimos do while
printf("1-Encomienda Regional\n2-Encomienda Nacional\n"); //seleccionar una opcion
printf("Opcion: ");
scanf("%d",&opcion);
switch(opcion){
case 1:
correoRegional();
break; //llamada a procedimientos
case 2:
correoNacional();
break;
default:
printf("Intentelo nuevamente\n");
}
}
while(opcion<1 || opcion>2);
 // cumple instrucciones si la opcion es correcta
//si es incorrecta repite mensaje para volver a intentar
}
correoRegional(){
//procedimiento auxiliar para correo argentino
 int opcion;
printf("La modalidad de entrega es Urgente (24 horas)\n");
printf("Seleccione la opcion que mas se adecue a las caracteristicas de su encomienda\n");
do{
//abre do while
printf("\n1-Peso comprendido entre 0.500kg-1kg\n2-Peso comprendido entre 1.1kg-2kg\n");
printf("Opcion: ");
scanf("%d",&opcion);
if(opcion==1){
printf("El precio del paquete es de $355\n");
} //dice el precio dependiendo la opcion seleccionada
else if(opcion==2){
printf("El precio del paquete es de $410\n");
}
 else{
printf("Realice otro intento\n");
}
}while(opcion<1 || opcion>2);
} //cierra do while
void correoNacional(){
//procedimiento auxiliar para correo argentino
int opcion;
printf("La modalidad de entrega es Urgente (24 horas)\n");
printf("Seleccione la opcion que mas se adecue a las caracteristicas de su encomienda\n");
do{
//abre do while
printf("\n1-Peso comprendido entre 0.500kg-1kg\n2-Peso comprendido entre 1.1kg-2kg\n");
printf("Opcion: ");
 scanf("%d",&opcion);
if(opcion==1){
printf("El precio del paquete es de $460\n");
} //calcula precio dependiendo la opcion o pide realizar otro intento
else if(opcion==2){
printf("El precio del paquete es de $620\n");
}
else{
printf("Realice otro intento\n");
}
}while(opcion<1 || opcion>2);
} //cierra do while
void correoOca(){
//procedimiento para OCA
int opcion;
printf("Seleccione la opcion que desee\n");
do{
//abre do while
printf("1-Encomienda Regional\n2-Encomienda Nacional\n");
printf("Opcion: ");
scanf("%d",&opcion);
switch(opcion){
//abre switch case
case 1:
ocaRegional();
break; //llamada a funciones auxiliares
case 2:
ocaNacional();
break;
default:
printf("Opcion incorrecta, vuelva a seleccionar\n");
}
}
while(opcion<1 || opcion>2);
}//cierra do while

void ocaRegional(){
//procedimiento para OCA regional
int opcion;
printf("La modalidad de entrega es Urgente (24 horas)\n");
printf("Seleccione la opcion que mas se adecue a las caracteristicas de su encomienda\n");
do{
//abre do while
printf("\n1-Peso comprendido entre 0.500kg-1kg\n2-Peso comprendido entre 1.1kg-2kg\n");
printf("Opcion: ");
scanf("%d",&opcion);
if(opcion==1){
printf("El precio del paquete es de $800");
}//calcula costo del paquete
else if(opcion==2){
printf("El precio del paquete es de $800");
}
else{
printf("La opcion es incorrecta. Vuelva a intentarlo\n");
}
}
while(opcion<1 || opcion>2);
}//cierra do while
void ocaNacional(){
//procedimiento para OCA nacional
int opcion;
printf("La modalidad de entrega es Urgente (24 horas)\n");
printf("Seleccione la opcion que mas se adecue a las caracteristicas de su encomienda\n");
do{
printf("\n1-Peso comprendido entre 0.500kg-1kg\n2-Peso comprendido entre 1.1kg-2kg\n");
printf("Opcion: ");
scanf("%d",&opcion);
if(opcion==1){
printf("El precio del paquete es de $1300");
}
//calcula el precio de la encomienda
else if(opcion==2){
printf("El precio del paquete es de $1300");
}
else
{printf("La opcion es incorrecta. Vuelva a intentarlo.");
}
}
while(opcion<1 || opcion>2);
}

void andreaniEncomienda(){//procedimiento para andreani que calcula precios
int opcion;
printf("Seleccione la opcion que desee\n");
do{
//abre do while
printf("1-Encomienda Regional\n2-Encomienda Nacional\n");
printf("Opcion: ");
scanf("%d",&opcion);
switch(opcion){
//abre switch case
case 1:
andreaniRegional();
break;//llamada a procedimientos
case 2:
andreaniNacional();
break;
default:
printf("Realice otro intento\n");
}
}
while(opcion<1 || opcion>2);
}//cierra do while
void andreaniRegional(){//procedimiento auxilar para andreani
int opcion;
printf("La modalidad de entrega es Urgente (24 horas)\n");
 printf("Seleccione la opcion que mas se adecue a las caracteristicas de su encomienda\n");
do{
//abre do while
printf("\n1-Peso comprendido entre 0.500kg-1kg\n2-Peso comprendido entre 1.1kg-2kg\n");
printf("Opcion: ");
scanf("%d",&opcion);
if(opcion==1){
printf("El precio del paquete es de $550");
}
else if(opcion==2){
printf("El precio del paquete es de $550");
}
else{
printf("La opcion es incorrecta. Vuelva a intentarlo.");
}
}
while(opcion<1 || opcion>2);
}//cierra do while

void andreaniNacional(){//procedimiento auxiliar para andreani
int opcion;
printf("La modalidad de entrega es Urgente (24 horas)\n");
printf("Seleccione la opcion que mas se adecue a las caracteristicas de su encomienda\n");
do{
//abre do while
printf("\n1-Peso comprendido entre 0.500kg-1kg\n2-Peso comprendido entre 1.1kg-2kg\n");
printf("Opcion: ");
scanf("%d",&opcion);
if(opcion==1){
printf("El precio del paquete es de $550");
}//calcula el precio
else if(opcion==2){
printf("El precio del paquete es de $550");
}
else{
printf("La opcion es incorrecta. Vuelva a intentarlo.");
}
}
while(opcion<1 || opcion>2);
}//cierra do while
