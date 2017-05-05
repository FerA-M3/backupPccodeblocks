#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1;
    int nro2;
    int suma=0;


    printf ("Ingrese el valor del primer numero:");
    scanf("%d",&nro1);
    printf("Ingrese el valor del segundo numero:");
    scanf("%d",&nro2);

    suma=nro1+nro2;

    printf("El valor de la suma es: %d",suma);
    return 0;
}
