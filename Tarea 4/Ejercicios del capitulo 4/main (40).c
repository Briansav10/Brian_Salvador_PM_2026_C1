/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int Suma(int X, int Y)
{
    return (X + Y);
}

int Resta(int X, int Y)
{
    return (X - Y);
}

int Control(int (*apf)(int, int), int X, int Y)
{
    int RES;

    RES = (*apf)(X, Y);  

    return RES;
}

int main(void)
{
    int R1, R2;

    R1 = Control(Suma, 15, 5);
    R2 = Control(Resta, 10, 4);

    printf("\nResultado 1: %d", R1);
    printf("\nResultado 2: %d", R2);

    return 0;
}








