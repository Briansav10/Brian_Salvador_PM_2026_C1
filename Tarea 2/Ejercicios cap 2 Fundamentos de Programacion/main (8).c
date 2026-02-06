/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

void main(void)
{
    float RES;
    int R, T, Q;

    R = 3;
    T = 2;
    Q = 4;

    printf("Valores ingresados:\n");
    printf("3 = %d, 2 = %d, 4 = %d\n", R, T, Q);

    RES = pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);

    printf("Resultado de la expresion: %.2f\n", RES);

    if (RES < 820)
        printf("\n4 = %d\t3 = %d\t2 = %d", R, T, Q);
}
