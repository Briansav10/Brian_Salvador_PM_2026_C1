/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

const int TAM = 50;
void Lectura(int *, int);
void Frecuencia(int , int, int , int); 
void Impresion(int *, int);
void Mayor(int *, int);
void main(void)
{
int CAL[TAM], FRE[6] = {0}; 
Lectura(CAL, TAM); 
Frecuencia(CAL, TAM, FRE, 6);

printf(“\nFrecuencia de Calificaciones\n”);
Impresión(FRE, 6);
Mayor(FRE, 6);
}
void Lectura(int VEC[], int T)

{
int I;
for (I=0; I<T; I++)
{
printf(“Ingrese la calificación -0:5- del alumno %d: “, I+1);
scanf(“%d”, &VEC[I]);
}
Problemas resueltos
Problema PR5.1
Escribe un programa que, al recibir como dato un arreglo unidimensional de números reales, obtenga como resultado la suma del cuadrado de los números.
Dato: VEC[100] (arreglo unidimensional de tipo real de 100 elementos).
190 Capítulo 5. Arreglos unidimensionales
}
void Impresion(int VEC[], int T)

{
int I;
for (I=0; I<T; I++)
printf(“\nVEC[%d]: %d”, I, VEC[I]);
}
void Frecuencia(int A[], int P, int B[], int T)

{
int I;
for (I=0; I<P; I++)
if ((A[I] >= 0) && (A[I] < 6)) 
B[A[I]]++; 

}
void Mayor(int *X, int T)

{
int I, MFRE = 0, MVAL = X[0];
for (I=1; I<T; I++)
if (MVAL < X[I])
{
MFRE = I;
MVAL = X[I];
}
printf(“\n\nMayor frecuencia de calificaciones: %d \tValor: %d”, MFRE, MVAL);
}



















