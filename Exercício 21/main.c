/*  Converter uma quantidade de horas digitadas pelo usuário em minutos.
Informe o resultado em minutos. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hrs, min;
    printf("Digite uma quantidade de horas : ");
    scanf("%d", &hrs);
    min = 60 * hrs;
    printf("Isso equivale a %d minutos.", min);
    return 0;
}
