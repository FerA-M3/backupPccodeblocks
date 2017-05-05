#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int contador=0;             // en este caso al usar un for no es necesario el contador
    int max,min,i,nro,flag=0;

    printf("HALLAR MAXIMOS Y MINIMOS\n");

    for(i=0;i<5;i++)
    {
       // contador=contador+i;
        printf("Ingese numero:");
        scanf("%d",&nro);
        if(flag==0)
        {
            max=nro;
            min=nro;
            flag=1;
        }
        if(nro>max)
        {
            max=nro;
        }
        if(nro<min)
        {
            min=nro;
        }
    }

    printf("\n\nEl numero maximo es: %d",max);
    printf("\nEl numero minimo es:%d",min);


    return 0;
}
