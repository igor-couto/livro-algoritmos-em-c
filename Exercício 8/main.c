/*Ler um n�mero inteiro e informar se ele � divis�vel por 2 e por 3, mas que n�o seja
divis�vel por 5.*/
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
        {
        printf("O numero eh divisivel por 2 e por 3.");
        }
        else
        printf("O numero nao eh divisivel por 2 e 3.");
        if (num%5==0)
        printf(" Mas eh divisivel por 5");
    }
    else
    printf("O numero nao eh divisivel por 2 e 3.");
    return 0;
}
