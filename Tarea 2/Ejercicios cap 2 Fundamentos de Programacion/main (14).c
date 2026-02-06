/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int CLA, CAT, ANT, RES;

    CLA = 1025;   
    CAT = 3;     
    ANT = 6;      

    printf("Clave: 1025", CLA);
    printf("Categoria: 3", CAT);
    printf("Antiguedad: 6", ANT);

    switch(CAT)
    {
        case 3:
        case 4:
            if (ANT >= 5)
                RES = 1;
            else
                RES = 0;
            break;

        case 2:
            if (ANT >= 7)
                RES = 1;
            else
                RES = 0;
            break;

        default:
            RES = 0;
            break;
    }

    if (RES)
        printf("\nEl trabajador con clave %d SI cumple para el puesto", CLA);
    else
        printf("\nEl trabajador con clave %d NO cumple para el puesto", CLA);
}

