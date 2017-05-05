#include <stdio.h>
#include <stdlib.h>

int suma(int, int);
int resta(int,int);
int producto(int, int);
int divi(int, int);



int main()
{
    int opc=0,nro1,nro2;
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

        scanf("%d",&opc);

        switch(opc)
        {

    case 1:
            suma(nro1,nro2);
            break;

    case 2:

            resta(nro1,nro2);
            break;

    case 3:
            producto(nro1,nro2);
            break;
    case 4:
           divi(nro1,nro2);
            break;
        }

        do{
        printf("\nDesea seguir operando?s/n");
        fflush(stdin);
        scanf("%c",&rta);
        }while(rta!='s'&&rta!='n');

    }while(rta=='s');



    return 0;
}


int suma(int nro1, int nro2)
{
    int rdo;
    rdo=nro1+nro2;
    printf("La suma es %d",rdo);
    return 0;
}

int resta(int nro1, int nro2)
{
    int rdo;
    rdo=nro1-nro2;
    printf("La resta es %d",rdo);
    return 0;
}

int producto(int nro1, int nro2)
{
    int rdo;
    rdo=nro1*nro2;
    printf("El producto es %d",rdo);
    return 0;
}


int divi(int nro1,int nro2)
{
   int rdo;
   rdo=nro1/nro2;
   printf("La division vale %d",rdo);
   return 0;
}
