#include <stdio.h>
#include <stdlib.h>
#define TAMPERSONAS 20
#include "funciones.h"


int main()
{

    EPersona listaDePersonas[TAMPERSONAS];
    inicializarPersonaEstado(listaDePersonas, TAMPERSONAS);
    inicializarPersonaHardCode(listaDePersonas);






    char seguir='s';
    int opcion=0;

    while(seguir=='s')
    {
        printf("1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                alta(/*EPersona personas[]*/listaDePersonas,TAMPERSONAS);
                break;
            case 2:
                baja(listaDePersonas,TAMPERSONAS);
                break;
            case 3:
                ord_alf(listaDePersonas,TAMPERSONAS);
                mostrarListado(listaDePersonas,TAMPERSONAS);
                break;
            case 4:
                edades(listaDePersonas,TAMPERSONAS);
                break;
            case 5:
                //mostrarListapersonas(listaDePersonas,TAMPERSONAS);
                seguir = 'n';
                break;
        }
    }

    return 0;
}
