#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

#define CANTIDAD 5

int main()
{
    int arrayNumeros[CANTIDAD];
    int arrayIndice;
    int numeroIngresado;
    int valorIngresado;
    int opcion;

    for(arrayIndice=0;arrayIndice<CANTIDAD;arrayIndice++)
        {
            numeroIngresado=getInt("Ingrese un numero: \n");
            arrayNumeros[arrayIndice]=numeroIngresado;
        }

        while(opcion!=3)
        {
            opcion = getInt("\n1.Mostar \n2.Modificar \n3.Salir");
            switch(opcion)

        {
        case 1:
                printf("\n\nINDICE  -  VALOR");
                {
                    for(arrayIndice=0;arrayIndice<CANTIDAD;arrayIndice++)
                    {
                        printf("\n  %d     -     %d",arrayIndice,arrayNumeros[arrayIndice]);
                    }
                }

                break;
        case 2:
                arrayIndice=getInt("\nIndique cual indice:");
                if(arrayIndice>=0 && arrayIndice<CANTIDAD)
                {
                    valorIngresado=getInt("Ingrese nuevo valor");
                    arrayNumeros[arrayIndice]=valorIngresado;
                }
                else
                {
                    printf("Indice fuera de rango!!!");
                }
                break;


        }
        }

    return 0;
}
