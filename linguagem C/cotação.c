#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    //Declaração de variáveis
    float cota1, cota2, cota3, cota4, media;

    //Entrada de dados
    printf("Digite o valor da cotação na primeira concesssionária: R$");
    scanf("%f", &cota1);
    printf("Digite o valor da cotação na segunda concessionária: R$");
    scanf("%f", &cota2);
    printf("Digite o valor da cotação na terceira concessionária: R$");
    scanf("%f", &cota3);
    printf("Digite o valor da cotação na quarta concessionária: R$");
    scanf("%f", &cota4);

    media = (cota1 + cota2 + cota3 + cota4)/4;

    //Saída de dados
    printf("A média da cotação do carro nas quatro concessionárias é: R$%.2f\n", media);

    return 0;
}