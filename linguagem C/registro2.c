#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

struct st_aluno {
	char turma[5];
	char nome[50];
	float media;
};

int main(){
	setlocale(LC_ALL, "Portuguese");

	struct st_aluno aluno;

	printf("Informe os dados do aluno\n\n");
	printf("Turma: ");
	gets(aluno.turma);
	printf("Nome: ");
	gets(aluno.nome);
	printf("Média: ");
	scanf("%f", &aluno.media);

	system("cls");

	printf("Dados do aluno\n\n");
	printf("Turma: %s \n", aluno.turma);
	printf("Nome: %s \n", aluno.nome);
	printf("Média: %.2f \n", aluno.media);

	return 0;
}