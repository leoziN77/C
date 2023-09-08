#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int n, i;
  int vet1[100], vet2[100], vet3[100];

  printf("Qual o número de elementos dos vetores? ");
  scanf("%d", &n);

  while (n < 0 || n > 99) {
    printf("Valor inválido. Digite um novo valor: ");
    scanf("%d", &n);
  }

  for (i = 0; i < n; i++) {
    printf("Digite o elemento %d do vetor 1: ", i);
    scanf("%d", &vet1[i]);
  }

  for (i = 0; i < n; i++) {
    printf("Digite o elemento %d do vetor 2: ", i);
    scanf("%d", &vet2[i]);
  }

  for (i = 0; i < n; i++) {
    vet3[i] = 2 * vet1[i] - 3 * vet2[i];
  }

  printf("O resultado do vetor3 é: ");

  for (i = 0; i < n; i++) {
    printf("%d ", vet3[i]);
  }

  printf("\n");

  return 0;
}

