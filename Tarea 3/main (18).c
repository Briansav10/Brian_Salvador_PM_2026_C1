/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


void main(void)
{
    int NUM;
    long CUA, SUC = 0;

    int datos[] = {3, 5, 2, 4, 0};

    int i = 0;

    NUM = datos[i];

    printf("Ingrese un numero (0 para terminar): %d\n", NUM);

    while (NUM != 0)
    {
        CUA = pow(NUM, 2);

        printf("%d al cuadrado es %ld\n", NUM, CUA);

        SUC = SUC + CUA;

        i++;
        NUM = datos[i];

        if (NUM != 0)
            printf("Ingrese un numero (0 para terminar): %d\n", NUM);
    }

    printf("\nLa suma de los cuadrados es %ld", SUC);
}

