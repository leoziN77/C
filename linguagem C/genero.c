#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char sexo;

	printf("Digite seu gênero: M/F\n");
	scanf("%c", &sexo);

	if(sexo == 'F')
	{
		printf("É mulher!\n");
	}
	else
	{
		printf("É homem!\n");
	}

	return 0;
}