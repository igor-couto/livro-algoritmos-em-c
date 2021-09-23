/* Efetuar a leitura do número de quilowatts consumido e calcular o valor a ser
pago de energia elétrica, sabendo-se que o valor a pagar por quilowatt é de
0,12. Apresentar o valor total a ser pago pelo usuário acrescido de 18% de
ICMS. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qw;
    float valor;
    printf("Quantos Quilowatts foram consumidos ? : ");
    scanf("%d", &qw);
    valor = (qw * 0,12) * 1.18;
    printf("O valor a se pagar eh de %.2f Reais", valor);
    return 0;
}
