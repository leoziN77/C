#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int anoa, anon, idade, idade2040;

	printf("Nasci no ano: ");
	scanf("%d", &anon);

	printf("Ano atual é: ");
	scanf("%d", &anoa);

	idade = anoa-anon;
	printf("A minha idade é %d\n", idade);

	idade2040 = 2040-anon;
	printf("A minha idade em 2040 será: %d", idade2040);

	return 0;

}