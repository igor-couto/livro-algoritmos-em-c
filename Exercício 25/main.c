/* Fazer um algoritmo que imprima todos os n�meros de
100 at� 1. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    while (x <= 100)
    {
        printf("%d, ", x);
        x = x+1;
    }
    return 0;
}
