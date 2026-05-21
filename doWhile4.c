#include <stdio.h>

int main() {
    int conta, n1, n2;

    printf("Digite um número inteiro: ");
    scanf("%i", &n1);

    printf("Digite outro número inteiro: ");
    scanf("%i", &n2);

    do {
        printf("\n1 - Adição\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%i", &conta);

        if (conta == 1) {
            printf("Resultado: %i\n", n1 + n2);

        } else if (conta == 2) {
            printf("Resultado: %i\n", n1 - n2);

        } else if (conta == 3) {
            printf("Resultado: %i\n", n1 * n2);

        } else if (conta == 4) {

            if (n2 == 0) {
                printf("Operação inválida!\n");
            } else {
                printf("Resultado: %i\n", n1 / n2);
            }

        } else if (conta == 5) {
            printf("Programa finalizado!\n");

        } else {
            printf("Opção inválida!\n");
        }

    } while (conta != 5);

    return 0;
}