#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[50], cpf[12];
    int num_dependentes;
    float renda_anual, renda_liquida, aliquota, imposto, desconto;

    printf("Digite o nome do contribuinte: ");
    scanf("%s", nome);

    printf("Digite o cpf do contribuinte: ");
    scanf("%s", cpf);

    printf("Digite a renda anual do contribuinte: ");
    scanf("%f", &renda_anual);

    printf("Digite o número de dependentes do contribuinte: ");
    scanf("%d", &num_dependentes);

    desconto = num_dependentes * 110;
    renda_liquida = renda_anual - desconto;

    if(renda_liquida < 800)
    {
        aliquota  = 0;
        printf("O contribuinte está isento de imposto.\n");
    }
    else
    {
        if(renda_liquida <= 4000)
        {
            aliquota = 2.5;
        }
        else
        {
            if(renda_liquida <= 9000)
            {
                aliquota = 5;
            }
            else
            {
                aliquota = 10;
            }
        }
    }

    imposto = renda_liquida * (aliquota/100);

    printf("\nNome: %s\n", nome);
    printf("CPF: %s\n", cpf);
    printf("Renda Líquida: R$%.2f\n", re    nda_liquida);
    printf("Alíquota: %.2f%%\n", aliquota);
    printf("Imposto a ser pago: R$%.2f\n", imposto);

    return 0;
}
