/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int I, NUM;
    long FAC;

    NUM = 5;

    printf("Numero ingresado: %d\n", NUM);

    if (NUM >= 0)
    {
        FAC = 1;

        for (I = 1; I <= NUM; I++)
        {
            FAC = FAC * I;
        }

        printf("\nEl factorial de %d es: %ld", NUM, FAC);
    }
    else
    {
        printf("\nError en el dato ingresado");
    }
}





