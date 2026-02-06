/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0;

    N = 7;

    int datos[] = {4, 7, 2, 9, 6, 5, 8};

    printf("Cantidad de datos: %d\n\n", N);

    if (N > 0)
    {
        for (I = 0; I < N; I++)
        {
            NUM = datos[I];

            printf("Numero %d: %d\n", I + 1, NUM);

        
            if (NUM % 2 == 0)   
            {
                SPA = SPA + NUM;
            }
            else              
            {
                SIM = SIM + NUM;
                CIM++;
            }
        }

        printf("\nLa suma de los numeros pares es: %d", SPA);

        if (CIM > 0)
            printf("\nEl promedio de los impares es: %.2f",
                   (float)SIM / CIM);
        else
            printf("\nNo hay numeros impares");
    }
    else
    {
        printf("\nEl valor de N es incorrecto");
    }
}







