#include <stdio.h>

int main(){
    char letra;

    printf("Digite uma letra:\n");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("A letra é uma vogal! Letra %c\n", letra);
        break;
    default:
    printf("A letra é uma consoante! Letra %c\n", letra);
        break;
    }
    return 0;
}