/* Ler um número inteiro e positivo e verificar se este é ou
não um número primo. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont=2,aux;
    printf("Digite algum numero: ");
    scanf("%d", &num);
    if ( num >= 1)
    {
        while (cont < num)
        {
            aux = num%cont;
            if (aux=0)
            {
                printf("Nao eh primo");
            }
            cont = cont + 1;
        }
        printf("Numero primo");
    }

    return 0;
}
