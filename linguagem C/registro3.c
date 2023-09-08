#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct st_pessoa {
	char nome[50];
	char sexo[30];
	int idade;
	float altura;
};

int main(){
	setlocale(LC_ALL, "Portuguese");

	struct st_pessoa pessoa;

	printf("Informe os dados da Pessoa\n\n");
	printf("Digite o nome: ");
	gets(pessoa.nome);
	printf("Digite o sexo: ");
	gets(pessoa.sexo);
	fflush(stdin);
	printf("Digite a idade: ");
	scanf("%d", &pessoa.idade);
	printf("Digite a altura: ");
	scanf ("%f", &pessoa.altura);

	system("cls");

	printf("Dados da Pessoa.\n\n");
	printf("Nome: %s\n", pessoa.nome);
	printf("Sexo: %s\n", pessoa.sexo);
	printf("Idade: %d\n", pessoa.idade);
	printf("Altura: %.2f\n", pessoa.altura);



	return 0;
}