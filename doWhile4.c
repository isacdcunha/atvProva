#include <stdio.h>

int main(){
    int conta, n1, n2;

    printf("Digite um número inteiro: \n");
    scanf("%i", &n1);
    printf("Digite outro número inteiro: \n");
    scanf("%i", &n2);

    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("5 - Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%i", &conta);

    do{
            printf("O resultado da operação é %i\n", n1 + n2);
            printf("Escolha outra opção ou 5 para sair: \n");
            scanf("%i", &conta);
    } while (conta == 1);
    
    do{
        printf("O resultado da operação é %i\n", n1 - n2);
        printf("Escolha outra opção ou 5 para sair: \n");
        scanf("%i", &conta);
} while (conta == 2);

do{
        printf("O resultado da operação é %i\n", n1 * n2);
        printf("Escolha outra opção ou 5 para sair: \n");
        scanf("%i", &conta);
} while (conta == 3);

do{
    if(n2 == 0){
        printf("Operação inválida! O denominador não pode ser zero\n");
    }else{
        printf("O resultado da operação é %i\n", n1/n2);
    }
    printf("Escolha outra opção ou 5 para sair: \n");
    scanf("%i", &conta);
} while (conta == 4);

do{
    printf("Programa finalizado!\n");
    break;
} while (conta == 5);

    return 0;
}