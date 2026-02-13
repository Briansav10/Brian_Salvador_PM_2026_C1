/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

#define MAX 100

void Lectura(float *, int);
double Suma(float *, int);

int main(void)
{
    float VEC[MAX];
    double RES;

    Lectura(VEC, MAX);

    RES = Suma(VEC, MAX);

    printf("\n\nSuma del arreglo: %.2lf\n", RES);

    return 0;
}

void Lectura(float A[], int T)
{
    int I;

    for (I = 0; I < T; I++)
    {
        printf("Ingrese el elemento %d: ", I + 1);
        scanf("%f", &A[I]);
    }
}

double Suma(float A[], int T)
{
    int I;
    double AUX = 0.0;

    for (I = 0; I < T; I++)
    {
        AUX += pow(A[I], 2);
    }

    return AUX;
}
