/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    float PRE, NPR;

    PRE = 1000;

    printf("El precio del producto es: %.2f\n", PRE);

    if (PRE < 1500)
        NPR = PRE + (PRE * 0.11);
    else
        NPR = PRE;

    printf("El nuevo precio es: %.2f", NPR);
}

