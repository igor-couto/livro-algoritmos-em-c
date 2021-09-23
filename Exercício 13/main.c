/* Elaborar um algoritmo para ler o código de um produto e
informar a sua origem:
a) Código do produto entre 1 e 20: Europa
b) Código do produto entre 21 e 40: Ásia
c) Código do produto entre 41 e 60: América
d) Código do produto entre 61 e 80: África
e) Código do produto maior que 80: Paraguai */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod;
    printf("Entre com o codigo do produto: ");
    scanf("%d", &cod);
    if (cod <= 20)
        printf("Europa");
    else if (cod <= 40)
        printf("Asia");
    else if (cod <= 60)
        printf("America");
    else if (cod <= 80)
        printf("Africa");
    else if (cod >80)
        printf ("Paraguai");

    return 0;
}
