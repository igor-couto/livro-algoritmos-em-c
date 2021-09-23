/* Faça um programa para ler dois números reais e verificar
se ambos são maiores que zero. Caso positivo, informar
"Valores são válidos". Caso contrário, informar "Valores
inválidos". */

#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1, num2;
    printf("Entre com o primeiro numero: ");
    scanf("%d",&num1);
    printf("Entre com o segundo numero: ");
    scanf("%d",&num2);
    if (num1>0 && num2>0)
    printf("Valores sao validos");
    else
    printf("Valores invalidos");
    return 0;
}
