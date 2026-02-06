/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int NUM;

    NUM = 7;

    printf("Numero inicial: %d\n", NUM);

    if (NUM > 0)
    {
        printf("\nSerie de ULAM:\n");
        printf("%d\t", NUM);

        while (NUM != 1)
        {
            
            if (NUM % 2 == 0)
                NUM = NUM / 2;       
            else
                NUM = NUM * 3 + 1;   

            printf("%d\t", NUM);
        }
    }
    else
    {
        printf("\nNUM debe ser un entero positivo");
    }
}









