/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int TRA, EDA, DIA;
    float COS;

    TRA = 2;   
    EDA = 22;  
    DIA = 5;   

    printf("Tratamiento: 2", TRA);
    printf("Edad: 22", EDA);
    printf("Dias: 5", DIA);

    switch(TRA)
    {
        case 1: COS = DIA * 2800; break;
        case 2: COS = DIA * 1950; break;
        case 3: COS = DIA * 2500; break;
        case 4: COS = DIA * 1150; break;
        default: COS = -1; break;
    }

    if (COS != -1)
    {
        if (EDA >= 60)
            COS = COS * 0.75;   
        else if (EDA <= 25)
            COS = COS * 0.85;   

        printf("\nTratamiento: %d\tDias: %d\tCosto total: %8.2f",
               TRA, DIA, COS);
    }
    else
    {
        printf("\nLa clave del tratamiento es incorrecta");
    }
}
