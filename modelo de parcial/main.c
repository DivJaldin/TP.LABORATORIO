#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir= 's';
    int opcion=0;
    while(seguir=='s')
    {
        printf("1- Altas");
        printf("\n2- Modificar");
        printf("\n3- Bajas");
        printf("\n4- Informar");
        printf("\n5- Listar");
        printf("\n6 Salir");

        scanf("%d",&opcion);

        switch (opcion)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            seguir='n';
            break;

        }
    }
}
