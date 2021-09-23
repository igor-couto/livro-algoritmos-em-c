/* Escrever um algoritmo que lê um valor N inteiro e positivo e que calcula e
escreve o valor de E.
E = 1 + 1/2 + 1/3 + ... + 1/N */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N=0;
    float den=1,temp=0,E=0;

    while (N <= 0) // O usuário entra com o valor de N e tem que ser positivo
    {
    printf("Digite um valor inteiro ┼ √ ∞ ∩ ₤  ⁿ  e positivo para N: ");
    scanf("%d.", &N);
    if (N<=0)
    printf ("Eh um valor INTEIRO e POSITIVO sua mula!\n\n");
    }

    while (den <= N) // faz a soma em E.
    {
    temp = (1/den);
    E = temp + E;
    den++;
    }

    printf("O valor da soma E eh : %.2f .", E );


    return 0;
}
