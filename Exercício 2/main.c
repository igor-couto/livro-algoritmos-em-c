//Construir um algoritmo para ler 5 valores inteiros, calcular e imprimir a soma desses valores.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1,v2,v3,v4,v5,soma;
    printf("Entre com o valor do primeiro numero: ");
    scanf("%d",&v1);
    printf("Entre com o valor do segundo numero: ");
    scanf("%d",&v2);
    printf("Entre com o valor do terceiro numero: ");
    scanf("%d",&v3);
    printf("Entre com o valor do quarto numero: ");
    scanf("%d",&v4);
    printf("Entre com o valor do quinto numero: ");
    scanf("%d",&v5);
    soma = v1+v2+v3+v4+v5;
    printf("\n A soma dos cinco valores eh: %d", soma);
    return 0;
}
