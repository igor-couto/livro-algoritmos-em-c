/*Fazer um algoritmo para ler dois n�meros e um dos
s�mbolos das opera��es: +, -, * e /. Imprimir o resultado
da opera��o efetuada sobre os n�meros lidos.*/
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
    default: printf("Opera��o invalida.");
    }
    printf("O resultado eh : %.5f", resultado);
    return 0;
}
