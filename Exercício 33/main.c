/* Escreva um algoritmo que leia a matrícula de um aluno e suas três notas.
Calcule a média ponderada do aluno, considerando que o peso para a maior
nota seja 4 e para as duas restantes, 3. Mostre ao final a média calculada e
uma mensagem "APROVADO" se a média for maior ou igual a 5 e
"REPROVADO" se a média for menor que 5. Repita a operação até que o
código lido seja negativo. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat=1;
    float nota1=-1,nota2=-1,nota3=-1,media;

    while (mat >= 0)
    {
    printf("Entre com sua matricula: ");
    scanf("%d", &mat);

    while (nota1<0 || nota1>3)
    {
        printf("\nPrimeira nota: ");
        scanf("%f", &nota1);
    }

    while (nota2<0 || nota2>3)
    {
        printf("\nSegunda nota: ");
        scanf("%f", &nota2);
    }

    while (nota3<0 || nota3>4)
    {
        printf("\nTerceira nota: ");
        scanf("%f", &nota3);
    }

    media = (nota1+nota2+nota3);

    if (media < 5)
    printf("\nREPROVADO!\n\n");
    else
    printf("\nAPROVADO!\n\n");
    }

    return 0;
}
