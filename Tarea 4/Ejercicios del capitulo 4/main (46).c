/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


int Productoria(int);   

int main(void)
{
    int NUM;

    do
    {
        printf("Ingresa el numero del cual quieres calcular la productoria: ");
        scanf("%d", &NUM);
    }
    while (NUM > 100 || NUM < 1);

    printf("\nLa productoria de %d es: %d", NUM, Productoria(NUM));

    return 0;
}

int Productoria(int N)
{
    int I, PRO = 1;

    for (I = 1; I <= N; I++)
        PRO *= I;

    return PRO;
}













