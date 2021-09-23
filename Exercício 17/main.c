/*  Tendo como dados de entrada a altura e o sexo de uma
pessoa, construa um programa que calcule seu peso
ideal, utilizando as seguintes fórmulas:
para homens: (72.7*h)-58
para mulheres: (62.1*h)-44.7 */

#include <stdio.h>
#include <stdlib.h>

int main()
{   int sex;
    float peso, altura;
    printf("Entre com seu sexo (1. para HOMENS e 2. para mulheres ) : ");
    scanf("%d",&sex);
    printf("Entre com a altura em metros: ");
    scanf("%f",&altura);

    if (sex == 1)        // Homens
    {
        peso = (72.7*altura)-58;
        printf("o peso ideal eh: %f ", peso);
    }
    else if (sex == 2)   //Mulheres
    {
        peso = (62.1*altura)-44.7;
        printf("o peso ideal eh: %f ", peso);
    }
    else
    printf("Sexo invalido");

    return 0;
}
