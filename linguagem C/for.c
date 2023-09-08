#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, media;
    int i;

	for(int i = 1; i<=2; i++){

	printf("Digite a primeira nota para obter a média: ");
	scanf("%f", &n1);

	printf("Digite a segunda nota para obter a média: ");
	scanf("%f", &n2);

	media = (n1+n2)/2;
	printf("A média é: %.2f\n\n", media);
	}

	return 0;
}