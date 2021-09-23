/*  Faça um procedimento que faça a leitura um vetor de 10 elementos
inteiros e imprima somente os valores armazenados nos índices pares */

#include <stdio.h>
#include <stdlib.h>

void indices_pares( )
{

}

int main()
{
    int vetor[10], n;
    for (n=0; n <10 ; n++)
    {
        printf("Entre com um valor: ");
        scanf("%d", &vetor[n]);
    }
    indices_pares(vetor);
    return 0;
}
