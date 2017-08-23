#include <stdio.h>
#include <stdlib.h>

int main()
/*{
    int edad;
    do
    {
        printf("ingrese edad:");
        scanf("%d",&edad);
    }

    while(edad<0);


}*/
/*{
    int edad;
    printf("ingrese edad:");
    scanf("%d",&edad);
    while(edad<0)
    {
        printf("ingrese edad:");
        scanf("%d",&edad);
    }


}*/
/*{
    int edad;
    for(edad=0;edad<10;edad++)
    {

    }
}*/
/*{
    int numero;
    printf("ingrese un numero:");
    scanf("%d",&numero);
    while(numero<10)
    {
        printf("ingrese un numero del 1 al 10:");
        scanf("%d",&numero);
    }
    printf("los numeros ingresados son: %d",numero);
}*/
/*{
    int i;
    for(i=0;i<10;i++)
    {
       printf("%d\n",(i+1));
    }
    return 0;

}*/
/*{
    int i=0;
    while(i<10)
    {
        printf("%d\n",(i+1));
        i++;
    }
    return 0;
}*/
/*{
    int i=0;
    do
    {
        printf("%d\n",(i+1));
        i++;
    }
    while(i<10);
    return 0;
}*/
/*{
    char d;
    for(;;) //for infinito
    {
        d=getc(stdin); //le asigna un valor a d
        printf("%c",d);
        if (d=='s')
            break;
    }
}*/
{
    int i;
    int suma=0;
    int promedio;
    for(i=0; i<3; i++)
    {
        int aux;

        scanf("%d",&aux);
        suma=suma+aux;
        promedio++;
    }

    printf("la suma es:%d",suma);
}



