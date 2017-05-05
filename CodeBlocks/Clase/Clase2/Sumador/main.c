#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1;
    int nro2;
    int suma=0;
    char rta;

    do
    {
        system("cls");
        do{
        printf("Ingrese primer numero:");
        scanf("%d",&nro1);
        }while(nro1<=0);
        do{
        printf("Ingrese segundo numero:");
        scanf("%d",&nro2);
        }while(nro2<=0);

        suma=nro1+nro2;

        printf("La suma es:%d",suma);
        do{
        printf("\nDesea seguir sumando?s/n");
        fflush(stdin);
        scanf("%c",&rta);
        }while(rta!='s' && rta!='n');

    }while(rta=='s');





return 0;
}
