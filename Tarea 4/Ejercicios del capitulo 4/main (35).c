/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K_global = 3;   

int main(void)
{
    int I;

    for (I = 1; I <= 3; I++)
    {
        printf("\nEl resultado de la función f1 es: %d", f1());
        printf("\nEl resultado de la función f2 es: %d", f2());
        printf("\nEl resultado de la función f3 es: %d", f3());
        printf("\nEl resultado de la función f4 es: %d\n", f4());
    }

    return 0;
}

int f1(void)
{
    K_global += K_global;
    return K_global;
}

int f2(void)
{
    int K = 1;
    K++;
    return K;
}

int f3(void)
{
    static int K = 8;

    K += 2;
    return K;
}

int f4(void)
{
    int K_local = 5;

    return K_local + K_global;
}



