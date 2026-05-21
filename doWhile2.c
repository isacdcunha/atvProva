#include <stdio.h>

int main(){
    int par;

    printf("Digite um número par: \n");
    scanf("%i", &par);

    do
    {
        printf("O número %i não é par! Tente novamente\n", par);
        scanf("%i", &par);
    } while (par % 2 != 0);
    return 0;
}