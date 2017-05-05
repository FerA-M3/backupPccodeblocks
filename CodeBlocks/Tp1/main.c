#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"


int main()
{
    int opc=0;
    float nro1,nro2;

   do{
        system("cls");
        printf("BIENVENIDOS A LA CALCULADORA");

        printf("\n\n1- Ingresar 1er operando (A=%.2f)\n",nro1);
        printf("2- Ingresar 2do operando (B=%.2f)\n",nro2);
        printf("3- Calcular la suma (%.2f+%.2f)\n",nro1,nro2);
        printf("4- Calcular la resta (%.2f-%.2f)\n",nro1,nro2);
        printf("5- Calcular la division (%.2f/%.2f)\n",nro1,nro2);
        printf("6- Calcular la multiplicacion (%.2f*%.2f)\n",nro1,nro2);
        printf("7- Calcular el factorial (%.2f!)\n",nro1);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        printf("\nIngrese la opcion que desee realizar: ");
        scanf("%d",&opc);

        switch(opc)
        {


    case 1:
            printf("Ingrese el primer valor:");
            scanf("%f",&nro1);
            break;

    case 2:
            printf("Ingrese el segundo valor:");
            scanf("%f",&nro2);
            break;
    case 3:
            suma(nro1,nro2);
            printf("\nPresione alguna tecla para continuar...");
            getch();
            break;
    case 4:
            resta(nro1,nro2);
            printf("\nPresione alguna tecla para continuar...");
            getch();
            break;
    case 5:
            divi(nro1,nro2);
            printf("\nPresione alguna tecla para continuar...");
            getch();
            break;
    case 6:
            producto(nro1,nro2);
            printf("\nPresione alguna tecla para continuar...");
            getch();
            break;
    case 7:
            fact(nro1);
            printf("\nPresione alguna tecla para continuar...");
            getch();
            break;
    case 8:
           printf("Todas las operaciones son:");

           suma(nro1,nro2);
           resta(nro1,nro2);
           divi(nro1,nro2);
           producto(nro1,nro2);
           fact(nro1);
           printf("\nPresione alguna tecla para continuar...");
           getch();
           break;
    case 9:
            printf("\nGracias por haber usado esta aplicacion");
            return 0;

    default:
        printf("Opcion no valida, ingrese de 1 a 9\n");
        printf("\nPresione alguna tecla para continuar...");
        getch();
        break;
         }


    }while(opc!=9);




    return 0;
}



