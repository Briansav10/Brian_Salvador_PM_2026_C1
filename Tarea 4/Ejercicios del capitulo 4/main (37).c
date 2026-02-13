/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void f1(int *);

int main(void)
{
    int I, K = 4;

    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la función: %d", ++K);

        f1(&K);   

        printf("\nValor de K después de llamar a la función: %d", K);
    }

    return 0;
}

void f1(int *R)
{
    *R += *R;   
}





