#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "funciones.h"

float pedirnumero(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f", &numero);
    return numero;
}

float sumar(float numero1, float numero2)
{
    float suma;
    suma=numero1+numero2;
    return suma;
}

float restar(float numero1, float numero2)
{
    float resta;
    resta=numero1-numero2;
    return resta;
}

float dividir(float numero1, float numero2)
{
    float dividir;
    while(numero2 == 0)
    {
        printf("Reingrese un numero distinto a 0 ");
        scanf("%f", &numero2);
    }
    dividir=numero1/numero2;
    return dividir;
}

float multiplicar(float numero1, float numero2)
{
    float multiplicar;
    multiplicar=numero1*numero2;
    return multiplicar;
}

void factorial( float numero1)
{   float i;
    int factor = 1;
    for(i = numero1; i > 0; i--)
        {factor = factor * i;}
    printf("El factorial es: %d\n", factor);

}


#endif // FUNCIONES_H_INCLUDED
