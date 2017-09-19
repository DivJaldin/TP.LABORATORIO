#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    int texto[100]= {}; //texto principal de pantalla
    int resultadoOperacion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                 resultadoOperacion = (agregarPersona(listaPersonas));
                if (resultadoOperacion == 1)         //En funcion de lo que devuelva agregarPersona mostramos distintos mensajes.
                {
                    strcpy(texto, "Persona dada de alta correctamente!\n");
                }
                else if (resultadoOperacion == -1)
                {
                    strcpy(texto,"La memoria llego al maximo. Elimine algun registro e intente de nuevo.\n");
                }
                else if (resultadoOperacion == -2)
                {
                    strcpy(texto,"Se cancelo el alta de la persona.\n");
                }
                else if (resultadoOperacion == -3)
                {
                    strcpy(texto, "La persona ya se encuentra cargada.\n");
                }
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                seguir = 'n';
                break;
        }
    }

    printf("\nSelecciono la opcion: %d", opcion);
}

