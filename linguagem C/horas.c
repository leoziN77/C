#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL,"portuguese");
    int horas, minutos, minutos_final;

    printf("*******************************\n");
    printf("*                             *\n");
    printf("*     Contador de minutos     *\n");
    printf("*                             *\n");
    printf("*       1 hora = 60 minutos   *\n");
    printf("*******************************\n");

    do {
        printf("Digite somente as horas: ");
        scanf("%d", &horas);

        if (horas < 0 || horas > 24) {
            printf("Valor inválido! As horas devem estar entre 0 e 24.\n");
        }
    } while (horas < 0 || horas > 24);

    do {
        printf("Digite somente os minutos: ");
        scanf("%d", &minutos);

        if (minutos < 0 || minutos >= 60) {
            printf("Valor inválido! Os minutos devem estar entre 0 e 59.\n");
        }
    } while (minutos < 0 || minutos >= 60);

    minutos_final = 60 * horas + minutos;

    printf("Em %d horas e %d minutos, temos um total de %d minutos.\n", horas, minutos, minutos_final);

    return 0;
}

