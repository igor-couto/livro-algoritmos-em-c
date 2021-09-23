/* Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e
escreve o valor de E.
E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N! */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N , denominador=1 ,  cont ;
    float E=0, temp=0, fatorial ;

    printf("Entre com o valor de N: ");
    scanf("%d", &N);

    while (denominador <= N)
    {
        for(cont = denominador; cont > 1; cont--)
        {
            fatorial *= cont;
        }

        denominador++ ;
        temp = temp + 1/fatorial ;
        E = E + temp ;

    }

    printf("A soma E eh : %.3f", E);

    return 0;
}

