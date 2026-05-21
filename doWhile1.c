#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite um número inteiro: \n");
    scanf("%i", &n1);

    printf("Digite outro número inteiro: \n");
    scanf("%i", &n2);

if(n1 < n2){
    do{
        printf("O número %i é menor que o número %i\n", n1, n2);
        n1++;
    } while (n1 < n2);
} else{
    do{
        printf("O número %i é maior que o número %i\n", n1, n2);
        n1--;
    } while (n2 < n1);
}
    return 0;
}