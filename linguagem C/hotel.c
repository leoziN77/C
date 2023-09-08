#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	//Declarar variável
	char nome[20], quarto;
	int diarias_utilizadas;
	float valor_unitario, valor_total_diaria, valor_consumo, subtotal, total, taxa;

	//Menu de opções
	printf("\n*********************************\n");
	printf("*                               *\n");
	printf("*         Menu de opções        *\n");
	printf("*                               *\n");
	printf("*      Quarto A - R$150,00      *\n");
	printf("*      Quarto B - R$100,00      *\n");
	printf("*      Quarto C - R$75,00       *\n");
	printf("*      Quarto D - R$50,00       *\n");
	printf("*                               *\n");
	printf("*********************************\n");

	//Qual a opção desejada
	printf("\nQual o quarto escolhido: ");
	scanf("%c", &quarto);
	quarto = toupper(quarto); //Converte para maiúscula

	//Condição para alternativa inválida
	if(quarto < 'A' || quarto > 'D')
	{
		printf("Quarto escolhido inválido, opções válidas apenas entre A e D!\n");
	}
	else
	{
		//Switch case adicionado para definir os  valores
		switch(quarto)
		{
			case 'A':
				valor_unitario = 150.00;
				break;
			case 'B':
				valor_unitario = 100.00;
				break;
			case 'C':
				valor_unitario = 75.00;
				break;
			case 'D':
				valor_unitario = 50.00;
				break;
		}

		printf("Digite seu nome: ");
		scanf("%s", nome);

		printf("Digite quantos dias ficou hospedado: ");
		scanf("%d", &diarias_utilizadas);
		if(diarias_utilizadas <1 || diarias_utilizadas >30)
		{
			printf("Dias inválidos, selecione entre 1 e 30!\n");
		}
		else
		{
			printf("Digite o valor de consumo interno: R$");
			scanf("%f", &valor_consumo);
			if(valor_consumo < 0.00 || valor_consumo > 10000.00)
			{
				printf("Valor de consumo digitado inválido!");
			}
			else
			{
				valor_total_diaria = valor_unitario * diarias_utilizadas;
				subtotal = valor_total_diaria + valor_consumo;
				taxa = subtotal * 0.1;
				total = subtotal + taxa;

				system("cls");

				//Tela final que o usuário vai visualizar
				printf("\nNome: %s\n", nome);
				printf("Número de diárias: %d\n", diarias_utilizadas);
				printf("Valor de consumo interno: R$%.2f\n", valor_consumo);
				printf("Valor do quarto: R$%.2f\n", valor_unitario);
				printf("Valor total das diárias: R$%.2f\n", valor_total_diaria);
				printf("Subtotal: R$%.2f\n", subtotal);
				printf("Valor cobrado da taxa: R$%.2f\n", taxa);
				printf("Valor total da sua estadia: R$%.2f\n", total);
			}
		}
	}

	return 0;
}