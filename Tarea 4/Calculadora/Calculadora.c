/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define SALIR 0
#define NUEVO 100
#define SUMAR 1
#define DIVIDIR 2
#define MULTIPLICAR 3
#define RESTAR 4
#define RAIZ 5

#define ERR_DivByZero 100
#define ERR_RaizNegativa 101
#define ERR_OK 0

int sumar(float num1, float num2, float *resultado);
int dividir(float numerador, float denominador, float *resultado);
int multiplicar(float num1, float num2, float *resultado);
int restar(float num1, float num2, float *resultado);
int raiz(float num, float *resultado);

int main()
{
    int menu = NUEVO;
    int cod_err = ERR_OK;
    float num1 = 0.0;
    float num2 = 0.0;
    float result = 0.0;

    do
    {
        printf("\n===== Calculadora =====\n");
        printf("0 - Salir\n1 - Sumar\n2 - Dividir\n3 - Multiplicar\n4 - Restar\n5 - Raiz Cuadrada\n");
        printf("Seleccione una opcion: ");
        scanf("%i", &menu);

        switch(menu)
        {
            case SUMAR:
                printf("Ingrese el primer numero: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &num2);
                cod_err = sumar(num1, num2, &result);
                if(cod_err == ERR_OK)
                    printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, result);
                else
                    printf("Error en la suma\n");
                break;

            case RESTAR:
                printf("Ingrese el primer numero: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &num2);
                cod_err = restar(num1, num2, &result);
                if(cod_err == ERR_OK)
                    printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, result);
                else
                    printf("Error en la resta\n");
                break;

            case MULTIPLICAR:
                printf("Ingrese el primer numero: ");
                scanf("%f", &num1);
                printf("Ingrese el segundo numero: ");
                scanf("%f", &num2);
                cod_err = multiplicar(num1, num2, &result);
                if(cod_err == ERR_OK)
                    printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, result);
                else
                    printf("Error en la multiplicacion\n");
                break;

            case DIVIDIR:
                printf("Ingrese numerador: ");
                scanf("%f", &num1);
                printf("Ingrese denominador: ");
                scanf("%f", &num2);
                cod_err = dividir(num1, num2, &result);
                if(cod_err == ERR_OK)
                    printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, result);
                else if(cod_err == ERR_DivByZero)
                    printf("===== Error: Division por cero =====\n");
                break;

            case RAIZ:
                printf("Ingrese el numero: ");
                scanf("%f", &num1);
                cod_err = raiz(num1, &result);
                if(cod_err == ERR_OK)
                    printf("Resultado: Raiz cuadrada de %.2f = %.2f\n", num1, result);
                else if(cod_err == ERR_RaizNegativa)
                    printf("===== Error: No se puede calcular raiz de un numero negativo =====\n");
                break;

            case SALIR:
                printf("Saliendo...\n");
                break;

            default:
                printf("Opcion no valida\n");
        }

    } while(menu != SALIR);

    return 0;
}

int sumar(float n1, float n2, float *resultado)
{
    *resultado = n1 + n2;
    return ERR_OK;
}

int restar(float n1, float n2, float *resultado)
{
    *resultado = n1 - n2;
    return ERR_OK;
}

int multiplicar(float n1, float n2, float *resultado)
{
    *resultado = n1 * n2;
    return ERR_OK;
}

int dividir(float numerador, float denominador, float *resultado)
{
    if(denominador == 0)
        return ERR_DivByZero;
    *resultado = numerador / denominador;
    return ERR_OK;
}

int raiz(float num, float *resultado)
{
    if(num < 0)
        return ERR_RaizNegativa;
    *resultado = sqrt(num);
    return ERR_OK;
}
