#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  int Gabarito[14], Apostador[15];
  int cont = 0, i;

  printf("Entrada do gabarito:\n");
  for (i = 0; i < 14; i++) {
    printf("Entre com o resultado do jogo %d: ", i + 1);
    scanf("%d", &Gabarito[i]);
  }

  printf("\nDigite o número da aposta: ");
  scanf("%d", &Apostador[14]);

  printf("\nEntre com os valores da aposta:\n");
  for (i = 0; i < 14; i++) {
    printf("Entre com o valor do jogo %d: ", i + 1);
    scanf("%d", &Apostador[i]);
  }

  for (i = 0; i < 14; i++) {
    if (Apostador[i] == Gabarito[i]) {
      cont++;
    }
  }

  printf("\nO jogador %d fez %d pontos\n", Apostador[14], cont);

  if (cont == 13) {
    printf("Ele é um ganhador!!!!!!\n");
  }

  return 0;
}

