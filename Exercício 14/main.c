/* Para auxiliar os vendedores de uma loja na orientação
aos clientes sobre as diversas formas de pagamento,
desenvolver um algoritmo para imprimir o seguinte menu:
Forma de pagamento:
1. A vista.
2. Cheque para trinta dias.
3. Em duas vezes.
4. Em três vezes.
5. Em quatro vezes.
6. A partir de cinco vezes.
Entre com sua opção:

E em seguida ler o código da opção de pagamento e imprimir
uma das mensagens de acordo com a opção lida:
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{   int op;

    printf("\tForma de pagamento:\n");
    printf("\t1. A vista\n");
    printf("\t2. Cheque para trinta dias\n");
    printf("\t3. Em duas vezes\n");
    printf("\t4. Em tres vezes\n");
    printf("\t5. Em quarto vezes\n");
    printf("\t6. A partir de cinco vezes\n\n");
    printf("\tEntre com a sua opcao: ");
    scanf("%d", &op);
    switch (op)
    {
        case 1 : printf("Desconto de 20%%");
        break;
        case 2 : printf("Mesmo preço a vista");
        break;
        case 3 : printf("Mesmo preço a vista");
        break;
        case 4 : printf("Mesmo preço a vista");
        break;
        case 5 :printf("Juros de 3%% ao mes");
        break;
        case 6 : printf("Juros de 5%% ao mes");
        break;
        default : printf("Opcao invalida");
    }
    return 0;
}
