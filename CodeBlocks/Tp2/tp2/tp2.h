

typedef struct
{
    int edad;
    int dni;
    char nombre[50];
    char apellido[50];
    int estado;
}ePersona;


int getInt(char mensaje[]);
float getFloat(char mensaje[]);

void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);

int esNumerico(char  str[]);
int esSoloLetras(char str[]);
int esAlfaNumerico(char str[]);

void defineEstado(ePersona personaArray[],int arrayLength,int value);

int buscaLugarLibre(ePersona personaArray[],int arrayLength);
int buscarPersonaPorDni(ePersona personaArray[],int MAX_QTY,int dniBusqueda);
void ordenarPorNombre(ePersona personaArray[],int MAX_QTY);
void mostrarPersonas(ePersona personaArray[],int MAX_QTY);

void graficarEdades(ePersona personaArray[],int MAX_QTY);
void inicializarArrayPersona(ePersona personaArray[],int arrayLength,int value);

