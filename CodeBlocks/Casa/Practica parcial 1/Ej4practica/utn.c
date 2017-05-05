 #include <stdio.h>
 #include <stdlib.h>
 #include "utn.h"


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


 char getNumeroAleatorio(int desde, int hasta, int iniciar)
 {
     if(iniciar)
        srand(time(NULL));
     return desde + (rand()%(hasta + 1 - desde));
 }



