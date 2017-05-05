#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opc=0,nro1,nro2;
    int suma,resta,producto,division;
    char rta='s';

   do{
        system("cls");
        printf("BIENVENIDOS A LA CALCULADORA");

        printf("\nIngrese los valores");
         do{
            printf("\n\nIngrese el primer valor:");
            scanf("%d",&nro1);
            }while(nro1<=0);

            do{
            printf("Ingrese el segundo valor:");
            scanf("%d",&nro2);
            }while(nro2<=0);

        printf("\n1.-Sumar");
        printf("\n2.-Restar");
        printf("\n3.-Multiplicar");
        printf("\n4.-Dividir");
        printf("\n5.-Salir");
        scanf("%d",&opc);

        switch(opc)
        {

    case 1:
            suma=nro1+nro2;
            printf("La suma de %d + %d es : %d",nro1,nro2,suma);
            getch();
            break;

    case 2:

            resta=nro1-nro2;
            printf("La resta de %d - %d es : %d",nro1,nro2,resta);
            getch();
            break;

    case 3:
            producto=nro1*nro2;
            printf("El producto entre %d y %d es : %d",nro1,nro2,producto);
            getch();
            break;
    case 4:
            division=nro1/nro2;
            printf("La division es: %d",division);
            getch();
            break;
        }

        printf("\nDesea seguir operando?s/n");
        fflush(stdin);
        scanf("%c",&rta);

    }while(rta=='s');



    return 0;
}
