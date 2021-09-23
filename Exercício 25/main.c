/* Fazer um algoritmo que imprima todos os números de
100 até 1. */

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
