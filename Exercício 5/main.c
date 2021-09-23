//Ler dois números inteiros e informar se o primeiro valor lido é maior, menor ou igual ao segundo.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Entre com o primeiro valor: ");
    scanf("%d",&a);
    printf("Entre com o segundo valor: ");
    scanf("%d",&b);
    if (a==b)
    printf("Os valores sao iguais.");
    if (a>b)
    printf("O primeiro valor eh maior.");
    if (a<b)
    printf("O segundo valor eh maior.");
    return 0;
}
