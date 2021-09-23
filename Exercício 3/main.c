//Construir um algoritmo para ler 6 valores reais, calcular e imprimir a média aritmética desses valores.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v1,v2,v3,v4,v5,v6,media;
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
    printf("Entre com o valor do sexto numero: ");
    scanf("%d",&v6);
    media = (v1+v2+v3+v4+v5+v6)/6;
    printf("A media aritimetica foi: %d",media);
    return 0;
}
