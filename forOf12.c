#include <stdio.h>

int main (){
    int numero, par = 0, impar = 0;
    for (int i = 0; i < 10; i++)
    {
        printf("Informe um número inteiro\n");
        scanf("%i", &numero);

        if (numero % 2 == 0)
        {
            par++;
        }else{
            impar++;
        }
    }
    printf("Ímpares: %i\n Pares: %i\n", impar, par);
    return 0;
}