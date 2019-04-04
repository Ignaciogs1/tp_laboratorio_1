#include <stdio.h>
#include <stdlib.h>
#include "calculadorafunciones.h"

int main()
{
    float numero01;
    float numero02;
    int opciones;
    int operacionParaRealizar;
    float sumaRta;
    float restaRta;
    float divisionRta;
    float multiplicacionRta;
    float factorialDelNumero01;
    float factorialDelNumero02;

    numero01 = 0;
    numero02 = 0;
    opciones = 0;
    operacionParaRealizar = 0;

    do
    {
        printf("Elija alguna de estas opciones: ");
        printf("\n 1. Ingresar el primer numero");
        printf("\n 2. Ingresar el segundo numero");
        printf("\n 3. Calcular todas las operaciones");
        printf("\n 4. Mostrar los resultados de las operaciones");
        printf("\n 5. Salir\n");

        printf("\n Ingrese alguna de las opcioneses anteriormente mostradas: ");
        scanf("%d", &opciones);
        fflush(stdin);

        switch (opciones)
        {
            case 1:
                printf("\n Ingrese el primer operando: ");
                scanf("%f", &numero01);
                printf("\n Ya esta guardado el primer operando \n");
                system("pause");
                system("cls");
                break;

            case 2:
                printf("\n Ingrese el segundo operando: ");
                scanf("%f", &numero02);
                printf("\n Ya esta guardado el segundo operando \n");

                system("pause");
                system("cls");
                break;

            case 3:
                sumaRta = suma(numero01, numero02);
                restaRta= resta (numero01, numero02);
                divisionRta = division (numero01, numero02);
                multiplicacionRta = multiplicacion (numero01, numero02);
                factorialDelNumero01 = factorial (numero01);
                factorialDelNumero02 = factorial (numero02);
                operacionParaRealizar = 1;
                printf("\nSe calcularon todas las operaciones para %2.f y %2.f \n", numero01, numero02);

                system("pause");
                system("cls");
                break;

            case 4:

                if(operacionParaRealizar==1)
                {
                    printf("\n El resultado de la suma es %0.f", sumaRta);
                    printf("\n El resultado de la resta es %0.f", restaRta);

                    if (numero02 == 0)
                    {
                        printf("\n ¡ERROR! No es posible dividir por 0");
                    }
                    else
                    {
                       printf("\n El resultado de la division es %.2f", divisionRta);
                    }

                    printf("\n El resultado de la multiplicacion es %0.f", multiplicacionRta);

                    if(numero01<0 && numero02<0)
                    {
                        printf("\n ¡ERROR! No existe factorial de numeros negativos");
                    }
                    else
                    {
                        printf("\n El factorial del primer operando es %0.f", factorialDelNumero01);
                        printf("\n El factorial del segundo operando es %0.f\n", factorialDelNumero02);
                    }

                }
                else
                {
                    printf("\n ¡ERROR! No se pudieron realizar las operaciones");
                }

                system("pause");
                system("cls");
                break;

            case 5:
                break;

            default:
                printf("\nLa opcion ingresada es incorrecta, por favor, ingrese una opcion valida \n");

                system("pause");
                system("cls");
        }
    }
        while(opciones!=5);

    return 0;
}
