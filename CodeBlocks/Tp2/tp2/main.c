#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "tp2.h"

#define MAX_QTY 20



int main()
{
    ePersona personaArray[MAX_QTY];

    int opcion=0;

    int edadAux;
    int dniAux;

    char edadAuxStr[50];
    char dniAuxStr[50];
    char nombreAuxStr[50];
    char apellidoAuxStr[50];

    int indiceLugarLibre;
    int buscarIndice;

    defineEstado(personaArray,MAX_QTY,0);


    while(opcion!=5)
    {

        opcion=getInt("\n\n\n1 - Agregar persona \n2 - Borrar Persona \n3 - Imprimir por nombre \n4 - Imprimir grafico \n5 - Salir\n\n\n");

        switch(opcion)
          {
            case 1:

                indiceLugarLibre=buscaLugarLibre(personaArray,MAX_QTY);
                if(indiceLugarLibre==-1)
                {
                    printf("\nNo hay lugares libres: ");
                    break;
                }
                printf("\nALTA\n\n");
                 if(!getStringNumeros("Ingrese DNI: ",dniAuxStr))
                {
                    printf("\nEl DNI debe ser numerico\n");
                    break;
                }
                dniAux=atoi(dniAuxStr);

                 // tengo que saber si este dni ya existe entonces

                if(buscarPersonaPorDni(personaArray,MAX_QTY,dniAux)!=-1)
                {
                    printf("\nEl dni ya existe!!!\n");
                    break;
                }
                if(!getStringNumeros("Ingrese edad: ",edadAuxStr))
                {
                    printf("\nLa edad debe ser numerica\n");
                    break;
                }
                edadAux=atoi(edadAuxStr);

                if(!getStringLetras("Ingrese nombre: ",nombreAuxStr))
                {
                    printf("\nEl nombre deber ser solo letras\n");
                    break;
                }

                if(!getStringLetras("Ingrese el apellido: ",apellidoAuxStr))
                {
                    printf("\nEl apellido deber ser solo letras\n");
                    break;
                }



                personaArray[indiceLugarLibre].edad=edadAux;
                personaArray[indiceLugarLibre].dni=dniAux;
                personaArray[indiceLugarLibre].estado=1;
                strcpy(personaArray[indiceLugarLibre].nombre,nombreAuxStr);
                strcpy(personaArray[indiceLugarLibre].apellido,apellidoAuxStr);

                    break;
            case 2:
                    if(!getStringNumeros("\nIngrese dni a dar de baja:",dniAuxStr))
                    {
                        printf("\nEl dni debe ser numerico!!");
                        break;
                    }
                    dniAux=atoi(dniAuxStr);

                    buscarIndice=buscarPersonaPorDni(personaArray,MAX_QTY,dniAux);
                    if(buscarIndice==-1)
                    {
                        printf("\nNo se encuentra el dni!!!");
                        break;
                    }
                    personaArray[buscarIndice].estado=-2;   // -2 pone en estado de baja logica


                break;



            case 3: // ordena

                    ordenarPorNombre(personaArray,MAX_QTY);
                    mostrarPersonas(personaArray,MAX_QTY);

                     break;
            case 4: // GRAFICO

                    graficarEdades(personaArray,MAX_QTY);

                    break;

        }
    }

    return 0;
}
