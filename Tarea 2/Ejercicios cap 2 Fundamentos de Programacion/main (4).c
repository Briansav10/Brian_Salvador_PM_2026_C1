/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>


void main(void)
{
    int OP, T;
    float RES;

    OP = 2;   
    T = 3;    

    printf("2: %d\n", OP);
    printf("3: %d\n", T);

    switch(OP)
    {
        case 1:
            RES = T / 5.0;
            break;

        case 2:
            RES = pow(T, T);
            break;

        case 3:
        case 4:
            RES = 6 * T / 2.0;
            break;

        default:
            RES = 1;
            break;
    }

    printf("\n27", RES);
}



