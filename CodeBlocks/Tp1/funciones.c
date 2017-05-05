#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "funciones.h"

/**
  * \brief solicita dos numeros al usuario y devuelve un resultado
  * \param primer numero que ingresamos
  * \param segundo numero que ingresamos
  * \return resultado de la funcion
  */

float suma(float nro1, float nro2)
{
    float rdo;
    rdo=nro1+nro2;
    printf("\nLa suma es %.2f",rdo);
    return 0;
}


/**
  * \brief solicita dos numeros al usuario y devuelve un resultado
  * \param primer numero que ingresamos
  * \param segundo numero que ingresamos
  * \return resultado de la funcion
  */

float resta(float nro1, float nro2)
{
    float rdo;
    rdo=nro1-nro2;
    printf("\nLa resta es %.2f",rdo);
    return 0;
}

/**
  * \brief solicita dos numeros al usuario y devuelve un resultado
  * \param primer numero que ingresamos
  * \param segundo numero que ingresamos
  * \return resultado de la funcion
  */

float producto(float nro1, float nro2)
{
    float rdo;
    rdo=nro1*nro2;
    printf("\nEl producto es %.2f",rdo);
    return 0;
}


/**
  * \brief solicita dos numeros al usuario y devuelve un resultado
  * \param primer numero que ingresamos
  * \param segundo numero que ingresamos
  * \return resultado de la funcion
  */

float divi(float nro1,float nro2)
{
   float rdo;

   if (nro2==0)
   {
       printf("\nError no divide por cero");
       return -1;
   }else
   rdo=nro1/nro2;
   printf("\nLa division vale %.2f",rdo);
   return 0;
}

/**
  * \brief solicita un numeros al usuario y devuelve un resultado
  * \param numero entero ingresado
  * \return resultado de la funcion
  */
int fact(int nro1)
{
    int i;
    if(nro1==0)
    {
        printf("\nEl factorial de 0 es : 1");
        return 1;
    }
    if(nro1<0)
    {
        printf("Error en numero ingresado");
        return -1;
    }
    else{
    for(i=(nro1-1);i>=1;i--)
        nro1=nro1*i;
    printf("\nEl factorial del primer numero es: %d",nro1);
    }
    return 0;
}


