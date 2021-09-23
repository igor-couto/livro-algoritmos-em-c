//Ler um número inteiro e informar se ele é divisível por 2.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Entre com o numero: ");
    scanf("%d",&num);
    if (num%2==0){
    printf("O numero eh divisivel por 2.");
    }
    else {
    printf("O numero nao eh divisivel por 2");
    }
    return 0;
}
