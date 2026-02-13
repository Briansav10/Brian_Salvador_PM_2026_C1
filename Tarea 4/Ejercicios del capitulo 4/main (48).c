/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void Mayor(float, float, float); 
void main(void)
{
int I;
float GOL, PAC, CAR, AGOL = 0, APAC = 0, ACAR = 0;
for (I =1; I <= 12; I++)
{
printf(“\n\nIngresa las lluvias del mes %d”, I);
printf(“\nRegiones Golfo, Pacífico y Caribe: “);
scanf(“%f %f %f”, &GOL, &PAC, &CAR);
AGOL += GOL;
APAC += PAC;
ACAR += CAR;
}
printf(“\n\nPromedio de lluvias Región Golfo: %6.2f”, (AGOL / 12));
printf(“\nPromedio de lluvias Región Pacífico: %6.2f “, (APAC / 12));
printf(“\nPromedio de lluvias Región Caribe: %6.2f \n”, (ACAR / 12));
Mayor(AGOL, APAC, ACAR);

}
void Mayor(float R1, float R2, float R3)

{
if (R1 > R2)
if (R1 > R3)
printf(“\nRegión con mayor promedio: Región Golfo. Promedio:
➥ %6.2f”,
R1 / 12);
else
printf(“\nRegión con mayor promedio: Región Caribe. Promedio:
➥ %6.2f”,
R3 / 12);
else
Problema PR4.9
Escribe un programa en C que imprima todos los valores de T, P y Q que satisfagan la siguiente expresión:
15*T4 + 12*P5 + 9*Q6 < 5500
Nota: Observa que las tres variables sólo pueden tomar valores enteros positivos.
Problemas resueltos 163
4
if (R2 > R3)
printf(“\nRegión con mayor promedio: Región Pacífico. Promedio:
➥ %6.2f”,
R2 / 12);
else
printf(“\nRegión con mayor promedio: Región Caribe. Promedio:
➥ %6.2f”,
R3 / 12);
}














