
 #include <stdio.h>
 #include <stdlib.h>
 #include "lib.h"


 float getFloat(char mensaje[])
 {
     float auxiliar;
     printf("%s",mensaje);
     scanf("%f",&auxiliar);
     return auxiliar;
 }

 int getInt(char mensaje[])
 {
     int auxiliar;
     printf("%s",mensaje);
     scanf("%d",&auxiliar);
     return auxiliar;
 }

 char getChar(char mensaje[])
 {
     char auxiliar;
     printf("%s",mensaje);
     fflush(stdin);
     scanf("%c",&auxiliar);
     return auxiliar;
 }

/**
 char getNumeroAleatorio(int desde, int hasta, int iniciar)
 {
     if(iniciar)
        srand(time(NULL));
     return desde + (rand()%(hasta + 1 - desde));
 }
**/
/**
* \brief verifica si el valor recibido es numerico
* \param str Array con la cadena a ser analizada
* \return  1 si es numerico y 0 si no lo es
*
*/


int esNumerico(char  str[])
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
    return 0;
}


/**
* \brief verifica si el valor recibido contiene solo letras y numeros
* \param str Array con la cadena a ser analizada
* \return 1 si contiene solo espacio o letras y numeros, y 0 si no lo es
*
*/


int esAlfaNumerico(char str[])
{
    int i=0;
    while(str[i]!= '\0')
    {
        if((str[i]!= ' ')&& (str[i]< 'a'|| str[i]> 'z')&& (str[i]<'A' || str[i]>'Z')&& (str[i]<'0' || str[i]>'9'))
            return 0;
        i++;
    }
    return 1;
}



int esTelefono(char str[])
{
    int i=0;
    int contadorGuiones=0;
    while(str[i]!='\0')
    {
        if((str[i]!=' ')&&(str[i] !='-')&&(str[i]<'0' || str[i]>'9'))
            return 0;
        if(str[i]=='-')
            contadorGuiones++;
        i++;
    }
    if(contadorGuiones==1)
        return 1;
    return 0;
    }









