#include <stdio.h>
#include <stdlib.h>

int main()
{
    int datos[5],i;

    for(i=0;i<5;i++)
    {
        printf("Ingrese datos:");
        scanf("%d",&datos[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d\n",datos[i]);
    }

    return 0;
}
