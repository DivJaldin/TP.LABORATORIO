#include <stdio.h>
#include <stdlib.h>

struct fecha { int dia,mes,anio;};
struct gente {
char nombre[20];
struct fecha f_nacimiento;
};
void main(void)
{
struct gente pers;
struct fecha fn;
printf("\nIngrese nombre: ");
gets(pers.nombre);
printf("\nIngrese dia de nacimiento: ");
scanf("%d",&fn.dia);
printf("\nIngrese mes de nacimiento: ");
scanf("%d",&fn.mes);
printf("\nIngrese a¤o de nacimiento: ");
scanf("%d",&fn.anio);
pers.f_nacimiento=fn;

printf("\nEl nombre y fecha de nacimiento es: %s,%i,%i,%i", pers.nombre, fn.dia,fn.mes,fn.anio);
}
