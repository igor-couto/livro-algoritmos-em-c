/* Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,40
metro e cresce 3 cent�metros por ano. Construa um algoritmo que calcule e
imprima quantos anos ser�o necess�rios para que Z� seja maior que Chico. */

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
