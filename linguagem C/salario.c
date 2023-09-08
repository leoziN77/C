#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float salario, aumento, novoSalario;

    printf("Informe o salário atual do funcionário: R$ ");
    scanf("%f", &salario);

    printf("Informe o percentual de aumento: ");
    scanf("%f", &aumento);

    novoSalario = salario + (salario * (aumento / 100));
    aumento = novoSalario - salario;

    printf("O valor do aumento é: R$ %.2f\n", aumento);
    printf("O novo salério é: R$ %.2f\n", novoSalario);

    return 0;
}
