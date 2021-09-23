/* Desenvolver um algoritmo para ler o valor inteiro da idade
de uma pessoa e imprimir uma das mensagens: se a idade
é menor que 13: Criança, se maior que 13 e menor que 20: Adolescente, se a idade maior que 20
e menor que 60: Adulto e se idade maior que 60: Idoso. */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Entre com a idade: ");
    scanf("%d",&age);
    if (age < 13)
        printf("Crianca");
    else if (age <20)
        printf("Adolecente");
    else if (age <60 )
        printf("Adulto");
    else printf("Idoso");

    return 0;
}
