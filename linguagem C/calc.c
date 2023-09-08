#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
    float num,num1,subtracao,multi,div,soma;

    printf("Calculadora básica\n");
    printf("Entre com o 1º número: ");
    scanf("%f", &num);
    printf("Entre com o 2º número: ");
    scanf("%f", &num1);

    soma = num + num1;
    subtracao  = num - num1;
    multi   = num * num1;
    div  = num / num1;

    printf("\nsoma é: %.2f\n", soma);
    printf("subtração é: %.2f\n", subtracao);
    printf("multiplicação é: %.2f \n", multi);
    printf("divisão é: %.2f \n", div);
    return 0;
}

