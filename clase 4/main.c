#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    int x,y,z,w,valor,result;
    printf("ingrese numero: ");
    scanf("%d",&x);
    printf("ingrese numero: ");
    scanf("%d",&y);
    printf("\nIngrese numero para factorial:");
    scanf("%d",&valor);

    z=suma(x,y);
    w=resta(x,y);
    result=factorial(valor);

    printf("La suma es %d \n",z);
    printf("la resta es %d",w);
    printf("\nEl factorial de %d es %d",valor,result);
}

