/* Fazer um algoritmo que imprima todos os números
pares no intervalo 1-100. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=2;
    while (x <= 100)
    {
        printf("%d ", x);
        x = x + 2 ;
    }
    return 0;
}
