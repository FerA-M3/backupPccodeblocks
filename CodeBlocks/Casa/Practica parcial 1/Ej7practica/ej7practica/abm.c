#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int getInt(char mensaje[])
 {
     int auxiliar;
     printf("%s",mensaje);
     scanf("%d",&auxiliar);
     return auxiliar;
 }

int esNumerico(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]<'0' || str[i]>'9')
        {
            return 0;
            i++;
        }
        return 1;
    }
}


/**
* \brief verifica si el valor recibido contiene solo letras
* \param str Array con la cadena a ser analizada
* \return 1 si contiene solo '' y letras y 0 si no lo es
*
*/
int esSoloLetras(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if((str[i]!=' ')&& (str[i]< 'a'|| str[i]> 'z')&& (str[i]<'A' || str[i]>'Z'))
            return 0;
        i++;
    }
    return 1;
}

/**
  * \brief solicita un texto al usuario y lo devuelve
  * \param mesnsaje es el Mensaje a ser mostrado
  * \param input Array donde se cargara el texto ingresado
  * \return void
  */

void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf("%s", input);
}


/**
  * \brief solicita un texto al usuario y lo devuelve
  * \param mensaje Es el mensaje a ser mostrado
  * \param input Array donde se cargara el texto ingresado
  * \return 1 si el texto contiene solo letras
  */


int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/**
  * \brief solicita un texto al usuario y lo devuelve
  * \param mensaje Es el mensaje a ser mostrado
  * \param input Array donde se cargara el texto ingresado
  * \return 1 si el texto contiene solo numeros
  */

int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;



}

