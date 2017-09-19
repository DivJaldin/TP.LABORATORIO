#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define MAX_PERSONAS 20


int menu(char items[])
{
    int opcion;
    printf("&s", items);
    printf("\nSeleccione: ");
    scanf("%d", &opcion);
    return opcion;
}
int obtenerEspacioLibre(EPersona lista[])
{
    int i;
    for(i=0;i<MAX_PERSONAS;i++){
        if(lista[i].estado==0){
            return i;
            break;
        }
    }
}
int buscarPorDni(EPersona listaPersonas[], int dni)
{
    int i;

    for (i = 0; i < MAX_PERSONAS; i++)
    {
        if(listaPersonas[i].dni == dni && listaPersonas[i].estado == 1)
        {
            return i;
            break;
        }
    }
    return -1;
}
