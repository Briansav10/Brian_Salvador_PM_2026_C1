/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int I;
    float SAL, NOM;

    NOM = 0;

    float salarios[15] = {
        20000, 22000, 18000, 25000, 30000,
        27000, 24000, 21000, 19000, 32000,
        28000, 26000, 23000, 29000, 31000
    };

    for (I = 0; I < 15; I++)
    {
        SAL = salarios[I];

        printf("Salario del profesor %d: %.2f\n", I + 1, SAL);

        NOM = NOM + SAL;
    }

    printf("\nEl total de la nomina es: %.2f", NOM);
}


