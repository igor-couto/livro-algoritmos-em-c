/* Fa�a um programa para ler dois n�meros reais e verificar
se ambos s�o maiores que zero. Caso positivo, informar
"Valores s�o v�lidos". Caso contr�rio, informar "Valores
inv�lidos". */

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
