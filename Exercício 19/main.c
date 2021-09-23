/* Faça um programa para ler um caracter e imprimir as seguintes
mensagens, segundo o caso:
-Sinal de Menor
-Sinal de maior
-Sinal de Igual
-Outro caracter */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caracter;
    printf("Entre com o caracter: ");
    scanf("%c", &caracter);
    switch (caracter)
    {
    case '<' : printf("Sinal de menor");
    break;
    case '>' : printf("Sinal de maior");
    break;
    case'=' : printf("Sinal de igual");
    break;
    default : printf("Outro caracter");
    return 0;
    }
}
