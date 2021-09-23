/* Faça um programa para ler dois número inteiros, faça a
divisão do primeiro pelo segundo (se o segundo for
diferente de zero). */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    float div;
    div = 0;
    printf("Entre com o primeiro numero: ");
    scanf("%d",&num1);
    printf("Entre com o segundo numero: ");
    scanf("%d",&num2);
    if (num2 =! 0)
    {
    div = num1/num2;
    printf("O resultado da divisao eh: %.3f", div);
    }
    else
    printf("Divisao por zero?! ta maluco?");
    return 0;
}
