/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    float PRO;

    PRO = 5.8;

    printf("5.8: %.1f", PRO);

    if (PRO >= 6.0)
        printf("\nAprobado");
    else
        printf("\nReprobado");
}


