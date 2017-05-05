#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tp2.h"



/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */

 int getInt(char mensaje[])
 {
     int auxiliar;
     printf("%s",mensaje);
     scanf("%d",&auxiliar);
     return auxiliar;
 }



/**
* \brief verifica si el valor recibido contiene solo numeros
* \param str Array con la cadena a ser analizada
* \return 1 si contiene solo '' y letras y 0 si no lo es
*
*/



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


/**
  * \brief Inicializa un array de estructura con el valor recibido
  * \param ePersona personaArray Es lo que se inicializa
  * \param arrayLength Indica la longitud del array
  * \param value Es el valor que sera cargado en cada posicion
  * \return -
  */




void inicializarArrayPersona(ePersona personaArray[],int arrayLength,int value)
{
    int i;
    for(i=0;i<arrayLength;i++)
    {
        personaArray[i].estado=value;
    }
}


/**
  * \brief Busca un lugar libre en el array de personas
  * \param ePersona personaArray En el se localiza el lugar con estado cero
  * \param arrayLength Indica la longitud del array
  * \return -1 si no encuentra posicion libre, i indice donde hay posicion libre
  *
  */


int buscaLugarLibre(ePersona personaArray[],int arrayLength)
{
    int i;
    for(i=0;i<arrayLength;i++)
    {
        if(personaArray[i].estado==0)
        return i;
    }
    return -1;
}

/**
  * \brief Busca una persona pasandole un dato numerico
  * \param ePersona personaArray Es el array el cual recorre
  * \param arrayLength Indica la longitud del array
  * \param dni Es el valor que se pasa para encontar una igualdad en el array
  * \return -1 si no encuentra el valor pasado, i indice donde esta ese el valor a buscar
  *
  */

int buscarPersonaPorDni(ePersona personaArray[], int arrayLenght, int dni)
{
    int i;
    for(i=0;i<arrayLenght;i++)
    {
        if(personaArray[i].dni==dni && personaArray[i].estado==1)
        {
            return i;
        }
    }return -1;

}

/**
  * \brief Inicializa el estado en un array de personas
  * \param personaArray Es el array el cual buscar
  * \param arrayLength Indica la longitud del array
  * \param value Es el valor que se asignara a estado
  * \return -
  *
  */

void defineEstado(ePersona personaArray[],int arrayLength,int value)
{
    int i;
    for(i=0;i<arrayLength;i++)
    {
        personaArray[i].estado=value;
    }
}


/**
  * \brief Ordena el array a ser mostrado
  * \param personaArray Es el array el cual buscar
  * \param MAX_QTY Es el tamaño del array a buscar
  * \return -
  *
  */


void ordenarPorNombre(ePersona personaArray[],int MAX_QTY)
{
    int i,j;
    ePersona personaAux;

    for(i=0;i<MAX_QTY-1; i++)
    {
        for(j=i+1;j<MAX_QTY;j++)
        {
            if(strcmp(personaArray[i].nombre,personaArray[j].nombre)>0);
            {
                        personaAux=personaArray[i];
                        personaArray[i]=personaArray[j];
                        personaArray[j]=personaAux;
            }
        }
    }
}


/**
  * \brief Muestra de manera ordenada los datos ingresados
  * \param personaArray Es el array el cual buscar
  * \param MAX_QTY Es el tamaño del array a buscar
  * \return -
  *
  */


void mostrarPersonas(ePersona personaArray[],int MAX_QTY)
{
    int i;
    printf("\n\nNombre\t\tApellido\t\tEdad\t\tDni\n\n");
    for(i=0;i<MAX_QTY;i++)
    {
        if(personaArray[i].estado==1)
        {
            printf("%s\t\t%s\t\t\t%d\t\t%d\n",personaArray[i].nombre,personaArray[i].apellido,personaArray[i].edad,personaArray[i].dni);
        }
    }
}

/**
  * \brief Muestra de manera grafica los datos ingresados
  * \param personaArray Es el array el cual buscar
  * \param MAX_QTY Es el tamaño del array a buscar
  * \return -
  *
  */


void graficarEdades(ePersona personaArray[],int MAX_QTY)
{
    int i,mayor;
    int bandera = 0;
    int hasta18 = 0;
    int de19a35 = 0;
    int masDe35 = 0;
    system("cls");

    for(i=0;i<MAX_QTY;i++)
    {
        if(personaArray[i].estado == 1)
        {

            if(personaArray[i].edad <= 18)
            {
                hasta18 = hasta18 + 1;
            }
            else if(personaArray[i].edad >= 19 && personaArray[i].edad <= 35)
            {
                de19a35 = de19a35 + 1;
            }
            else if(personaArray[i].edad > 35)
            {
                masDe35 = masDe35 + 1;
            }
        }
    }

    if(hasta18 >= de19a35 && hasta18 >= masDe35)
    {
        mayor = hasta18;
    }
    else if(de19a35 >= hasta18 && de19a35 >=masDe35)
    {
        mayor = de19a35;
    }
    else
    {
        mayor = masDe35;
    }

    printf("******GRAFICO EDADES******\n\n\n");

    for(i=mayor;i>0;i--)
        {
        if(i < 10)
        {
            printf("%02d|",i);
        }
        else
        {
            printf("%02d|",i);
        }

        if(i <= hasta18)
        {
            printf("*");
        }
        if(i <= de19a35)
        {
            printf("\t*");
            bandera = 1;
        }
        if(i <= masDe35)
        {
            if(bandera == 0)
            {
                printf("\t\t*");
            }
            if(bandera == 1)
            {
                printf("\t*");
            }

        }
        printf("\n");
    }

    printf("____________________");
    printf("\n   <18\t19-35\t>35");
    printf("\n   %d\t%d\t%d", hasta18, de19a35, masDe35);
    printf("\n\n\n");
    system("pause");
}
