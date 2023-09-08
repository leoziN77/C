#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float  n;

    printf("Insira o valor: ");
    scanf("%f", &n);

    if(n >= 20)
    {
        printf("Maior que 20!\n");
    }
    else
    {
        printf("Menor que 20!\n");
    }

    return 0;
}