#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombres[2][20];
    int strcmp(nombres);
    int i;
    for(i=0;i<2;i++)
    {
        printf("Ingrese nombre a comparar");
        fflush(stdin);
        fgets(nombres[i],20,stdin);
    }
    for(i=0;i<2;i++)
    {
    if(strcmp(nombres[i][20],nombres[i][20])==0)
    printf("Los nombres son iguales");
    if(strcmp(nombres[i][20],nombres[i][20])<0)
    printf("el primero es menor");
    if(strcmp(nombres[i][20],nombres[i][20])>0)
    printf("el segundo es mayor ");
    }


    return 0;
}
