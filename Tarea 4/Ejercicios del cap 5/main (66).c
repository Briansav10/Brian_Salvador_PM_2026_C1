/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

#define MAX 100

void Lectura(int A[], int T);
float Media(int A[], int T);
float Varianza(int A[], int T, float M);
float Desviacion(float V);
void Frecuencia(int A[], int P, int B[]);
int Moda(int A[], int T);

int main(void)
{
    int TAM, MODA;
    int ALU[MAX], FRE[11] = {0};

    float MED, VAR, DES;

    do
    {
        printf("Ingrese el tamaño del arreglo: ");
        scanf("%d", &TAM);
    }
    while (TAM > MAX || TAM < 1);

    printf("\nIngrese las calificaciones (0 a 10):\n");
    Lectura(ALU, TAM);

    MED = Media(ALU, TAM);
    VAR = Varianza(ALU, TAM, MED);
    DES = Desviacion(VAR);

    Frecuencia(ALU, TAM, FRE);
    MODA = Moda(FRE, 11);

    printf("\nMedia: %.2f", MED);
    printf("\nVarianza: %.2f", VAR);
    printf("\nDesviacion: %.2f", DES);
    printf("\nModa: %d\n", MODA);

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

float Media(int A[], int T)
{
    int I;
    float SUM = 0.0;

    for (I = 0; I < T; I++)
    {
        SUM += A[I];
    }

    return SUM / T;
}

float Varianza(int A[], int T, float M)
{
    int I;
    float SUM = 0.0;

    for (I = 0; I < T; I++)
    {
        SUM += pow(A[I] - M, 2);
    }

    return SUM / T;
}

float Desviacion(float V)
{
    return sqrt(V);
}

void Frecuencia(int A[], int P, int B[])
{
    int I;

    for (I = 0; I < P; I++)
    {
        if (A[I] >= 0 && A[I] <= 10)   
        {
            B[A[I]]++;
        }
    }
}

int Moda(int A[], int T)
{
    int I;
    int MAXF = A[0];
    int MODA = 0;

    for (I = 1; I < T; I++)
    {
        if (A[I] > MAXF)
        {
            MAXF = A[I];
            MODA = I;
        }
    }

    return MODA;
}






