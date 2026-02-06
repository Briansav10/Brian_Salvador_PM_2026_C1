/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


void main(void)
{
    int I;
    long long PRI = 0, SEG = 1, SIG;

    printf("%lld\t%lld", PRI, SEG);

    for (I = 3; I <= 50; I++)
    {
        SIG = PRI + SEG;
        PRI = SEG;
        SEG = SIG;

        printf("\t%lld", SIG);
    }
}










