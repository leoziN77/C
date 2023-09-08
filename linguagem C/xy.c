#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    int x, y, auxiliar;

    printf("Informe o valor de x: ");
    scanf("%d", &x);

    printf("Informe o valor de y: ");
    scanf("%d", &y);

    auxiliar = x;
    x = y;
    y = auxiliar;

    printf("Depois da troca, o valor de x eh: %d\n", x);
    printf("Depois da troca, o valor de y eh: %d\n", y);

    return 0;
}
