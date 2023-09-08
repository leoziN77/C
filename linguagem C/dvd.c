#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	float dvd1, dvd2, dvd3, total;

	//Solicita ao usuário o valor dos Dvds
	printf("Digite o valor do primeiro Dvd: ");
	scanf("%f", &dvd1);

	printf("Digite o valor do segundo Dvd: ");
	//& utilizado para armazenar espaço na memória
	scanf("%f", &dvd2);

	//Utilizei scanf para solicitar ao usuário a entrada dos valores das compras de dvd
	printf("Digite o valor do terceiro Dvd: ");
	scanf("%f", &dvd3);

	//Calcula o valor total
	total = dvd1 + dvd2 + dvd3;

	//Utilizei %.2f\n para representar 2 casas decimais
	//Exibe o valor total da compra
	printf("O valor total da compra é: R$%.2f\n", total);

	return 0;
}