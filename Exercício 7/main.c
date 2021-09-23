//Ler um número inteiro e informar se ele é divisível por 2 e por 3 simultaneamente
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Entre com o numero: ");
    scanf("%d",&num);
    if (num%2==0)
    {
        if (num%3==0)
        printf("O numero eh divisivel por 2 e por 3.");
        else
        printf("O numero nao eh divisivel por 2 e 3.");
    }
    else
    printf("O numero nao eh divisivel por 2 e 3.");
    return 0;
}
