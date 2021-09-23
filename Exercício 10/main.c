/*Fazer um algoritmo para ler dois números e um dos
símbolos das operações: +, -, * e /. Imprimir o resultado
da operação efetuada sobre os números lidos.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float resultado;
    char sinal;
    printf("Entre com a operacao: ");
    scanf("%d %c %d",&a, &sinal, &b);
    switch (sinal)
    {
    case '+':resultado=a+b;
    break;
    case '-':resultado=(a-b);
    break;
    case '*':resultado=(a*b);
    break;
    case '/': if(b!=0) resultado=(a/b);
    break;
    default: printf("Operação invalida.");
    }
    printf("O resultado eh : %.5f", resultado);
    return 0;
}
