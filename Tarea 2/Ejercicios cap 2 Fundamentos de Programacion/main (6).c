/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main(void)
{
    float P, S, R;

    P = 12500;
    S = 9800;
    R = 15300;

    printf("Ventas ingresadas:\n");
    printf("P: 12500", P);
    printf("S: 9800", S);
    printf("R: 15300", R);

    if (P > S)
    {
        if (P > R)
        {
            if (S > R)
                printf("\nOrden: P, S, R: %.2f  %.2f  %.2f", P, S, R);
            else
                printf("\nOrden: P, R, S: %.2f  %.2f  %.2f", P, R, S);
        }
        else
            printf("\nOrden: R, P, S: %.2f  %.2f  %.2f", R, P, S);
    }
    else
    {
        if (S > R)
        {
            if (P > R)
                printf("\nOrden: S, P, R: %.2f  %.2f  %.2f", S, P, R);
            else
                printf("\nOrden: S, R, P: %.2f  %.2f  %.2f", S, R, P);
        }
        else
            printf("\nOrden: R, S, P: %.2f  %.2f  %.2f", R, S, P);
    }
}
