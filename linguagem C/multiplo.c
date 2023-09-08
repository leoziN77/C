#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero % 3 == 0)
    {
        printf("O número %d é múltiplo de 3.\n", numero);
    }
    else
    {
        printf("O número %d não é múltiplo de 3.\n", numero);
    }

    return 0;
}