#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

float sumas(float x, float y);
float restas(float x, float y);
float multiplicaciones(float x, float y);
float divisiones(float x, float y);
int factoriales(float x);

int main()
{
    char menu;
    int todoOk;
    int factorialOp1;
    int factorialOp2;
    float suma;
    float resta;
    float multiplicacion;
    float division;
    float operando1;
    float operando2;


    operando1 = 0;
    operando2 = 0;

    do
    {
        //Despliegue del menu.
        printf("Elija la opcion que desea realizar: \n 1. Registrar 1er numero. \n 2. Registrar 2do numero. \n 3. Hacer todos los calculos \n 4. mostrar los resultados. \n 5. Apagar. \n\n");
        printf("Ingrese su opcion elegida: ");
        setbuf(stdin, NULL);
        scanf("%c", &menu);
        printf("\n");

        switch(menu)
        {
        case '1': //Ingresar el primer numero.
            printf("Indique el primer numero (Ej. 10.00):");
            scanf("%f", &operando1);
            printf("El numero fue ingresado, ya puede continuar. \n\n");
            break;

        case '2': //Ingresa el segundo numero.
            printf("Indique el segundo numero (Ej. 2.00):");
            scanf("%f", &operando2);
            printf("El numero fue ingresado, ya puede continuar \n\n");
            break;

        case '3': //Hace todos los calculos.

            suma = sumas(operando1, operando2);
            resta = restas(operando1, operando2);
            multiplicacion = multiplicaciones(operando1, operando2);
            division = divisiones(operando1, operando2);
            factorialOp1 = factoriales(operando1);
            factorialOp2 = factoriales(operando2);

            todoOk = 1;
            printf("Los calculos fueron realizados con exito. \n");
            break;

        case '4'://Imprime los resultados.
            if(todoOk == 1)// Muestra resultados solo si fue ejecutado el case 3.
            {
                printf("El resultado de la suma es %.2f  \n", suma);
                printf("El resultado de la resta es %.2f  \n", resta);
                printf("El resultado de la multiplicacion es %.2f \n", multiplicacion);

                if(operando1 < 0)
                {
                    printf("Error operando 1! No existe factorial de numeros negativos. \n");
                }
                else if(operando1 == 0)
                {
                    printf("El factorial de cero es 1.\n");
                }
                else
                {
                    printf("El factorial de %.2f es: %d \n", operando1, factorialOp1);
                }


                if(operando2 < 0)
                {
                    printf("Error operando 2! No existe factorial de cero. \n");
                    printf("El resultado de la division es: %.2f \n\n", division);
                }
                else if(operando2 == 0)
                {
                    printf("El factorial de cero es 1. \n");
                    printf("Error! No existe division por cero. \n\n");
                }
                else
                {
                    printf("El factorial de %.2f es: %d \n", operando2, factorialOp2);
                    printf("El resultado de la division es: %.2f \n\n", division);
                }

            }
            else //Respuesta si no fue ejecturado el case 3.
            {
                printf("Resultados no encontrados. Ingrese los operandos y ejecute las operaciones desde el menu de opciones. \n");
            }

            operando1 = 0;
            operando2 = 0;
            break;

        case '5': //Salir del programa.
            break;

        default: //Respuesta para opcion de menu invalida.
            printf("La opcion ingresada no existe en el menu. \n\n");
            break;

        }
    }
    while(menu != '5');
}
