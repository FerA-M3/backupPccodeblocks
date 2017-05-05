#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getInt();
float getFloat();
char getChar();


int main()
{

    int numeroOculto;
    int numeroIngresado;
    char teclaIngresada;
    int jugar;

    teclaIngresada='s';
    while(teclaIngresada=='s')
    {
        numeroOculto=getNumeroAleatorio(1,100,1);

        jugar = 1;
        while(jugar == 1)
        {
            numeroIngresado=getInt("Ingrese un numero(0-99)\n");
            if(numeroIngresado<0)
            {
                jugar = 0;
            }
            else if (numeroIngresado==numeroOculto)
            {
                printf("Felicitaciones Ganaste!!!\n");
                jugar = 0;
            }
        else if(numeroIngresado>numeroOculto)
        {
            printf("El numero que ingresaste es grande\n");
        }
        else if(numeroIngresado<numeroOculto)
        {
            printf("El numero que ingresaste es chico\n");
        }
    }

    teclaIngresada=getChar("Desea jugar nuevamente? (s/n)\n");



    }







    return 0;
}


