#include <stdio.h>

int main(){
    int a, b, operação;
    float resultado;

    printf("Digite um número inteiro: \n");
    scanf("%i", &a);

    printf("Digite outro número inteiro: \n");
    scanf("%i", &b);

    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    printf("Escolha uma opção: \n");
    scanf("%i", &operação);

    switch (operação)
    {
    case 1:
        resultado = a + b;
        printf("O resultado da operação é %.1f\n", resultado);
        break;
    case 2:
    resultado = a - b;
    printf("O resultado da operação é %.1f\n", resultado);
    break;
    case 3:
    resultado = a * b;
    printf("O resultado da operação é %.1f\n", resultado);
    break;
    case 4:
    if(b == 0){
        printf("Operação inválida! O denominador não pode ser zero\n");
    }else{
        resultado = a/b;
        printf("O resultado da operação é %.1f\n", resultado);
    }
    break;
    default:
    printf("Opção inválida!\n");
        break;
    }
    return 0;
}