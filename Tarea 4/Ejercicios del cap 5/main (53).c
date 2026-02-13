/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int main(void)
{
    int I, NUM, CUE = 0;
    int ARRE[100]; 

    for (I = 0; I < 100; I++)
    {
        printf("Ingrese el elemento %d del arreglo: ", I + 1);
        scanf("%d", &ARRE[I]);
    }

    printf("\nIngrese el número que se va a buscar en el arreglo: ");
    scanf("%d", &NUM);

    for (I = 0; I < 100; I++)
    {
        if (ARRE[I] == NUM)
        {
            CUE++;
        }
    }

    printf("\nEl %d se encuentra %d veces en el arreglo\n", NUM, CUE);

    return 0;
}



















