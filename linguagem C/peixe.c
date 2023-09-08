#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    float peso, excesso, multa;

    printf("Digite o peso dos peixes em Kg: ");
    scanf("%f", &peso);

    if(peso > 50)
    {
        excesso = peso - 50;
        multa = excesso * 4;
        printf("Excesso de peso: %.2fKg\n", excesso);
        printf("O valor da multa é: R$%.2f\n", multa);
    }
    else
    {
        excesso = 0;
        multa = 0;
        printf("Excesso de peso: %.2fKg\n", excesso);
        printf("Valor da multa: R$%.2f\n", multa);
    }

	return 0;
}