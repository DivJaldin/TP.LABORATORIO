#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int menu(char items[])
{
    int opcion;
    printf("&s", items);
    printf("\nSeleccione: ");
    scanf("%d", &opcion);
    return opcion;
}
void alta(EPersona personas[]){
int i;
for(i=0;i<5;i++){
    if(personas[i].estado==0){
        printf("\nNombre: ");
        setbuf(stdin, NULL);
        scanf("%[^\n]", personas[i].nombre);

        printf("\nEdad:");
        scanf("%d", personas[i].edad);

        printf("\nDni:");
        scanf("%d", personas[i].dni);
    }
}






}
