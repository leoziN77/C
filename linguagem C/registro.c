#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct st_veiculos {
	char proprietario[100];
	char combustivel[20];
	char modelo[50];
	char cor[40];
	char n_chassi[30];
	int ano;
	char placa[10];
};

int main(){
	setlocale(LC_ALL, "Portuguese");

	struct st_veiculos veiculos;

	printf("Informe os dados do veículo\n\n");
	printf("Digite o nome do proprietário: 	");
	gets(veiculos.proprietario);
	printf("Digite o tipo do combústivel: ");
	gets(veiculos.combustivel);
	printf("Digite o modelo do veículo: ");
	gets(veiculos.modelo);
	printf("Digite a cor do veículo: ");
	gets(veiculos.cor);
	printf("Digite o número do chassi: ");
	gets(veiculos.n_chassi);
	printf("Digite o ano do veículo: ");
	scanf("%d", &veiculos.ano);
	fflush(stdin);
	printf("Digite a placa do veículo: ");
	gets(veiculos.placa);

	system("cls");

	printf("Dados do veículo\n\n");
	printf("Proprietário: %s \n", veiculos.proprietario);
	printf("Tipo do combustível: %s \n", veiculos.combustivel);
	printf("Modelo: %s \n", veiculos.modelo);
	printf("Cor: %s \n", veiculos.cor);
	printf("Número do chassi: %s \n", veiculos.n_chassi);
	printf("Ano: %d \n", veiculos.ano);
	printf("Placa: %s \n", veiculos.placa);

	return 0;
}