/* Escreva um algoritmo que leia 10 valores (usando a mesma variável) e
encontre o maior e o menor deles. Mostre o resultado. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor, menor, maior, flag=1;

    printf("Entre com o valor: ");
    scanf("%d", &valor);
    menor = valor;
    maior = valor;

        while (flag <= 9)
        {
        printf("Entre com o valor: ");
        scanf("%d", &valor);
            if (valor < menor)
            menor = valor;
            else if (valor > maior)
            maior=valor;

        flag++;
        }

    printf("O menor valor eh: %d\n", menor);
    printf("O maior valor eh: %d", maior);


    return 0;
}
