/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int MAT, CAR, SEM;
    float PRO;

    MAT = 20241025;
    CAR = 3;     
    SEM = 6;     
    PRO = 8.9;   

    printf("20241025: %d\n", MAT);
    printf("3: %d\n", CAR);
    printf("6: %d\n", SEM);
    printf("8.9: %.2f\n", PRO);

    switch(CAR)
    {
        case 1: // Industrial
            if (SEM >= 6 && PRO >= 8.5)
                printf("\n%d %d %.2f", MAT, CAR, PRO);
            break;

        case 2: // Telematica
            if (SEM >= 5 && PRO >= 9.0)
                printf("\n%d %d %.2f", MAT, CAR, PRO);
            break;

        case 3: // Computacion
            if (SEM >= 6 && PRO >= 8.8)
                printf("\n%d %d %.2f", MAT, CAR, PRO);
            break;

        case 4: // Mecanica
            if (SEM >= 7 && PRO >= 9.0)
                printf("\n%d %d %.2f", MAT, CAR, PRO);
            break;

        default:
            printf("\nError en la carrera");
            break;
    }
}

