#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float numero1;
    float numero2;
    float resultado;
    int contador=0;


    while(seguir=='s')
    {   contador++;
        if (contador >=3)
        {
            printf("1- Ingresar 1er operando (A=%.2f)\n",numero1);
            printf("2- Ingresar 2do operando (B=%.2f)\n",numero2);
        }
        else
        {
            printf("1- Ingresar 1er operando (A=x)\n");
            printf("2- Ingresar 2do operando (B=y)\n");
        }

        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);


        switch(opcion)
        {
           case 1:
                numero1 = pedirnumero("Ingrese un numero ");
                break;

            case 2:
                numero2 = pedirnumero("Ingrese otro numero ");
                break;
            case 3:
                resultado = sumar(numero1, numero2);
                printf("La suma es: %.2f\n", resultado);
                break;
            case 4:
                resultado = restar(numero1, numero2);
                printf("La resta es: %.2f\n", resultado);
                break;
            case 5:
                resultado = dividir(numero1, numero2);
                printf("La divicion es: %.2f\n", resultado);
                break;
            case 6:
                resultado = multiplicar(numero1, numero2);
                printf("La multiplicacion es: %.2f\n", resultado);
                break;
            case 7:
                factorial(numero1);
                break;


            case 8:
                resultado = sumar(numero1, numero2);
                printf("La suma es: %.2f\n", resultado);

                resultado = restar(numero1, numero2);
                printf("La resta es: %.2f\n", resultado);

                resultado = dividir(numero1, numero2);
                printf("La divicion es: %.2f\n", resultado);

                resultado = multiplicar(numero1, numero2);
                printf("La multiplicacion es: %.2f\n", resultado);

                factorial(numero1);

                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("Reingrese un numero comprendido entre las opciones !\n");
                break;

        }

    }
    return 0;
}
