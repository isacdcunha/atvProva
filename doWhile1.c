#include <stdio.h>

int main() {
    int n1, n2;

    printf("Digite um número inteiro: ");
    scanf("%i", &n1);

    printf("Digite outro número inteiro: ");
    scanf("%i", &n2);

    while (n1 < n2) {
        printf("O número %i é menor que o número %i\n", n1, n2);
        n1++;
    }

    while (n1 > n2) {
        printf("O número %i é maior que o número %i\n", n1, n2);
        n1--;
    }

    printf("Os números ficaram iguais: %i\n", n1);

    return 0;
}