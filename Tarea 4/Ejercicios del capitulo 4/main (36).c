/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int cubo(int);   

int main(void)
{
    int I;

    for (I = 1; I <= 10; I++)
    {
        printf("\nEl cubo de %d es: %d", I, cubo(I));
    }

    return 0;
}

int cubo(int K)
{
    return (K * K * K);
}




