/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int a, b, c, d;

void funcion1(int *, int *);
int funcion2(int, int *);

int main(void)
{
    int a;   

    a = 1;
    b = 2;
    c = 3;
    d = 4;

    printf("\n%d %d %d %d", a, b, c, d);

    funcion1(&b, &c);

    printf("\n%d %d %d %d", a, b, c, d);

    a = funcion2(c, &d);

    printf("\n%d %d %d %d", a, b, c, d);

    return 0;
}

void funcion1(int *b, int *c)
{
    int d;

    a = 5;   
    d = 3;   

    (*b)++;
    (*c) += 2;

    printf("\n%d %d %d %d", a, *b, *c, d);
}

int funcion2(int c, int *d)
{
    int b;

    a++;      
    b = 7;    
    c += 3;   
    (*d) += 2;

    printf("\n%d %d %d %d", a, b, c, *d);

    return c;
}







