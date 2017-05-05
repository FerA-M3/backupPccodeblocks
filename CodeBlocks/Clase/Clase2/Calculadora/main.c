/**#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nro1,nro2;
    int option=0;
    int suma,resta,producto;
    float division;

    do{

        system("cls");
        do{
        printf("Ingrese primer numero:");
        scanf("%d",&nro1);
        }while(nro1<=0);
        do{
        printf("Ingrese segundo numero:");
        scanf("%d",&nro2);
        }while(nro2<=0);

        printf("\n\nQue operacion desea realizar?\n");
        printf("\n1-Sumar");
        printf("\n2-Restar");
        printf("\n3-Multiplicar");
        printf("\n4-Dividir");
        printf("\n5-Salir");

        scanf("%d",&option);



        switch(option)
        {
        case 1:
                suma=nro1+nro2;
                printf("La suma es:%d",suma);
                getch();
                break;
        case 2:
                resta=nro1-nro2;
                printf("La resta es:%d",resta);
                getch();
                break;
        case 3:
                producto=nro1*nro2;
                printf("La multi es:%d",producto);
                getch();
                break;
        case 4:
                division=nro1/nro2;
                printf("La division es:%f",division);
                getch();
                break;

        }

}while(option!=5);



    return 0;
}
