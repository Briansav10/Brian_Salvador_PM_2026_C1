/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int mad(int);

int main(void)
{
    int NUM, RES;

    printf("\nIngresa el numero: ");
    scanf("%d", &NUM);

    RES = mad(NUM);

    printf("\nEl mayor divisor de %d es: %d", NUM, RES);

    return 0;
}

int mad(int N1)
{
    int I = N1 / 2;

    while (N1 % I != 0)
    {
        I--;
    }

    return I;
}










