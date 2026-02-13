/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int cubo(void);   
int I;            

void main(void)
{
    int CUB;

    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();   
        printf("\nEl cubo de %d es: %d", I, CUB);
    }
}

int cubo(void)   
{
    return (I * I * I);
}
