#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    int num,num1,subtracao,multi,div,soma, mod;

    printf("Calculadora básica\n");
    printf("Entre com 2 números a serem processados: ");
    scanf("%i%i", &num, &num1);

    soma = num + num1;
    subtracao  = num - num1;
    multi   = num * num1;
    div  = num / num1;
    mod = num % num1;

    printf("soma é: %i\n", soma);
    printf("subtração é: %i\n", subtracao);
    printf("multiplicação é: %i \n", multi);
    printf("divisão é: %i \n", div);
    printf("resto da divisão é: %i \n", mod);
    return 0;
}