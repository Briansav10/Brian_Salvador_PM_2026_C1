/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int multiplo(int, int);

int main(void)
{
    int NU1, NU2, RES;

    printf("\nIngresa los dos numeros: ");
    scanf("%d %d", &NU1, &NU2);

    RES = multiplo(NU1, NU2);

    if (RES)
        printf("\nEl segundo numero es multiplo del primero");
    else
        printf("\nEl segundo numero NO es multiplo del primero");

    return 0;
}

int multiplo(int N1, int N2)
{
    int RES;

    if ((N2 % N1) == 0)
        RES = 1;
    else
        RES = 0;

    return RES;
}









