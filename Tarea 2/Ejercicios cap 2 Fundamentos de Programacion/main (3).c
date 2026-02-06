/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main(void)
{
    float PRE, NPR;

    PRE = 1200;

    printf("1200: %.2f", PRE);

    if (PRE < 1500)
        NPR = PRE * 1.11;
    else
        NPR = PRE * 1.08;

    printf("\n1332: %8.2f", NPR);
}
