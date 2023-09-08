#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int i, cont1, cont2;
  int vetor1[10], vetor2[10], vetorResultante[20];

  printf("Digite os valores do primeiro vetor:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetor1[i]);
  }

  printf("Digite os valores do segundo vetor:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &vetor2[i]);
  }

  cont1 = 0;
  cont2 = 0;
  for (i = 0; i < 20; i++) {
    if (i % 2 == 0) {
      vetorResultante[i] = vetor2[cont2];
      cont2++;
    } else {
      vetorResultante[i] = vetor1[cont1];
      cont1++;
    }
  }

  printf("Vetor resultante:\n");
  for (i = 0; i < 20; i++) {
    printf("vetorResultante[%d] = %d\n", i, vetorResultante[i]);
  }

  return 0;
}

