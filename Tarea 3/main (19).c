/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    float PAG, SPA = 0;
    
    float pagos[] = {1500.00, 2200.50, 900.00, 400.75, 0};

    int i = 0;

    PAG = pagos[i];

    printf("Primer pago: %.2f\n", PAG);

    do
    {
        SPA = SPA + PAG;

        i++;
        PAG = pagos[i];

        if (PAG != 0)
            printf("Siguiente pago: %.2f\n", PAG);

    } while (PAG != 0);

    printf("\nEl total de pagos del mes es: %.2f", SPA);
}


