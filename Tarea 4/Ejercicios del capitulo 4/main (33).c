/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int cubo(int x);   

void main(void)
{
    int I, CUB;

    for (I = 1; I <= 10; I++)
    {
        CUB = cubo(I);
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

int cubo(int x)
{
    return x * x * x;
}

