#include <stdio.h>
#include <string.h>
#include <locale.h>

void listarEmails() {
    FILE *arquivo;
    char email[100];
    int emailEncontrado = 0;  // Variável para rastrear se pelo menos um email foi encontrado

    arquivo = fopen("emails.txt", "r");
    if (arquivo == NULL) {
        printf("Nenhum email cadastrado.\n");
        return;
    }

    printf("\nLista de emails cadastrados:\n");
    while (fgets(email, sizeof(email), arquivo) != NULL) {
        emailEncontrado = 1;  // Marcar que pelo menos um email foi encontrado
        printf("%s", email);
    }

    fclose(arquivo);

    if (!emailEncontrado) {
        printf("Nenhum email encontrado.\n");
    }
}



void inserirEmail() {
    FILE *arquivo;
    char email[100];

    printf("\nDigite o email a ser cadastrado: ");
    fflush(stdin);
    fgets(email, sizeof(email), stdin);
    email[strcspn(email, "\n")] = '\0';  // Remover o caractere de nova linha

    arquivo = fopen("emails.txt", "r");
    if (arquivo != NULL) {
        char linha[100];
        while (fgets(linha, sizeof(linha), arquivo) != NULL) {
            linha[strcspn(linha, "\n")] = '\0';  // Remover o caractere de nova linha
            if (strcmp(linha, email) == 0) {
                printf("Email já inserido.\n");
                fclose(arquivo);
                return;
            }
        }
        fclose(arquivo);
    }

    arquivo = fopen("emails.txt", "a");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo de emails.\n");
        return;
    }

    fprintf(arquivo, "%s\n", email);
    fclose(arquivo);
    printf("\nEmail cadastrado com sucesso.\n");
}


void excluirEmail() {
    FILE *arquivo, *temp;
    char email[100], excluirEmail[100];
    int encontrado = 0;

    printf("\nDigite o email a ser excluído: ");
    fflush(stdin);  // Limpar o buffer de entrada
    fgets(excluirEmail, sizeof(excluirEmail), stdin);
    excluirEmail[strcspn(excluirEmail, "\n")] = '\0';  // Remover o caractere de nova linha

    arquivo = fopen("emails.txt", "r");
    temp = fopen("temp.txt", "w");

    if (arquivo == NULL) {
        printf("\nNenhum email cadastrado.\n");
        return;
    }

    while (fgets(email, sizeof(email), arquivo) != NULL) {
        email[strcspn(email, "\n")] = '\0';  // Remover o caractere de nova linha do email lido do arquivo
        if (strcmp(email, excluirEmail) == 0) {
            encontrado = 1;
        } else {
            fprintf(temp, "%s\n", email);
        }
    }

    fclose(arquivo);
    fclose(temp);

    remove("emails.txt");
    rename("temp.txt", "emails.txt");

    if (encontrado) {
        printf("\nEmail excluído com sucesso.\n");
    } else {
        printf("\nEmail não encontrado.\n");
    }
}



int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Listar emails\n");
        printf("2. Inserir email\n");
        printf("3. Excluir email\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                listarEmails();
                break;
            case 2:
                inserirEmail();
                break;
            case 3:
                excluirEmail();
                break;
            case 4:
                return 0;
            default:
                printf("\nOpção inválida. Tente novamente.\n");
        }
    }

    return 0;
}
