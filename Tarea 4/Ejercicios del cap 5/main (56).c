/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

const int MAX = 10; 
188 Capítulo 5. Arreglos unidimensionales
void Lectura(int VEC[], int T);
void Imprime(int VEC[], int T);
void Producto(int *X, int *Y, int *Z, int T); 
void main(void)
{
int VE1[MAX], VE2[MAX], VE3[MAX];

Lectura(VE1, MAX);

Lectura(VE2, MAX);
Producto(VE1, VE2, VE3, MAX);

printf(“\nProducto de los Vectores”);
Imprime(VE3, MAX);
}
void Lectura(int VEC[], int T)

{
int I;
printf(“\n”);
for (I=0; I<T; I++)
{
printf(“Ingrese el elemento %d: “, I+1);
scanf(“%d”, &VEC[I]);
}
}
void Imprime(int VEC[], int T)

int I;
{
for (I=0; I<T; I++)
printf(“\nVEC[%d]: %d”, I+1, VEC[I]);
}
void Producto(int *X, int *Y, int *Z, int T)

{
int I;
for(I=0; I<T; I++)
Z[I] = X[I] * Y[I];
}



















