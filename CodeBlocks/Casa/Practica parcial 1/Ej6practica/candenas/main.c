#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lib.h"

#define MAXINPUT 100


int main()
{
    char input[MAXINPUT];
    int length;
    printf("Ingrese algo:");
    scanf("%s",input);
    length=strlen(input);
    if(length>0)
    {
        if(esNumerico(input))
        {
            printf("Si es un numero\n");
        }
        if(esTelefono(input))
        {
             printf("Si es telefono\n");
        }
        if(esAlfaNumerico(input))
        {
            printf("Si es alfanumerico \n");
        }
        if(esSoloLetras(input))
        {
            printf("Si es solo letras\n");
        }




    }







    return 0;
}
