#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
    float salario, novoSalario;

    printf("Digite o valor do salário: R$");
    scanf("%f", &salario);

    if(salario <= 3000)
    {
        novoSalario = salario*35/100 + salario;
    }
    else
    {
        novoSalario = salario*15/100 + salario;
    }

    printf("O novo salário é: R$%.2f\n", novoSalario);
    return 0;
}