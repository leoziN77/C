#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define PI 3.14159


int main() {
    setlocale(LC_ALL, "Portuguese");
    float raio, area;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A área do circulo de raio %.2f é: %.2f\n", raio, area);

    return 0;
}