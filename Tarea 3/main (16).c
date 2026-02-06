/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

/* Suma positivos */

void main(void)
{
    int I, N, NUM, SUM;

    SUM = 0;

    N = 6;

    int datos[6] = {5, -3, 10, 0, -7, 8};

    printf("Cantidad de datos: %d\n\n", N);

    for (I = 0; I < N; I++)
    {
        NUM = datos[I];

        printf("Dato %d: %d\n", I + 1, NUM);

        if (NUM > 0)
            SUM = SUM + NUM;
    }

    printf("\nLa suma de los numeros positivos es: %d", SUM);
}



