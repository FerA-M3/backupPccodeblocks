#include <stdio.h>
#include <stdlib.h>

void muestra(int x, int y);

int main()
{
    int x,y;
    printf("Ingrese numero entero");
    scanf("%d",&x);
    printf("Ingrese numero entero");
    scanf("%d",&y);
    muestra(x,y);
    printf("\n-----valores dentro del main-----");
    printf("\nx vale %d \ny vale %d",x,y);


    return 0;
}

 void muestra(int x, int y)
 {
    x=y;
    printf("\n-----valores dentro del main-----");
    printf("\nx vale %d \ny vale %d",x,y);

 }
