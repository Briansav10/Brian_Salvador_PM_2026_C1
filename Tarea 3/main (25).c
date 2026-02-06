/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0;
    float CAL;

    float notas[] = {3.5, 5.2, 6.8, 8.4, 9.1, 7.0, 4.8, 10.0, -1};

    int i = 0;

    CAL = notas[i];

    printf("Calificacion: %.2f\n", CAL);

    while (CAL != -1)
    {
        if (CAL < 4)
            R1++;
        else if (CAL < 6)
            R2++;
        else if (CAL < 8)
            R3++;
        else if (CAL < 9)
            R4++;
        else
            R5++;

        i++;
        CAL = notas[i];

        if (CAL != -1)
            printf("Calificacion: %.2f\n", CAL);
    }

    printf("\n0..3.99 = %d", R1);
    printf("\n4..5.99 = %d", R2);
    printf("\n6..7.99 = %d", R3);
    printf("\n8..8.99 = %d", R4);
    printf("\n9..10   = %d", R5);
}








