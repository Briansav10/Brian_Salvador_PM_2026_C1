/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void main(void)
{
int X = 3, Y = 7, Z[5] = {2, 4, 6, 8, 10};
printf(“\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[3] = %d \t Z[4]
➥= %d”, X, Y,
Z[0], Z[1], Z[2], Z[3], Z[4]);
int *IX; 
IX = &X; 
Y = *IX; 
*IX = 1; 
printf(“\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] =
%d”, X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
IX = &Z[2]; 
Y = *IX; 
*IX = 15;
printf(“\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] =
%d”, X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
X = *IX + 5; 
*IX = *IX - 5; 
printf(“\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] =
%d”, X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
++*IX; 
*IX += 1; 
printf(“\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] =
%d”, X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
X = *(IX + 1); 
Y = *IX; 
printf(“\nX = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] =
%d”, X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
IX = IX + 1; 
Y = *IX; 
printf(“\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] =
%d”, X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
5.5. Arreglos y funciones
El lenguaje de programación C utiliza parámetros por referencia para pasar los
arreglos a las funciones. Cualquier modificación que se realice a los arreglos en
las funciones afecta su valor original. En la llamada a la función sólo se debe
incluir el nombre del arreglo, que es un apuntador. No se deben incluir los corchetes porque ocasionan un error de sintaxis.
EJEMPLO 5.4
Escribe un programa en C que calcule el producto de dos arreglos unidimensionales de tipo entero y almacene el resultado en otro arreglo unidimensional.
Datos: VE1[10], VE2[10], VE3[10] (arreglos unidimensionales de tipo entero con
capacidad para 10 elementos. En VE3 se almacena el resultado del producto de los vectores VE1 y VE2).
5.5 Arreglos y funciones 187
5
IX = IX + 4; Y = *IX; 
printf(“\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] =
%d”, X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
IX = &X; 
IX = IX + 1; 
X = *IX; 
printf(“\nX = %d \t Y = %d \t Z[0]= %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d
➥\t Z[4] =
%d”, X, Y, Z[0], Z[1], Z[2], Z[3], Z[4]);
}




















