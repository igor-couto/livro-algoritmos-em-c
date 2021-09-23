/* Elabore um programa que, dada a idade de um nadador,
classifique-o em uma das seguintes categorias:
-infantil A = 5 7 anos
-infantil B = 8 10 anos
-juvenil A = 11 13 anos
-juvenil B = 14 17 anos
-adulto = 18 30 anos
-sênior = maiores de 30 anos */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if (idade <5)
    printf("Nadador muito novo");
    else if (idade <=7)
    printf("Infantil A");
    else if (idade <=10)
    printf("Infantil B");
    else if (idade <=13)
    printf("Juvenil A");
    else if (idade <=17)
    printf ("Juvenil B");
    else if (idade <=30)
    printf("Adulto");
    else if (idade >30)
    printf("Senior");
    return 0;
}
