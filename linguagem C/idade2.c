#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18)
    {
        printf("Maior de idade.\n");
    }
    else
    {
        printf("Menor de idade.\n");
    }

    return 0;
}