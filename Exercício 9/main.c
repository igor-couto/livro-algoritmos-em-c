/* Desenvolver um algoritmo para ler o número do dia da
semana e imprimir o seu respectivo nome por extenso.
Considerar o número 1 como domingo, 2 para segunda
etc. Caso o dia da semana não exista (menor do que 1
ou maior do que 7), exibir a mensagem Dia da semana
inválido*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia;
    printf("Entre com o numero correspondente ao dia: ");
    scanf("%d",&dia);
    switch (dia)
    {
        case 1 : printf("Hoje eh domingo");
        break;
        case 2 : printf("Hoje eh segunda");
        break;
        case 3:printf("Hoje eh terça");
        break;
        case 4 : printf("Hoje eh quarta");
        break;
        case 5 : printf("Hoje eh quinta");
        break;
        case 6 : printf("Hoje eh sexta");
        break;
        case 7 : printf("Hoje eh sabado");
        break;
        default: printf("Dia invalido");
    }
    return 0;
}
