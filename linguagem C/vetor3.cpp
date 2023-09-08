
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
  int n = 5;
  int a[5], b[5], i, j;
  int somaA = 0, somaB = 0;
  int qtdA = 0, qtdB = 0;
  float mediaA, mediaB;

  for (i = 0; i < n; i++) {
    int x;
    printf("Digite o %d° número: ", i + 1);
    scanf("%d", &x);
    if (x % 2 == 0) {
      b[qtdB] = x;
      somaB += x;
      qtdB++;
    } else {
      a[qtdA] = x;
      somaA += x;
      qtdA++;
    }
  }

  mediaA = (float) somaA / qtdA;
  mediaB = (float) somaB / qtdB;

  printf("\nMatriz A (ímpares):\n");
  for (i = 0; i < qtdA; i++) {
    printf("%d ", a[i]);
  }

  printf("\n\nMatriz B (pares):\n");
  for (i = 0; i < qtdB; i++) {
    printf("%d ", b[i]);
  }

  printf("\n\nMédia dos números ímpares: %.2f", mediaA);
  printf("\nQuantidade de números ímpares: %d", qtdA);
  printf("\nMédia dos números pares: %.2f", mediaB);
  printf("\nQuantidade de números pares: %d\n", qtdB);

  return 0;
}

