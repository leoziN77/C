#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, nota4, media;

    printf("Digite a primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota do aluno: ");
    scanf("%f", &nota3);


    printf("Digite a quarta nota do aluno: ");
    scanf("%f", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    if (media >= 5)
    {
        printf("Média: %.2f\nAluno aprovado!\n", media);
    }
    else
    {
        printf("Média: %.2f\nAluno reprovado!\n", media);
    }

    return 0;
}
