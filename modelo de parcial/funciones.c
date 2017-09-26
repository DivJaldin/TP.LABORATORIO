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

void ValidarCadena(char cadena[])
{
    char aux[2000];
    fgets(aux, 2000, stdin);
    while (strlen(aux)<1 || strlen(aux)>30)
    {
        printf("\nReingrese descripcion, maximo 30: ");
        scanf("%s", aux);
    }
    strcpy(cadena, aux);
    return;
}

void ValidarCodigo(char codigoDelProducto[])
{
    char aux [50];
    // FLUSH;
    scanf("%s", aux);
    while (strlen(aux)!=4)
    {
        printf("Reingrese codigo (4 caracteres): ");
        scanf("%s", aux);
    }
    strcpy(codigoDelProducto, aux);
}



void altaDeProducto(struct Eproducto[])
    {
    int i;
    float tempfloat;
    system("cls");
    printf("ALTA DE ARTICULOS\n");
    printf("-----------------\n");
    /* BUSCA UN LUGAR VACIO PARA GUARDAR*/
    for(i=0;i<M;i++)
        {
        if(strcmp(Eproducto_Eprovedor[i].codigoDelProducto, "0000")==0)
            {
            /* INGRESA CODIGO */
            printf("Ingrese codigo: ");
            ValidarCodigo(datos[i].codigo);
            /* INGRESA DESCRIPCION */
            printf("Ingrese Descripcion: ");
            ValidarCadena(Eproducto[i].descripcionDelProducto);
            /* INGRESA PRECIO */
            printf("Ingrese Precio: ");
            scanf("%f", &tempfloat);
            Eproducto[i].importe=tempfloat;
            /* INGRESA cantidad */
            printf("Ingrese cantidad: ");
            scanf("%d", &Eproducto[i].cantidad);
            break;
            }
        }
        /* SI RECORRE TODO EL VECTOR DICE SI NO QUEDA ESPACIO O SI FUE GUARDADO*/
        if(i==M)
            printf("No queda memoria suficiente para seguir guardar datos\n");
            else
            printf("\nEl dato fue guardado exitosamente");
    printf("\nPresione ENTER para continuar...");
    system("pause>>null");
    return;
    }
