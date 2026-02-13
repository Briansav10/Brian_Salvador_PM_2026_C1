/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


#define MAX 100

void Lectura(int A[], int T);
void Ordena(int A[], int T);
void Imprime(int A[], int T);

int main(void)
{
    int TAM, VEC[MAX];

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);

    printf("\nIngrese los datos:\n");
    Lectura(VEC, TAM);

    Ordena(VEC, TAM);

    printf("\nArreglo ordenado:\n");
    Imprime(VEC, TAM);

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
        printf("A[%d]: %d\n", I, A[I]);
    }
}

void Ordena(int A[], int T)
{
    int AUX, L, I;

    for (I = 1; I < T; I++)
    {
        AUX = A[I];
        L = I - 1;

        while (L >= 0 && AUX < A[L])
        {
            A[L + 1] = A[L];
            L--;
        }

        A[L + 1] = AUX;
    }
}




