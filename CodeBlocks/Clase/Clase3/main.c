#include <stdio.h>
#include <stdlib.h>

int suma(int x, int y);


int main()
{
    int x,y,z;

    printf("Ingrese el primer numero");
    scanf("%d",&x);
    printf("Ingrese el segundo numero");
    scanf("%d",&y);
    z=suma(x,y);
    printf("La suma es %d",z);

    return 0;
}

int suma(int x, int y)
{
    int total;
    total=x+y;
    return total;
}
