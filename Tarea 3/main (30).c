/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int I, MAT, MAMAT = 0, MEMAT = 0;
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0;

    printf("Ingrese la matricula del primer alumno (0 para terminar):\t");
    scanf("%d", &MAT);

    while (MAT != 0)
    {
        SUM = 0;

        for (I = 1; I <= 5; I++)
        {
            printf("Ingrese la calificacion %d: ", I);
            scanf("%f", &CAL);
            SUM += CAL;
        }

        PRO = SUM / 5;

        printf("\nMatricula: %d\tPromedio: %.2f\n", MAT, PRO);

        if (PRO > MAPRO)
        {
            MAPRO = PRO;
            MAMAT = MAT;
        }

        if (PRO < MEPRO)
        {
            MEPRO = PRO;
            MEMAT = MAT;
        }

        printf("\nIngrese la matricula del siguiente alumno (0 para terminar): ");
        scanf("%d", &MAT);
    }

    printf("\nAlumno con mejor promedio: %d  -> %.2f", MAMAT, MAPRO);
    printf("\nAlumno con peor promedio:  %d  -> %.2f", MEMAT, MEPRO);
}

