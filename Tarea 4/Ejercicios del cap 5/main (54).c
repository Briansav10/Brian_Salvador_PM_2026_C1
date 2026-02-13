/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main(void)
{
    int ELE[5] = {0}; 
    int I, VOT;

    printf("Ingresa el primer voto (0 - Para terminar): ");
    scanf("%d", &VOT);

    while (VOT != 0)
    {
        
        if (VOT > 0 && VOT < 6)
        {
            ELE[VOT - 1]++; 
        }
        else
        {
            printf("\nEl voto ingresado es incorrecto.\n");
        }

        printf("Ingresa el siguiente voto (0 - Para terminar): ");
        scanf("%d", &VOT);
    }

    printf("\nResultados de la Elección\n");

    for (I = 0; I < 5; I++)
    {
        printf("Candidato %d: %d votos\n", I + 1, ELE[I]);
    }

    return 0;
}




















