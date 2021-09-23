/* Faça um programa que leia 3 comprimentos (x,y e z) e
responda se eles formam um triângulo, ou seja, se
x < y + z e y < x + z e z < x + y. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y,z;
    printf("Entre com os tres comprimentos: ");
    scanf("%f %f %f", &x, &y, &z);
    if ( (x < y + z) && (y < x + z) && (z < x + y) )
    printf("Isto eh um triangulo");
    else
    printf ("Nao forma triangulo");
    return 0;
}
