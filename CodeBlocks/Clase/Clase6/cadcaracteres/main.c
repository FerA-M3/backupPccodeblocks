#include <stdio.h>
#include <stdlib.h>

/**int main()
{
    char nombre[15];

    printf("Ingrese su nombre");
    scanf("%s",nombre);                     //no le pongo el & porq el nombre de la cadena es la direccion de
                                            // memoria del primer elemento
    printf("Su nombre es %s",nombre);
    return 0;
}
**/

int main()                          //con este programa y el fgets puedo usar espacio y me toma mas de un nombre
{
    char nombre[20];
    printf("Ingrese nombre y apellido");
    fgets(nombre,20,stdin);

    printf("El nombre completo es %s",nombre);
    return 0;

}
