/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define TAM 100

void Primo(int, int *);
void Imprime(int[], int);

int main(void)
{
    int P[TAM];
    int FLA, J = 0, PRI = 2;

    while (J < TAM)
    {
        FLA = 1;

        Primo(PRI, &FLA);

        if (FLA)   
        {
            P[J] = PRI;
            J++;
        }

        PRI++;
    }

    Imprime(P, TAM);

    return 0;
}

void Primo(int A, int *B)
{
    int DI = 2;

    if (A < 2)
    {
        *B = 0;
        return;
    }

    while (DI * DI <= A && *B)
    {
        if (A % DI == 0)
        {
            *B = 0;
        }

        DI++;
    }
}

void Imprime(int Primos[], int T)
{
    int I;

    printf("\nPrimeros 100 numeros primos:\n\n");

    for (I = 0; I < T; I++)
    {
        printf("Primo[%d] = %d\n", I + 1, Primos[I]);
    }
}

