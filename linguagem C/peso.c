#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M para masculino ou F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
    {
        pesoIdeal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem com altura de %.2fm é %.2fkg\n", altura, pesoIdeal);
    }
    else
    {
        if (sexo == 'F' || sexo == 'f')
        {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher com altura de %.2fm é %.2fkg\n", altura, pesoIdeal);
        }
        else
        {
           printf("Sexo inválido! Digite M para masculino ou F para feminino.\n");
        }
    }


    return 0;
}
