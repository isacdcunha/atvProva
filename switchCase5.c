#include <stdio.h>

int main(){
    float valor, resultado;
    int pagamento, parcelas;

    printf("Qual foi o valor da compra?\n");
    scanf("%f", &valor);

    printf("1- Crédito\n");
    printf("2- Débito\n");
    printf("3- Pix\n");
    printf("4- Boleto\n");
    printf("Escolha a forma de pagamento:\n");
    scanf("%i", &pagamento);

    switch (pagamento)
    {
    case 1:
        printf("Em quantas parcelas deseja fazer?\n");
        scanf("%i", &parcelas);
        resultado = valor/parcelas;
        printf("O valor total da compra foi R$%.2f, em %i parcelas ficará R$%.2f por mês.\n", valor, parcelas, resultado);
        break;
    case 2:
        printf("O valor total da compra foi R$%.2f e você pagará no débito.\n", valor);
        break;
    case 3:
        resultado = valor - (valor * 0.05);
        printf("O valor total da compra foi R$%.2f, mas com 5%% de desconto ficará R$%.2f\n", valor, resultado);
        break;
    case 4:
        resultado = valor + (valor * 0.02);
        printf("O valor total da compra foi R$%.2f, mas com a taxa adicional de 2%%, ficará R$%.2f\n", valor, resultado);
        break;
    default: 
    printf("Valor inválido!\n");
        break;
    }
    return 0;
}