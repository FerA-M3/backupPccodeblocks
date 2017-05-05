#include <stdio.h>
#include <stdlib.h>

int main()
{
    int legajo[5];
    int salario[5];
    int edad[5];
    int i;

    for(i=0;i<7;i++)
    {
        printf("Ingrese legajo.-");   // el i+1 es para q empiece desde legajo 1 y no cero
        scanf("%d",&legajo[i]);
        printf("Ingrese salario.-");
        scanf("%d",&salario[i]);
        printf("Ingrese la edad.-");
        scanf("%d",&edad[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("\nLegajo %d Salario %d Edad %d",legajo[i],salario[i],edad[i]);
    }

    return 0;
}
