/* Dada uma d�vida de 10000 reais que cresce a juros de
2,5% ao m�s e uma aplica��o de 1500 reais com
rendimento de 4% ao m�s, escrever um algoritmo que
determina o n�mero de meses necess�rios para pagar
a d�vida. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mes=0;
    float div=10000, apl= 1500;
    while (div > apl)
    {
        div = div + div * 1.025;
        apl = apl + apl * 1.04;
        mes = mes + 1;
    }
    printf("Para pagar a divida s�o nescessarios %d anos e %d meses.", mes/12, mes%12);

    return 0;
}
