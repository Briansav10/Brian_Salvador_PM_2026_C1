/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int I, N;
    float LAN, SLA = 0;

    N = 5;

    float lanzamientos[5] = {62.5, 63.2, 61.8, 64.0, 62.9};

    printf("Numero de lanzamientos: %d\n\n", N);

    for (I = 0; I < N; I++)
    {
        LAN = lanzamientos[I];

        printf("Lanzamiento %d: %.2f metros\n", I + 1, LAN);

        SLA = SLA + LAN;
    }

    SLA = SLA / N;

    printf("\nEl promedio de lanzamientos es: %.2f metros", SLA);
}




