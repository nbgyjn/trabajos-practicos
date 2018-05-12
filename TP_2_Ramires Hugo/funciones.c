#include "funciones.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



void inicializarPersonaEstado(EPersona personas[], int cant)
{
    int i;

    for(i=0; i<cant; i++)
    {
        personas[i].estado = 0;
    }
}




void inicializarPersonaHardCode(EPersona personas[])
{
    int dni[] = {37190429,38165428,39450429,40112423,41780499};
    char nombre[][50]={"Juan","Manu","Pablo","Catriel","Andres"};
    int edad[] = {18,20,15,22,21};

    int i;

    for(i=0; i<5; i++)
    {
        personas[i].dni=dni[i];
        personas[i].edad=edad[i];
        personas[i].estado = 1;
        strcpy(personas[i].nombre, nombre[i]);

    }
}

void mostrarListapersonas(EPersona personas[], int tan)
{
    int i;

    for(i=0; i<tan; i++)
    {
        if (personas[i].estado==1)
        {
            printf("nombre : %s \n DNI : %d \n edad : %d\n estado : %d  \n",personas[i].nombre,personas[i].dni,personas[i].edad,personas[i].estado);
        }

    }
}


int buscarLugarLibre(EPersona personas[],int tan)
{
    int retorno = -1;
    int i;
    if(tan > 0 && personas != NULL)
    {
        retorno = -2;
        for(i=0; i<tan; i++)
        {
            if(personas[i].estado == 0)
            {
                retorno = i;
                break;
            }
        }
    }
    return retorno;
}





int alta(EPersona personas[],int tan)
{
    int retorno = 0;
    int i;
    if(tan > 0 && personas != NULL)
    {
        i = buscarLugarLibre(personas,tan);
        if(i >= 0)
        {

            printf("Ingrese nombre: \n");
            fflush(stdin);
            gets(personas[i].nombre);
            printf("Ingrese dni: \n");
            scanf("%i",&personas[i].dni);
            printf("Ingrese edad: \n");
            scanf("%i", &personas[i].edad);
            personas[i].estado = 1;
            retorno = 1;
        }
    }
    return retorno;
}


int baja(EPersona personas[],int tan)
{
    int retorno = 0;
    int val;
    int dnib;
    printf("DNI a dar de baja: ");
    scanf("%d", &dnib);
    val = buscarPorDni(personas,dnib , tan);
    while(val == 0)
    {
        printf("no se encontro el dni\n");
        printf("DNI a dar de baja: ");
        scanf("%d", &dnib);
        val = buscarPorDni(personas,dnib , tan);
    }
    return retorno;
}

int buscarPorDni(EPersona personas[],int dnib, int tan)
{
    int i;
    for(i=0; i<tan; i++)
        if(dnib==personas[i].dni)
        {
            personas[i].estado = 0;
            printf("el DNI se dio de baja correctamente.\n");
            return 1;
            break;
        }
        else
        {
            return 0;
            //break;
        }
}

void ord_alf(EPersona personas[], int tan)
{
    int i,j;
    EPersona aux;
    for (i=0;i<tan;i++)
        {
           for (j=0;j<tan;j++)
        {
            if (strcmp(personas[i].nombre,personas[j].nombre)<0)
            {
                aux=personas[i];
                personas[i]=personas[j];
                personas[j] = aux;

            }
        }
        }
}

int mostrarListado(EPersona personas[],int tan)
{
    int retorno = -1;
    int i;
    if(tan > 0 && personas != NULL)
    {
        retorno = 0;
        for(i=0; i<tan; i++)
        {
            if(personas[i].estado==1)
            {

                printf("\n %s - %d - %d - %d\n",personas[i].nombre,personas[i].edad,personas[i].estado,personas[i].dni);
            }
        }
    }
    return retorno;
}

void edades(EPersona personas[],int tan)
{
    int i;
    int maximo=0;
    int flag=0;
    int menores=0;
    int mayores=0;
    int sup_may=0;
    for (i=0;i<tan;i++)
    {
        if (personas[i].edad > 18)
        {
            menores++;
        }
        if (personas[i].edad>17)
        {
            mayores++;
        }
        else
        {
            sup_may++;
        }
    }


    for (i=0;i<tan;i++)
    {
        if(i<= menores)
        {
            printf("*");
        }
        if(i<= mayores)
        {
            flag=1;
            printf("\t*");
        }
        if(i<= sup_may)
        {
            if(flag==0)
            {
                printf("\t\t*");
            }
            if(flag==1)
            {
                printf("\t*");
            }


        }
        printf("\n");
    }

    printf("\n  <18\t19-35\t>35");
    printf("\n   %d\t%d\t%d\n\n", menores, mayores, sup_may);

}


