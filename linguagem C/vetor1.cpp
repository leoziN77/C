#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  char v1[3], v2[3], vr[6];
  int i;

  printf("Dados do primeiro vetor:\n");
  for (i = 0; i < 3; i++) {
    printf("Digite a %dª letra: ", i+1);
    scanf(" %c", &v1[i]); 
  }

  printf("Dados do segundo vetor:\n");
  for (i = 0; i < 3; i++) {
    printf("Digite a %dª letra: ", i+1);
    scanf(" %c", &v2[i]); 
  }

  for (i = 0; i < 3; i++) {
    vr[i] = v1[i];
    vr[i+3] = v2[i];
  }

  printf("O vetor resultante é:\n");
  for (i = 0; i < 6; i++) {
    printf("vr[%d] = %c\n", i, vr[i]);
  }

  return 0;
}

