/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void parimp(int, int *, int *); 
void main(void)
{
int I, N, NUM, PAR = 0, IMP = 0;
printf(“Ingresa el número de datos: “);
scanf(“%d”, &N);
for (I =1; I <= N; I++)
{
printf(“Ingresa el número %d:”, I);
scanf(“%d”, &NUM);
parimp(NUM, &PAR, &IMP);
Problema PR4.5
Escribe un programa en C que, al recibir las calificaciones de un grupo de alumnos que presentaron su examen de admisión para ingresar a una universidad privada en la Ciudad de México, calcule y escriba el número de calificaciones que
hay en cada uno de los siguientes rangos:
0 . . . 3.99
4 . . . 5.99
6 . . . 7.99
8 . . . 8.99
9 . . . 10
Datos: CAL1, CAL2, ..., -1 (CALi es una variable de tipo real que representa la calificación del alumno i).
Problemas resueltos 157
4

}
printf(“\nNúmero de pares: %d”, PAR);
printf(“\nNúmero de impares: %d”, IMP);
}
void parimp(int NUM, int *P, int *I)

{
int RES;
RES = pow(-1, NUM);
if (RES > 0)
*P += 1;
else
if (RES < 0)
*I += 1;
}











