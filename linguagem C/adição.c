#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int a,b,soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    soma = (a+b);

    if(soma > 10)
    {
        printf("A soma é igual a: %d\n", soma);
    }
    return 0;
}