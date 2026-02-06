/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/





#include <stdio.h>


void main(void)
{
    float SAL;
    int NIV;

    NIV = 3;       
    SAL = 25000;   

    printf("3: %d\n", NIV);
    printf("25000: %.2f\n", SAL);

    switch(NIV)
    {
        case 1:
            SAL = SAL * 1.0035;
            break;

        case 2:
            SAL = SAL * 1.0041;
            break;

        case 3:
            SAL = SAL * 1.0048;
            break;

        case 4:
            SAL = SAL * 1.0053;
            break;

        default:
            printf("Nivel no valido\n");
            break;
    }

    printf("\nNivel: %d \tNuevo salario: %8.2f", NIV, SAL);
}
