/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int a, b, c, d;

void funcion1(int, int *, int *);
int funcion2(int *, int);

int main(void)
{
    int a;   

    a = 1;
    b = 2;
    c = 3;
    d = 4;

    printf("%d %d %d %d\n", a, b, c, d);

    a = funcion2(&a, c);

    printf("%d %d %d %d\n", a, b, c, d);

    return 0;
}

void funcion1(int r, int *b, int *c)
{
    int d;

    a = *c;
    d = a + 3 + *b;

    if (r)
    {
        *b = *b + 2;
        *c = *c + 3;

        printf("%d %d %d %d\n", a, *b, *c, d);
    }
    else
    {
        *b = *b + 5;
        *c = *c + 4;

        printf("%d %d %d %d\n", a, *b, *c, d);
    }
}

int funcion2(int *d, int c)
{
    int b;

    a = 1;
    b = 7;

    funcion1(-1, d, &b);

    printf("%d %d %d %d\n", a, b, c, *d);

    c += 3;
    (*d) += 2;

    printf("%d %d %d %d\n", a, b, c, *d);

    return c;
}
















