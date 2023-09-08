#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int codigo;

	printf("Digite um código: ");
	scanf("%d", &codigo);

	if(codigo == 1)
	{
		printf("Escrituá6rio");
	}
	else{
		if(codigo == 2)
		{
			printf("Secretária");
		}
		else
		{
			if(codigo == 3)
			{
				printf("Caixa");
			}
			else
			{
				if(codigo == 4)
				{
					printf("Gerente");
				}
				else
				{
					if(codigo == 5)
					{
						printf("Diretor");
					}
					else
					{
						printf("Código invalido");
					}
				}
			}
		}
	}

	return 0;
}