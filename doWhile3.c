#include <stdio.h>

int main(){
    int numero;
    int soma = 0;

    printf("Digite um número inteiro positivo: \n");
    scanf("%i", &numero);

    soma = soma + numero;
    do
    {
        printf("Digite outro número inteiro positivo ou 0 para finalizar: \n");
        scanf("%i", &numero);
        soma = soma + numero;
    } while (numero != 0);
    printf("A soma dos números digitados é %i\n", soma);
    return 0;
}