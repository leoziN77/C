#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float A[100], aux;
  int i, j;

  for (i = 0; i < 100; i++) {
    printf("Escreva o valor %d: ", i);
    scanf("%f", &A[i]);
  }

  for (i = 0; i < 99; i++) {
    for (j = i + 1; j < 100; j++) {
      if (A[i] > A[j]) {
        aux = A[i];
        A[i] = A[j];
        A[j] = aux;
      }
    }
  }

  printf("Vetor em ordem crescente:\n");
  for (i = 0; i < 100; i++) {
    printf("%f ", A[i]);
  }
  printf("\n");

  return 0;
}

