#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int codigo;
    int cantidad;
    char descripcion[50];
    float importe;

}eProducto


int main()
{
    int opcion=0;
    opcion=getInt("\n\n\n1 - Agregar persona \n2 - Borrar Persona \n3 - Imprimir por nombre \n4 - Imprimir grafico \n5 - Salir\n\n\n");

    switch(opcion)
    {
        case 1:




    }


    return 0;
}



int getInt(char mensaje[])
 {
     int auxiliar;
     printf("%s",mensaje);
     scanf("%d",&auxiliar);
     return auxiliar;
 }
