#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float numero1, numero2, resultado;
	char opcao;

	printf("\n*********************************\n");
	printf("*                               *\n");
	printf("*         Menu de opções        *\n");
	printf("*                               *\n");
	printf("*  A- Somar dois números        *\n");
	printf("*  B- Multiplicar dois números  *\n");
	printf("*  C- Subtrair dois números     *\n");
	printf("*  D- Dividir dois números      *\n");
	printf("*                               *\n");
	printf("*********************************\n");

	printf("\nEscolha a opção desejada: ");
	scanf("%c", &opcao);

	if((opcao < 'A' || opcao > 'D') && (opcao < 'a' || opcao > 'd'))
	{
		printf("Opção desejada inválida!\n");
	}
	else
	{
		printf("Digite o primeiro número: ");
		scanf("%f", &numero1);

		printf("Digite o segundo número: ");
		scanf("%f", &numero2);
	}

	if(opcao == 'A' || opcao == 'a')
	{
		resultado = numero1 + numero2;
		printf("O resultado da soma é: %.2f\n", resultado);
	}
	else
	{
		if(opcao == 'B' || opcao == 'b')
		{
			resultado = numero1 * numero2;
			printf("O resultado da multiplicação é: %.2f\n", resultado);
		}
		else
		{
			if(opcao == 'C' || opcao == 'c')
			{
				resultado = numero1 - numero2;
				printf("O resultado da subtração é: %.2f\n", resultado);
			}
			else
			{
				if(opcao == 'D' || opcao == 'd')
				{
					resultado = numero1 / numero2;
					printf("O resultado da divisão é: %.2f\n", resultado);
				}
			}
		}
	}

	return 0;
}