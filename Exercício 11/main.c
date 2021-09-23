/* Os funcionários de uma empresa receberam um aumento
de salário: técnicos (código = 1), 50%; gerentes (código =
2), 30%; demais funcionários (código = 3), 20%. Escrever
um algoritmo para ler o código do cargo de um
funcionário e o valor do seu salário atual, calcular e
imprimir o novo salário após o aumento) */
#include <stdio.h>
#include <stdlib.h>

int main()
{   int cod;
    float salario,novo_salario;
    printf("Entre com o codigo do funcionario: ");
    scanf("%d",&cod);
    printf("Entre com o salario do funcionario: ");
    scanf("%f",&salario);
    switch (cod)
    {
    case 1 : novo_salario= (salario * 1.5);
    printf("O funcionario eh um tecnico, seu salario eh de %.2f, e seu novo salario sera de %.2f", salario, novo_salario);
    break;
    case 2 : novo_salario= (salario * 1.3);
    printf("O funcionario eh um gerente, seu salario eh de %.2f, e seu novo salario sera de %.2f ", salario, novo_salario);
    break;
    case 3 : novo_salario= (salario * 1.2);
    printf ("O funcionario eh um funcionario, seu salario eh de %.2f, e seu novo salario sera de %.2f", salario, novo_salario);
    break;
    default: printf("Codigo invalido");
    }
    return 0;
}
