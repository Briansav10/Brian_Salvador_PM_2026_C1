/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void Lectura(int *, int);
void Imprime(int *, int);
void Elimina(int *, int *);

int main(void)
{
    int TAM;
    int ARRE[100];

    do
    {
        printf("Ingrese el tamaño del arreglo (1 a 100): ");
        scanf("%d", &TAM);
    }
    while (TAM < 1 || TAM > 100);

    Lectura(ARRE, TAM);

    Elimina(ARRE, &TAM);

    printf("\nArreglo sin repetidos:\n");
    Imprime(ARRE, TAM);

    return 0;
}

void Lectura(int A[], int T)
{
    int I;

    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%d", &A[I]);
    }
}

void Imprime(int A[], int T)
{
    int I;

    for (I = 0; I < T; I++)
    {
        printf("A[%d] = %d\n", I, A[I]);
    }
}

void Elimina(int A[], int *T)
{
    int I = 0, K, L;

    while (I < (*T - 1))
    {
        K = I + 1;

        while (K < *T)
        {
            if (A[I] == A[K])
            {
                for (L = K; L < (*T - 1); L++)
                {
                    A[L] = A[L + 1];
                }

                (*T)--;  
            }
            else
            {
                K++;
            }
        }

        I++;
    }
}
