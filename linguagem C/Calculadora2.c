#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int arit, c, i = 0;
	
	float adic[2], sub[2], multi[2], div[2];
	
	printf("*************************************************\n");
	printf("*                                               *\n");
	printf("*        Quantas contas serão feitas?           *\n");
	printf("*                                               *\n");
	printf("*************************************************\n");
	scanf("%d", &c);
	
	float  resultado[c], numeros_resultado[c], numeros_resultado2[c];
	
	do{
	printf("\n\n*************************************\n");
	printf("*                                   *\n");
	printf("*         Menu de opções            *\n");
	printf("*                                   *\n");
	printf("*           Adição = 1              *\n");
	printf("*           Subtração = 2           *\n");
	printf("*           Multiplicação = 3       *\n");
	printf("*           Divisão = 4             *\n");
	printf("*           Resultados = 5          *\n");
	printf("*           Sair = 0                *\n");
	printf("*                                   *\n");
	printf("*************************************\n");
	
	
	printf("Entre com a opção desejada:");
	scanf("%d", &arit);
	
		switch(arit){
			case 1://adição
				printf ("Selecione o primeiro número: ");
				scanf("%f", &adic[1]);
				printf("Selecione o segundo número: ");
				scanf("%f", &adic[2]);
				
				resultado[i] = adic[1] + adic[2];
				
				numeros_resultado[i] = adic[1];
				numeros_resultado2[i] = adic[2];
				
				system("cls");
				printf("\n%.2f + %.2f = %.2f", numeros_resultado[i], numeros_resultado2[i], resultado[i]);
				break;
				
			case 2://subtração
				printf ("Selecione o primeiro número: ");
				scanf("%f", &sub[1]);
				printf("Selecione o segundo número: ");
				scanf("%f", &sub[2]);
				
				resultado[i] = sub[1] - sub[2];
				
				numeros_resultado[i] = sub[1];
				numeros_resultado2[i] = sub[2];
				
				system("cls");
				printf("\n%.2f - %.2f = %.2f", numeros_resultado[i], numeros_resultado2[i], resultado[i]);
				break;
				
			case 3://multiplicação
				printf ("Selecione o primeiro número: ");
				scanf("%f", &multi[1]);
				printf("Selecione o segundo número: ");
				scanf("%f", &multi[2]);
				
				resultado[i] = multi[1] * multi[2];
				
				numeros_resultado[i] = multi[1];
				numeros_resultado2[i] = multi[2];
				
				system("cls");
				printf("\n%.2f * %.2f = %.2f", numeros_resultado[i], numeros_resultado2[i], resultado[i]);
				break;
				
			case 4://divisão 
				printf ("Selecione o primeiro número: ");
				scanf("%f", &div[1]);
				printf("Selecione o segundo número: ");
				scanf("%f", &div[2]);
				
				resultado[i] = div[1] / div[2];
				
				numeros_resultado[i] = div[1];
				numeros_resultado2[i] = div[2];
				
				system("cls");
				printf("\n%.2f / %.2f = %.2f", numeros_resultado[i], numeros_resultado2[i], resultado[i]);
				break;
			
		}
		
		i++;
	}while(i < c);
	
	printf("\n\nQual operação você quer ver o resultado?:  ");
	scanf("%d", &c);
	
	printf("%.2f + %.2f = %.2f", numeros_resultado[c], numeros_resultado2[c], resultado[c]);
	

	
	
	
	return 0;
}
