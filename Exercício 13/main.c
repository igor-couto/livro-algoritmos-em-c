/* Elaborar um algoritmo para ler o c�digo de um produto e
informar a sua origem:
a) C�digo do produto entre 1 e 20: Europa
b) C�digo do produto entre 21 e 40: �sia
c) C�digo do produto entre 41 e 60: Am�rica
d) C�digo do produto entre 61 e 80: �frica
e) C�digo do produto maior que 80: Paraguai */


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
