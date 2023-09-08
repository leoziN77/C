#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float p1, p2, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &p1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &p2);

    media = (p1+p2)/2;

    printf("Minha média é: %.2f\n", media);

    if(media >= 5)
    {
        printf("Aprovado!\n");
    }

    return 0;
}    