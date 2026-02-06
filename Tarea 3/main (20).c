/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int I = 0;
    float SAL, PRO, NOM = 0;

    float salarios[] = {22000, 25000, 18000, 30000, 0};

    int i = 0;

    printf("Primer salario: %.2f\n", salarios[i]);

    SAL = salarios[i];

    do
    {
        NOM = NOM + SAL;
        I = I + 1;

        i++;
        SAL = salarios[i];

        if (SAL != 0)
            printf("Siguiente salario: %.2f\n", SAL);

    } while (SAL != 0);

    PRO = NOM / I;

    printf("\nNomina total: %.2f", NOM);
    printf("\nPromedio: %.2f", PRO);
}



