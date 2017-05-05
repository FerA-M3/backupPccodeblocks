#include <stdio.h>
#include <stdlib.h>

int main()
{
    int legajo[3];
    int salario[3];
    int edad[3];
    int i;
    char nombre[3][20];

    for(i=0;i<3;i++)
    {
        printf("Ingrese el Nombre");
        fflush(stdin);
        fgets(nombre[i],20,stdin);      // va el indice en nombre porq es un string de cadenas
        printf("Ingrese legajo.-");   // el i+1 es para q empiece desde legajo 1 y no cero
        scanf("%d",&legajo[i]);
        printf("Ingrese salario.-");
        scanf("%d",&salario[i]);
        printf("Ingrese la edad.-");
        scanf("%d",&edad[i]);

    }

    for(i=0;i<3;i++)
    {
        printf("\n\nNombre %s \nLegajo %d \nSalario %d \nEdad %d",nombre[i],legajo[i],salario[i],edad[i]);
    }

    return 0;
}
