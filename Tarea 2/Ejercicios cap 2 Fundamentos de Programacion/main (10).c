/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


void main(void)
{
    int T, P, N;

    T = 8;
    P = 2;
    N = 2;

    printf("T = 8, P = 2, N = 2", T, P, N);

    if (P != 0)
    {
        if ( pow((float)T / P, N) == ( pow(T, N) / pow(P, N) ) )
            printf("\nSe comprueba la igualdad");
        else
            printf("\nNo se comprueba la igualdad");
    }
    else
    {
        printf("\nP tiene que ser diferente de cero");
    }
}


