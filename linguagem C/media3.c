#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float media;

    printf("Digite a média: ");
    scanf("%f", &media);

    if(media > 5)
    {
        printf("Aprovado!\n");
    }
    else
    {
        if(media < 3)
        {
            printf("Reprovado!");
        }
        else
        {
            printf("Exame");
        }
    }

    return 0;
}