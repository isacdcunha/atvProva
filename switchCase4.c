#include <stdio.h>

int main(){
    int transporte;

    printf("1 - Motocicleta\n");
    printf("2 - Carro\n");
    printf("3 - Caminhão\n");
    printf("4 - Ônibus\n");
    printf("Digite qual meio de transporte você deseja:\n");
    scanf("%i", &transporte);

    switch(transporte){
        case 1:
        printf("O pedágio da motocicleta custa R$5,00\n");
        break;
        case 2:
        printf("O pedágio do carro custa R$12,50\n");
        break;
        case 3:
        printf("O ppedágio do caminhão custa R$25,00\n");
        break;
        case 4:
        printf("O pedágio do ônibus custa R$18,00\n");
        break;
        default:
        printf("Valor inválido!\n");
        break;
    }
    return 0;
}