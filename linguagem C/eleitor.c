#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int idade;

	printf("Digite sua idade: ");
	scanf("%d", &idade);

	if(idade < 16)
	{
		printf("Não eleitor");
	}
	else{
		if(idade >= 18 && idade <=65)
		{
			printf("Eleitor obrigatório");
		}
		else
		{
			if(idade >= 16 && idade <= 18 || idade >= 66)
			{
				printf("Eleitor facultativo");
			}
		}
	}


	return 0;
}