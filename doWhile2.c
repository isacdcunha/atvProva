#include <stdio.h>

int main() {
    int par;

    printf("Digite um número par: ");
    scanf("%i", &par);

    while (par % 2 != 0) {
        printf("O número %i não é par! Tente novamente: ", par);
        scanf("%i", &par);
    }

    printf("Número válido: %i\n", par);

    return 0;
}