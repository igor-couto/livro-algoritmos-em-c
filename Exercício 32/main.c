/* Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,40
metro e cresce 3 centímetros por ano. Construa um algoritmo que calcule e
imprima quantos anos serão necessários para que Zé seja maior que Chico. */

#include <stdio.h>
#include <stdlib.h>

int main()
{   int tempo=0;
    float chico = 1.50, ze = 1.40;

    while (ze < chico)
        {
            chico = chico + 0.02 ;
            ze = ze + 0.03 ;
            tempo++ ;
        }

    printf("Levara %d anos para Ze ficar mais alto que Chico", tempo);

    return 0;
}
