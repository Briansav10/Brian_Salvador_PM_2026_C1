/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int Expresion(int, int, int);

int main(void)
{
    int EXP, T = 0, P = 0, Q = 0;

    EXP = Expresion(T, P, Q);

    while (EXP < 5500)
    {
        while (EXP < 5500)
        {
            while (EXP < 5500)
            {
                printf("T: %d, P: %d, Q: %d, Resultado: %d\n",
                       T, P, Q, EXP);

                Q++;
                EXP = Expresion(T, P, Q);
            }

            P++;
            Q = 0;
            EXP = Expresion(T, P, Q);
        }

        T++;
        P = 0;
        Q = 0;
        EXP = Expresion(T, P, Q);
    }

    return 0;
}

int Expresion(int T, int P, int Q)
{
    int RES;

    RES = 15 * pow(T, 4) +
          12 * pow(P, 5) +
          9  * pow(Q, 6);

    return RES;
}















