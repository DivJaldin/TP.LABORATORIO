#include <stdio.h>
#include <stdlib.h>

struct alumno{
int legajo,n1,n2;
char nombre[31];
float promedio;
};

int main()
{
    int suma;
    struct alumno alu;
    printf("\nIngrese legajo:");
    scanf("%d",&alu.legajo);
    printf("\nIngrese nombre:");
    fflush(stdin);
    scanf("%s",&alu.nombre);
   printf("\nIngrese nota del primer parcial:");
    scanf("%d",&alu.n1);
    printf("\nIngrese nota del segundo parcial:");
    scanf("%d",&alu.n2);

    alu.promedio=(float) (alu.n1+alu.n2)/2;
    system("cls");


    printf("\nEl legajo es: %d", alu.legajo);
    printf("\nEl nombre es: %s", alu.nombre);
   printf("\nEl promedio de nota  es: %.2f", alu.promedio);

}
